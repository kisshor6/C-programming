// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++) {
//         printf("%d * %d = %d \n", n, i, n * i);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     for (int i = 10; i; i--) {
//         printf("%d * %d = %d \n", n, i, n * i);
//     }
//     return 0;
// }

// to find the sum of first 10 natural number

// #include <stdio.h>
// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 10; i++) {
//         sum += i;
//     }
//     printf("the total sum from 1 to 10 is %d\n", sum);
//     return 0;
// }

// same program on while loop

// #include <stdio.h>
// int main() {
//     int sum = 0;
//     int i = 1;
//     while (i <= 10){
//         sum += i;
//         i++;
//     }
//     printf("the sum of those numbers are %d",sum);
    
//     return 0;
// } 

// same program on do-while loop

// #include <stdio.h>
// int main() {
//     int sum = 0;
//     int i = 1;
//     do
//     {
//         sum += i;
//         i++;
//     } while (i <=10);
    
//     printf("the sum of those numbers are %d",sum);
    
//     return 0;
// }
 
//  to find the factorial 

// #include<stdio.h>
// int main(){
//     int n;
//     int factorial = 1;
//     printf("input your number");
//     scanf("%d",&n);
//     for (int i = 1; i <= n ; i++){
//         factorial *= i;  
//     }
//     printf("the factorial of your number%d is %d\n", n, factorial);   
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n, prime;
//     printf("enter any number to find it is prime number or not\n");
//     scanf("%d", &n);
//     for (int i = 2; i < n; i++){
//         if (n%i == 0){
//             prime = 2;// we can also write any number in place of 2
//             break;
//         }
        
//     }
//     if (prime == 2)// we can also write any number in place of 2
//     {
//         printf("this is not a prime number");
//     }
//     else{
//         printf("this is a prime number");
//     }
    
    
//     return 0;
// }