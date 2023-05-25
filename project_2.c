#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char you, char com){
    if (you == com){
        return 0;
    }
    if (you =='s' && com == 'w'){
        return 1;
    }
    else if (you =='w' && com == 's'){
        return -1;
    }
    if (you =='s' && com == 'g'){
        return -1;
    }
    else if (you == 'g' && com == 's'){
        return 1;
    }       
    if (you =='g' && com == 'w'){
        return -1;
    }
    else if(you =='w' && com == 'g'){
        return 1;
    }       
}
int main(){
    char I, com, r;
    srand(time(0));
    r = rand()%100 + 1;
    if (r<33){
        com = 's';
    }
    else if (r>33 && r<66){
        com = 'w';
    }
    else{
        com = 'g';
    }
    
    printf("enter 's' for snake 'w'for water 'g'for gun\n");
    scanf("%c",&I);
    int result = game(I, com);
    if (result == 0)
    {
        printf("the game is draw\n");
    }
    else if (result == 1)
    {
        printf("you win the game!!!!!!!!!!\n");
    }
    else{
        printf("computer win the game and you lose the game\n");
    }
    printf("you entered %c and com entered %c\n",I, com);
    
    
    return 0;

}