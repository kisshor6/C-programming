// arrays

// #include <stdio.h>
// int main()
// {
//     int marks[4];
//     marks[0] = 45;
//     marks[1] = 82;
//     marks[2] = 54;
//     marks[3] = 75;
//     printf("you entered the marks %d %d %d and %d", marks[0], marks[1], marks[2], marks[3]);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int marks[5];
//     printf("enter the marks of student for first student\n");
//     scanf("%d",&marks[0]);
//     printf("enter the marks of student for second student\n");
//     scanf("%d",&marks[1]);
//     printf("enter the marks of student for third student\n");
//     scanf("%d",&marks[2]);
//     printf("enter the marks of student for fourth student\n");
//     scanf("%d",&marks[3]);
//     printf("enter the marks of student for fifth student\n");
//     scanf("%d",&marks[4]);
//     float per = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
//     printf("the total percentage is %.2f",per);
//     return 0;
// }

// another way

// #include<stdio.h>
// int main()
// {
//     int marks[5];
//     for (int i = 0; i < 4; i++)
//     {
//         printf("input the marks of %d student :",i+1);
//         scanf("%d",&marks[i]);
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("thw marks of %d student is :%d\n",i+1, marks[i]);
//     }
//     return 0;
// }
// short cut way

// #include<stdio.h>
// int main()
// {
//     int h[3]= {345, 45, 345};
//     printf("the value of 1 is :%d\n",h[0]);
//     printf("the value of 2 is :%d\n",h[1]);
//     printf("the value of 3 is :%d\n",h[2]);
//     return 0;
// }

// pointer arithmetic// checking the byte if variables

// #include<stdio.h>
// int main()
// {
//     int w = 4;
//     int *n = &w;
//     printf("the value of *n is %u\n", n);
//     n++;
//     printf("the value of *n is %u\n", n);
// }

// arrays with pointers

// #include<stdio.h>
// int main()
// {
//     int marks[5];
//     // int *ptr = &marks[0];
//     int *ptr = marks;
//     for (int i = 0; i < 4; i++)
//     {
//         printf("input the marks of %d student :",i+1);
//         scanf("%d", ptr);
//         ptr++;
//     }
//     for (int i = 0; i < 4; i++)
//     {
//         printf("thw marks of %d student is :%d\n",i+1, marks[i]);
//     }
//     return 0;
// }

// arrays with function

// #include <stdio.h>
// void function(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("the value of marks for student %d is %d\n", i+1, *(ptr+i));
//     }
//     ptr[4] = 567567; // it may change the value of array
// }

// // void function(int ptr[], int n){
// //     for (int i = 0; i < n; i++)
// //     {
// //         printf("the value of marks for student %d is %d\n", i+1, ptr[i]);
// //     }
    
// // }
// int main()
// {
//     int arr[] = {32, 2, 54, 23, 3};
//     function(arr, 5);
//     printf("%d",arr[4]);
//     return 0;
// }

// 2d-dimessional arrays

// #include<stdio.h>
// int main()
// {
//     int marks[2][3];
//     for (int i = 0; i < 2; i++)
//     {   for (int j = 0; j < 3; j++)
//         {
//             printf("input the marks of %d student in %d subject\n", i+1, j+1);
//             scanf("%d", &marks[i][j]);
//         }
 
//     }
//     for (int i = 0; i < 2; i++)
//     {   for (int j = 0; j < 3; j++)
//         {
//             printf("the marks of %d student in %d subject is: %d\n", i+1, j+1,marks[i][j]); 
//         }
 
//     }
//     return 0;
// }

// quick quiz

// #include<stdio.h>
// int main(){
//     int bmw[1][2];
//     for (int i = 0; i < 1; i++)
//     {for (int j = 0; j < 2; j++)
//         {
//             printf("input the value of %d student in %d subject\n",i+1, j+1);
//             scanf("%d",&bmw[i][j]);
//         }
        
//     }
//     for (int i = 0; i < 1; i++)
//     {for (int j = 0; j < 2; j++)
//         {
//             printf("%d\t", bmw[i][j]);
//         }
        
//     }
    
//     return 0;
// }
