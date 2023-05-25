// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[30];
//     char stn[30];
//     char c;
//     printf("enter the value of str :");
//     gets(str);
//     printf("enter the value of stn character by character\n");
//     int i = 0;
//     while (c!= '\n')
//     {
//         fflush(stdin);
//         scanf("%c",&c);
//         stn[i] = c;
//         i++;

//     }
//     stn[i-1] = '\0';
//     printf("the final value of str is %s\n", str);
//     printf("the final value of stn is %s\n", stn);
//     printf("comparing the value of str and stn and the value is %d", strcmp(str, stn));
    
//     return 0;
// }

// by using #include<string.h> finding the length of string

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[] = "kisshor";
//     strlen(name);// not necessary to write
//     printf("the length of a name is %d", strlen(name));
//     return 0;
// }

// same program by using own function

// #include<stdio.h>
// int strlen(char *st){
//     char *ptr = st;
//     int len = 0;
//     while (*ptr != '\0')
//     {
//         len++;
//         ptr++;
//     }
//     return len;
// }
// int main(){
//     char name[] = "kisshor";
//     int j = strlen(name);
//     printf("the length of a name is %d", j);
//     return 0;
// }
// slicing the string


// #include<stdio.h>
// void slice(char *add, int k,int j){
//     int i = 0;
//     while ((k+i)<j){
//         add[i] = add[k+i];
//         i++;
//     }
//     add[i] = '\0';
// }
// int main(){
//     char add[] = "washington,DC";
//     slice(add, 3, 9);
//     printf("the slice of add is %s",add);
//     return 0;
// }

// inte-changing the value

// #include<stdio.h>
// // char *strcpy(char destination[], char source[]){
// char *strcpy(char *destination, char *source){// both are same
//     char *start = destination;

//     while(*source != '\0'){
//         *destination = *source;
//         destination++;
//         source++;
//     } 
//     *destination = '\0'; 
//     return start;
// }
// int main(){
//     char myn[] = "kisshor";
//     char ph[10];
//     strcpy(ph, myn);
//     printf("now the value of ph is %s",ph); 
//     return 0;
// }

// encryption of message

// #include<stdio.h>
// void encrypt(char *m){
//     char *msg = m;
//     while (*msg != '\0'){
//         *msg += 1;
//         msg++;
//     }
    
// }
// int main(){
//     char b[] = "i am going uk in flite 0023";
//     encrypt(b);
//     printf("the incription message of b is %s:", b);
//     return 0;
// }

// to find the occurance in string

// #include<stdio.h>
// int bbk(char b[], char v){
//     char *ptr = b;
//     int count = 0;
//     while (*ptr != '\0'){
//         if (*ptr == v){
//             count++;
//         }
//         ptr++;
//     }
//     return count;  
// }
// int main(){
//     char b[] = "I love nepal";
//     int p = bbk(b, 'z');
//     printf("the occurance of b is %d:",p);
//     return 0;
// }


// #include<stdio.h>
// int bbk(char b[], char v){
//     char *ptr = b;
//     int count = 0;
//     while (*ptr != '\0'){
//         if (*ptr == v){
//             count++;
//         }
//         ptr++;
//     }
//         if(*ptr != v){
//         printf("the character is not found\n");
//         }
//     return count;  
// }
// int main(){
//     char b[] = "I love nepal";
//     int p = bbk(b, 'z');
//     printf("the occurance of b is %d:",p);
//     return 0;
// }