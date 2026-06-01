#include <stdio.h>

#define LOWER 0 // SYMBOLIC CONSTANST
#define UPPER 300
#define STEP 20

int main() {
    //C = (F - 32) X 5/9

    float celcius, fahrenheit;
    float lower, upper, step;

    /* lower = 0;
    upper = 300;  //bu kullanim iyi bir kullanim degildir sonradan okumasi ve degistiemesi zor olacaktir
    step = 20; */ // bunun yerine ****#define***** kullanilmali

  /*  fahrenheit = 0;
    printf("|Celcius-Fahrenheit Table|\n|Celcius | Fahrenheit|\n");
    while(fahrenheit <= upper)
    {
        celcius = (fahrenheit - 32) * 5/9;
        printf("|%3.1f C | %3.1f F|\n",celcius, fahrenheit);
        fahrenheit = fahrenheit + step;
    }
    */

    for (fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit += STEP) //for looplara daha uygun appropriate
    {
        celcius = (fahrenheit - 32) * 5/9;
        printf("|%3.1f C | %3.1f F|\n",celcius, fahrenheit);
    }

    return 0;
    
}