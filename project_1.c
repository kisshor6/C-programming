#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int kl, a;
    int guess = 1;
    srand(time(0));
    kl = rand()%50 + 1;
    // printf("the random number is %d\n", kl);
    do
    {
        printf("enter the number that yo want to guess\n");
        scanf("%d", &a);
        if (a>kl){
            printf("please enter the lower number than %d\n", a);
        }
        else if(a<kl){
            printf("please enter the higher number than %d\n", a);
        }
        else{
            printf("your guess is right in %d attemps\n", guess);
        }
        guess++;
    } while (a != kl);
    

    return 0;
}