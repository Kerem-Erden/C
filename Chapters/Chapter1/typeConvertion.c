#include <stdio.h>
#include <string.h>

// htoi hex to int

    int htoi(char s[])
{
    int i;
    int n = 0;     /* Sonucu tutacak değişken */
    int val;       /* Karakterin sayısal değerini tutacak */

    i = 0;
    /* Başta 0x veya 0X var mı kontrol et */
    if (s[i] == '0') {
        if (s[i+1] == 'x' || s[i+1] == 'X') {
            i += 2; /* 0x kısmını atla */
        }
    }

    /* Geçerli hex karakterleri olduğu sürece döngüyü çalıştır */
    for (; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            val = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            val = s[i] - 'a' + 10;
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            val = s[i] - 'A' + 10;
        } else {
            /* Geçersiz bir karakter gördüğü an (örn: boşluk, 'z' vb.) döngüden çık */
            break; 
        }

        /* Sayıyı 16 tabanına göre büyüt ve yeni değeri ekle */
        n = 16 * n + val;
    }

    return n;
}


  /* atoi:  convert s to integer */
   int atoi(char s[])
   {
       int i, n;
       n = 0;
       for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
           n = 10 * n + (s[i] - '0');
       return n;
   }

 /* lower:  convert c to lower case; ASCII only */
   int lower(int c)
   {
   
       if (c >= 'A' && c <= 'Z')
           return c + 'a' - 'A';
       else
           return c;
    }
    
int main() 
{
   
   
    

}

