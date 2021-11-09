#include <stdio.h>
#include <stdlib.h>

int main()
{
    int target;
    int guessNo;
    int guessTime = 0;
    int nGuess = 1;
    int maxGuess = 10;
    int maxNumber = 10;
    int maxNumberRand = maxNumber +1;

    srand(time(NULL));
    target = rand() % maxNumberRand; //0-10 "random"

    while(guessNo != target){
            if(guessTime == 0){
                printf("guess a No. Maximum guess No. is %d\n", maxGuess);
            }
            else{
                printf("guess a No.\n");
            }

        scanf("%d", &guessNo);

        guessTime++;
        if(guessNo != target){
            printf("try again. %d guess remains \n", maxGuess - nGuess);
            nGuess++;
        }
        if(guessTime == maxGuess && guessNo != target){
            printf("all try allowed used, byebye");
            sleep(5);
            return 0;
        }
    }

printf("correct, goodbye!\n");
    sleep(5);
    return 0;
}
