// #include<stdio.h>
// int main()
// {
//     int a = 10;
//     if (a = 11){//there is single =
//         printf("the number is eleven");
//     }
//     else{
//         printf("the number is twelve");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int math, sci, eng;
//     float per;
//     printf("enter your marks that you get on math\n");
//     scanf("%d", &math);
//     printf("enter your marks that you get on science\n");
//     scanf("%d", &sci);
//     printf("enter your marks that you get on english\n");
//     scanf("%d", &eng);
//     per = (math + sci + eng)/3;
//     if ((per<40) || math<33 || sci<33 || eng<33){
//         printf("you percentage is %f which is insufficient to pass",per);
//     }
//     else{
//         printf("you have been passed with %f percentage",per);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     float tax = 0;
//     float income;
//     printf("enter your whole income\n");
//     scanf("%f",&income);
//     if(income >= 250000 && income <= 500000){
//         tax +=0.05*(income - 250000);
//     }
//     if(income >= 500000 && income <= 1000000){
//         tax += 0.20*(income - 500000);
//     }
//     if(income >= 1000000){
//         tax += 0.30*(income - 1000000);
//     }
//     printf("the total tax that you should paid is Rs %f",tax);

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter the year\n");
//     scanf("%d",&year);
//     if (year%4 == 0 && year%100 == 0 && year%400 == 0){
//         printf("this year is leap year");
//     }
//     else{
//         printf("this year is not leap year");
//     }   
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int num1, num2, num3, num4;
//     printf("input the first number\n");
//     scanf("%d",&num1);
//     printf("input the second number\n");
//     scanf("%d",&num2);
//     printf("input the third number\n");
//     scanf("%d",&num3);
//     printf("input the last number\n");
//     scanf("%d",&num4);
//     if(num1>num2 && num1>num3 && num1>num4)
//     {
//     printf("%d is the greatest number",num1);
//     }
//     else if(num2>num3 && num2>num4)
//     {
//     printf("%d is the greatest number",num2);
//     }
//     else if(num3>num4)
//     {
//     printf("%d is the greatest number",num3);
//     }
//     else
//     {
//     printf("%d is the greatest number",num4);
//     }
//     return 0;
// }