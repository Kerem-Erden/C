#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//random dice number function
int random_Dice(int dice_surface_number)
{
    return rand() % dice_surface_number + 1;
}

int main() 
{
    int balance, bet, dice, guess, gameState;

    //defining random dice number
    srand(getpid());//*** 
    dice = random_Dice(6);

    printf("Win = 3x your bet.\n");
    printf("Loose = loose your bet.\n");
    

    //defining the balance
    balance = 1000;
    
    while(1)
    {   
        printf("Your total balance is: %d\nFor Game Pause press 0.\nFor start game press 1.\n", balance);
        scanf("%d", &gameState);
        if(gameState == 0);
        {
            gameState++;
            sleep(2);
            
        }

        printf("What is your bet ?\n");
        scanf("%d", &bet);
        printf("Guess the dice number ?\n");
        scanf("%d", &guess);

        //win statement
        if (guess == dice)
        {
            balance = bet * 3 + balance;
            printf("Congratulations your guess is right.\nTotal balance is: %d\n", balance);
        }
        else
        {
            balance = balance - bet;
            printf("Your guess is false.\nTotal balance is: %d\n", balance);
            if(balance <= 0)
            {
                printf("Your balance is under the 0 game is over!!!\n");
                continue;
            } 
        }
        
    }
    return 0;
}
