// #include<stdio.h>
// int main(){
//     int a = 22;
//     int *v;
//     v = &a;
//     printf("the address of a is %u\n",&a);
//     printf("the value of  a is %u",*v);
//     return 0;

// }


// #include<stdio.h>
// void box(int a){
//     printf("the address of a is %u\n",&a);
// }
// int main(){
//     int i = 5;
//     printf("the value of i is %d\n",i);
//     box(i);
//     printf("the  address of i is %u\n", &i);
//     return 0;

// }
// #include<stdio.h>
// void box(int a, int b, int *sum, float *avg){
//     *sum = (a+b);
//     *avg = *sum/2;
// }
// int main(){
//     int m = 90, n = 78, sum;
//     float mid;
//     box(m, n, &sum, &mid);
//     printf("the sum of m and n is %d\n",sum);
//     printf("the average of m and n is %f\n",mid);
//     return 0;

// }
// #include<stdio.h>
// int main(){
//     int i = 200;
//     int *m = &i;
//     int **j = &m;
//     printf("the value of i is %d\n",i);
//     printf("the address of i is %u\n",m);
//     printf("the value of i is %d\n",**j);
//     return 0;
// }

// #include<stdio.h>
// void box(int *m){
//     *m = 50;
// }
// int main(){
//     int i = 5;
//     printf("the value of i is %d\n",i);
//     box(&i);
//     printf("the value of i is %d",i);
//     return 0;

// }