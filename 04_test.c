// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter the number\n");
//     scanf("%d",&a);
//     printf("%d\n",a);
//     a ++;
//     printf("%d\n",a);
//     a ++;
//     printf("%d\n",a);
//     a ++;
//     printf("%d\n",a);
//     a ++;
//     return 0;
// }

// using this program on loop

// #include<stdio.h>
// int main()
// {
//     int age;
//     printf("enter your age\n");
//     scanf("%d", &age);
//     while (age<10){
//         printf("%d\n",age);
//         age++; 
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int b = 0;
//     while (b <=20){
//         if (b>=10)
//         {
//             printf("the value is %d\n",b);
//         }
//         b++;    
//     } 
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 1;
//     // printf("the value of a is %d\n", a++);
//     printf("the value of a is %d\n", ++a);
//     printf("the value of a is %d", a);
//     return 0;
// }

// do-while loop it like same as while loop but it works at once althouth the program is wrong

// #include<stdio.h>
// int main()
// {
//     int w = 0;
//     do
//     {
//         printf("the value of w is %d\n",w);
//         w++;
//     } while (w <=10);
    
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int v = 0;
//     int n;
//     printf("enter the value of n\n");
//     scanf("%d",&n);
//     do
//     {
//         printf("the value of v is %d\n",v+1);
//         v++;
//     } while (v<n);
    
//     return 0;
// }

// for loop in c lan

// #include<stdio.h>
// int main(){
//     for (int i = 0; i < 8; i++){
//         printf("the value of i is %d\n", i);
//         // if (i == 5)
//         // {
//         //     break;
//         // }
        
//     }
    
//     return 0;
// }

// decrement for  loop

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a\n");
//     scanf("%d",&a);
//     for (int i=a; i; i--){
//         printf("the value of i is %d\n", i);
//     }
    
//     return 0;
// }

// likewise break continue is used to skip below program

// #include<stdio.h>
// int main(){
//     int i=2;
//     int skip=5;
//     while (i<10)
//     {   i++;
//         if(i != skip){
//             continue;
//         }
//         else{
//             printf("%d",i);
//         }
//     }
    
//     return 0;
// }