// #include<stdio.h>
// int main(){
//     // char mn[] = {'d','h','o','n','i','\0'};
//     char mn[] = "dhoni";
//     printf("%c", mn);
//     return 0;
// }
// string in memory

// #include<stdio.h>
// int main(){
//     char mn[] = {'d','h','o','n','i','\0'};
//     // char mn[] = "dhoni";
//     char *ptr = mn;
//     while (*ptr != '\0'){
//         printf("%c", *ptr);
//         ptr++;
//     }

//     return 0;
// }
// short cut way to print strings

// #include<stdio.h>
// int main(){
// char *mane = "salaam rocker bhai";
//     char mane[] = "salaam rocker bhai";
//     printf("%s",mane);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char st[30];
//     printf("enter your name\n");
//     scanf("%s",st);
//     // gets(st);// it allows space on program
//     // puts(st);// it place the cursor in next line
//     printf("your name is %s",st);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char *mane = "salaam rocker bhai";//we can update the value by this
//     // char mane[] = "salaam rocker bhai";//we cannot update the value by this
//     //  mane = "if you think you are bad i am your dad";
//     printf("%s",mane);
//     return 0;
// }

// standard library function for strings to find the length of a string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char *strin = "kisshor_kc";
//     int a = strlen(strin);
//     printf("the length of a strin is %d", a);
//     return 0;
// }
// standard library function for strings to pass the string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char *strin = "kisshor_kc";
//     char str[15];
//     strcpy(str, strin);
//     printf("now the value of str is %s",str);
//     return 0;
// }

// strcat in string to join two string

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char st1[15] = "kisshor";
//     char *st2 = "is my name";

//     strcat(st1, st2);
//     printf("now the value of str is %s", st1);
//     return 0;
// }

// strcmp in string to compare two string

//  #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char st1[20] = "kisshor is my name ";
//     char *st2 = "kissho";

//     int val = strcmp(st1, st2);
//     printf("now the value of str is %d", val);
//     return 0;
// }
