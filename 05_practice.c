// to find average through function

// #include<stdio.h>
// float sum(int a, int b, int c);
// int main()
// {
//     int a, b, c;
//     printf("input the value of a\n");
//     scanf("%d",&a);
//     printf("input the value of b\n");
//     scanf("%d",&b);
//     printf("input the value of c\n");
//     scanf("%d",&c);
//     printf("the average value of a, b and c is %f", sum(a, b, c));
//     return 0;
// }
// float sum(int a, int b, int c ){
//     return (float)(a+b+c)/2;
// }

// celcius to farhenite

// #include<stdio.h>
// float sum(int a);
// int main()
// {
//     int c;
//     printf("input the temprature in celcius\n");
//     scanf("%d", &c);
//     printf("the temprature in farhenite is %f",sum(c));
//     return 0;
// }
// float sum(int a){
//     return (a*9/5)+32;
// }

// to calaulate force

// #include<stdio.h>
// float mass(float m);
// int main()
// {
//     int c;
//     printf("input the mass of a body\n");
//     scanf("%d", &c);
//     printf("the force of attraction is %.2fN",mass(c));
//     return 0;
// }
// float mass(float m){
//     return m*9.8;
// }
// #include<stdio.h>
// void pattern(int n);
// int main(){
//     int n = 1;
//     pattern(n);
//     return 0;
// }
// void pattern(int n){
//     if(n==1){
//         printf("*\n");
//     }
//     pattern(n-1);
//         for (int i = 0; i < (2*n-1); i++){
//             printf("*");
//         }
//         printf("\n");
        
//     }

// #include <stdio.h>
// int addNumbers(int n);
// int main() {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     printf("Sum = %d", addNumbers(num));
//     return 0;
// }

// int addNumbers(int n) {
//     if (n != 0)
//         return n + addNumbers(n - 1);
//     else
//         return n;
// }

