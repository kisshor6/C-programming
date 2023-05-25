// practice of dynamic memory allocation
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr = (int *)calloc(6, sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value of %d\n",i);
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d is %d\n",i, ptr[i]);
//     }
        
//     return 0;

// }



// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *uv;
//     uv = (int*) calloc(6, sizeof(int));
//     for (int i = 0; i < 6; i++)
//     {
//         printf("enter the value of %d\n", i);
//         scanf("%d",&uv[i]);
//     }
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The value of %d is %d\n", i, uv[i]);
//     }
//     uv = realloc(uv, sizeof(int));    
//     for (int i = 0; i < 10; i++)
//     {
//         printf("enter the value of %d\n", i);
//         scanf("%d",&uv[i]);
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("The value of %d is %d\n", i, uv[i]);
//     }
    
//     return 0;

// }



// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *uv;
//     int a;
//     printf("input the value that you want to print\n");
//     scanf("%d",&a);
//     uv = (int*) calloc(10, sizeof(int));
//     printf("the multipication table of %d is :\n", a);    
//     for (int i = 0; i < 10; i++){
//         printf("%d x %d = %d\n",a, i+1, a*(i+1));
//     }
//     printf("\nits finished............................\n");

//     uv = realloc(uv, sizeof(int));
//     printf("\nthe multipication table of %d is :\n", a);        
//     for (int i = 0; i < 15; i++){
//         printf("%d x %d = %d\n",a, i+1, a*(i+1));
//     }

    
//     return 0;

// }








