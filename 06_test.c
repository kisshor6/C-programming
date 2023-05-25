// pointer in c programming
// #include<stdio.h>
// int factorial(int x);
// int main()
// {
//     int a;
//     int *n = &a;
//     int **k = &n; //double pointer in c (pointer to pointer)
//     printf("input the value of a\n");
//     scanf("%d", &a);
//     printf("the address of given number is %u\n",n );
//     printf("the address of given number is %u\n",&a );
//     printf("the address of given number is %u\n",*(&n) );
//     printf("the address of given number is %u\n", &n);
//     printf("the address of given number is %u\n", k);
//     return 0;
// }

// call by value

// #include<stdio.h>
// int kisshor(int a, int b);
// int main()
// {
//     int a, b;
//     printf("input the value of a \n");
//     scanf("%d",&a);
//     printf("input the value of b \n");
//     scanf("%d",&b);
//     printf("the sum of a and b is %d\n",kisshor (a, b));
//     printf("the value of a and b is %d and %d", a, b);
//     return 0;
// }
// int kisshor(int a, int b){
//     return a+b;
// }

// call by reference

// #include<stdio.h>
// void ref(int *l, int *m);
// int main()
// {
//     int l = 4, m = 9;
//     printf("the value of l and m after change is %d and %d\n", l, m);
//     ref(&l,&m);
//     printf("the value of x and y after interchanging is %d and %d\n", l, m);

//     return 0;
// }
// void ref(int *l, int *m){
//     int c;
//     c = *l;
//     *l = *m;
//     *m = c;

// }
