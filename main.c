#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int randomNumber = (rand()%100) + 1;
    int no_of_guesses = 0;
    int guessed;
    do
    {
        printf("guess the number:");
        scanf("%d",&guessed);
        if(randomNumber>guessed){
            printf("higher number please\n");
        }
        else if (randomNumber<guessed)
        {
            printf("lower number please\n");
        }
        no_of_guesses++;
        
    } while (guessed != randomNumber);
        printf("You guessed the number in %d try", no_of_guesses);
    
    
    
    return 0;
}