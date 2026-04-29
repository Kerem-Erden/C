#include <netinet/in.h>
#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define PORT 8181

int main()
{
    int server, client;
    socklen_t addrlen;
    struct sockaddr_in srv, cli;
    char buf[512];
    char *data;

    addrlen = 0;
    memset(&srv, 0, sizeof(srv));
    memset(&cli, 0, sizeof(cli));
    server = socket(AF_INET, SOCK_STREAM, 0);
    if (server < 0)
    {
        printf("socket()\n");
        return -1;
    }

    srv.sin_family = AF_INET;
    srv.sin_addr.s_addr = 0;
    srv.sin_port = htons(PORT);

    if (bind(server, (struct sockaddr *)&srv, sizeof(srv)))
    {
        printf("bind()\n");
        close(server);

        return -1;
    }

    if (listen(server, 5))
    {
        printf("listen()\n");
        close(server);

        return -1;
    }

    printf("Listening on 0.0.0.0:%d\n", PORT);

    client = accept(server, (struct sockaddr *)&srv, &addrlen);
    if (client < 0)
    {
        printf("accept()\n");
        close(server);

        return -1;
    }

    printf("Client connected\n");
    read(client, buf, 511);
    data = "httpd v1.0\n";
    write(client, data, strlen(data));

    close(client);
    close(server);

    return 0;
}