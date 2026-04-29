#include <stdio.h>

int main() {
     int trueAnswer, temp, totalPoint, questionPerPoint;

     questionPerPoint = 25;
     temp = 0;
     printf("Every questions are 50 points.\n\n");

     printf("Question 1: What is the capital of Turkey ?\n 1)Ankara\n 2-Istanbul\n 3-Cankiri\n 4-Rize\n");
     scanf("%d", &trueAnswer);
     if (trueAnswer == 1){
        printf("Congratulations your answer is right.\n");
        temp++;
     }
    else
     printf("Opps! False answer\n");


    printf("Question 2: What is the capital of USA ?\n 1)New York\n 2-Wachington DC\n 3-Texas\n 4-Los Angeles\n");
     scanf("%d", &trueAnswer);
     if (trueAnswer == 2){
        printf("Congratulations your answer is right.\n");
        temp++;
     }
    else
     printf("Opps! False answer\n");


    totalPoint = questionPerPoint * temp;
    printf("Game is finish, your total point is: %d", totalPoint);










    return 0;
}