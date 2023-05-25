// function and recursion
// basic structure of function

// #include<stdio.h>
// void kisshor(); // function prototype
// int main()
// {
//     printf("hello every one its time for c programming\n");
//     kisshor(); //function call
//     printf("it was run after the function calling\n");
//     return 0;
// }
// void kisshor(){
//     printf("this is running function which is written below the code\n");
// }
// #include<stdio.h>
// void Gm(); // function prototype
// void Ga(); // function prototype
// void Ge(); // function prototype
// int main()
// {
//     Gm();
//     Ga();
//     Ge();
//     return 0;
// }
// void Gm(){
//     printf("good morning everyone\n");
// }
// void Ga(){
//     printf("good arternoon everyone\n");
// }
// void Ge(){
//     printf("good evening everyone\n");
// }

// another way to write a program

// #include<stdio.h>
// void Gm(); // function prototype
// void Ga(); // function prototype
// void Ge(); // function prototype
// int main()
// {
//     Gm();
//     return 0;
// }
// void Gm(){
//     printf("good morning everyone\n");
//     Ga();
// }
// void Ga(){
//     printf("good arternoon everyone\n");
//     Ge();
// }
// void Ge(){
//     printf("good evening everyone\n");
// }

// #include<stdio.h>
// int sum(int a, int b);
// int main()
// {
//     int c;
//     c = sum(5, 10); //5 and 10 are said arguments and a and b are parameters
//     printf("the value of c is %d",c);
//     return 0;
// }
// int sum(int a, int b){
//     return (a+b);
// }


// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int side;
//     printf("input the side of a square\n");
//     scanf("%d", &side);
//     printf("the area of square is %f\n", pow(side, 2));
//     return 0;
// }

// #include<stdio.h>
// int factorial(int x);
// int main()
// {
//     int a;
//     printf("Input the value that yo want\n");
//     scanf("%d", &a);
//     int e = factorial(a);
//     // printf("the factorial of %d is %d\n", a, factorial(a));
//     printf("the factorial of %d is %d\n", a,e);
//     return 0;
// }
// int factorial(int x){
//     if (x == 1 || x == 0){
//         return 1;
//     }
//     else{
//         return x*factorial(x-1);
//     }
    
// }