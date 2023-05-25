// dynamic memory allocation
// malloc
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *qca;
//     // printf("The size of int in my pc is %d\n",sizeof(int));
//     // printf("The size of float in my pc is %d\n",sizeof(float));
//     // printf("The size of char in my pc is %d\n",sizeof(char));
//     qca = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value if %d\n",i);
//         scanf("%d",&qca[i]);
//     }
//     for (int i = 0; i < 6; i++){
//         printf("the value of %d is %d\n", i, qca[i]);
//     }
    
//     return 0;
// }

// same code for float
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float *qca;
//     qca = (float *)malloc(6 * sizeof(float));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value if %d\n",i);
//         scanf("%f",&qca[i]);
//     }
//     for (int i = 0; i < 6; i++){
//         printf("the value of %d is %f\n", i, qca[i]);
//     }
    
//     return 0;
// }

// calloc() function // it show the value 0 initially


// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *qca;
//     // printf("The size of int in my pc is %d\n",sizeof(int));
//     // printf("The size of float in my pc is %d\n",sizeof(float));
//     // printf("The size of char in my pc is %d\n",sizeof(char));
//     qca = (int *)calloc(6 , sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value if %d\n",i);
//         scanf("%d",&qca[i]);
//     }
//     for (int i = 0; i < 6; i++){
//         printf("the value of %d is %d\n", i, qca[i]);
//     }
    
//     return 0;
// }

// free()space //it means deallocayion of memory

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *qca1;
//     int *qca;
//         qca = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6000; i++)
//     {
//         qca1 = (int *)malloc(6000 * sizeof(int));        
//         printf("enter the value if %d\n",i);
//         scanf("%d",&qca[i]);
//         free(qca1);
//     }
//     for (int i = 0; i < 6000; i++){
//         printf("the value of %d is %d\n", i, qca[i]);
//     }
//     return 0;
// }

// using realloc to change the size of memory allocate 

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *qca;
//     qca = (int *)malloc(6 * sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value of %d\n",i);
//         scanf("%d",&qca[i]);
//     }
//     for (int i = 0; i < 6; i++){
//         printf("the value of %d is %d\n", i, qca[i]);
//     }

//     qca = realloc(qca, sizeof(int));
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter the value of %d\n",i);
//         scanf("%d",&qca[i]);
//     }
//     for (int i = 0; i < 10; i++){
//         printf("the value of %d is %d\n", i, qca[i]);
//     }
    
//     return 0;
// }
