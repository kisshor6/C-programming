// #include<stdio.h>
// int main(){
//     int max[10];
//     // int *vp = &max[0];
//     int *vp = max;
//     vp += 2;
//     if (vp == &max[2]){
//         printf("the location of this number is same\n");
//     }
//     else{
//         printf("the value of this number is not same\n");
//     }
//     return 0;
// }

// to find the multipication of any number
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Input the value of a");
//     scanf("%d", &a);
//     int tavle[10];
//     for (int i = 0; i < 10; i++)
//     {
//         tavle[i] = a*(i+1);
//         printf("%d x %d is %d\n",a, i+1, tavle[i]);
//     }
    
//     return 0;
// }

// reversing the arry by using function

// #include <stdio.h>
// void reverse_array(int *a, int n)
// {
//   int c, t;

//   for (c = 0; c < (n/2); c++) {
//     t = a[c];                  // Swapping
//     a[c] = a[n-c-1];
//     a[n-c-1] = t;
//   }
// }

// int main()
// {
//   int a[] = {4,54,8,94,73,5};
//   reverse_array(a, 6);
//   for (int i = 0; i < 6; i++){
//       printf("the reverse value of %d is %d\n", i, a[i]);
//   }
//   return 0;
// }


/* C Program to Count Positive and Negative Numbers in an Array */

// #include<stdio.h>
// int csk(int a[], int Size)
// {
//   int i, Positive_Count = 0;
//   printf("\n List of Positive Numbers in this Array: ");
  
//   for(i = 0; i < Size; i ++)
//   {
//      if(a[i] >= 0)
//      {
//  	printf("%d  ", a[i]);
//  	Positive_Count++;
//      }
//    }
//    return Positive_Count;
// }
// int nsk(int a[], int Size)
// {
//   int i, Negative_Count = 0;
//   printf("\n List of Negative Numbers in this Array: ");

//   for(i = 0; i < Size; i ++)
//   {
//      if(a[i] < 0)
//      {
//  	printf("%d  ", a[i]);
//  	Negative_Count++;
//      }
//    }
//    return Negative_Count;
// }

// int main()
// {
//  int Size, i, a[10];
//  int Positive_Count = 0, Negative_Count = 0;
 
//  printf("\n Please Enter the Size of an Array  :  ");
//  scanf("%d", &Size);
 
//  printf("\nPlease Enter the Array Elements :  ");
//  for(i = 0; i < Size; i++)
//  {
//       scanf("%d", &a[i]);
//  }
 
//  Positive_Count = csk(a, Size);
//  Negative_Count = nsk(a, Size);
  
//  printf("\n Total Number of Positive Numbers in this Array = %d ", Positive_Count);
//  printf("\n Total Number of Negative Numbers in this Array = %d ", Negative_Count);
//  return 0;
// }

// #include<stdio.h>
// int main(){
//   int mul[3][10];
//   for (int i = 0; i < 10; i++){
//     mul[0][i] = 2*(i+1);
//   }
//   for (int i = 0; i < 10; i++){
//     printf("2x%d = %d\n", i+1,mul[0][i]);
//   }
//   for (int i = 0; i < 10; i++){
//     mul[1][i] = 7*(i+1);
//   }
//   for (int i = 0; i < 10; i++){
//     printf("7x%d = %d\n", i+1,mul[1][i]);
//   }
//   for (int i = 0; i < 10; i++){
//     mul[2][i] = 9*(i+1);
//   }
//   for (int i = 0; i < 10; i++){
//     printf("9x%d = %d\n", i+1,mul[2][i]);
//   }
  
//   return 0;
// }

// using same condition  by using function

// #include<stdio.h>
// int table(int *arr, int n, int t){
//   printf("the multipication table of %d is\n",t);
//     for (int i = 0; i < n; i++){
//     arr[i] = t*(i+1);
//   }
//   for (int i = 0; i < n; i++){
//     printf("%dx%d = %d\n",t, i+1,arr[i]);
//   }
//   printf("************\n\n");
// }
// int main(){
//   int mul[3][10];
//   table(mul[0], 10, 2);
//   table(mul[1], 10, 7);
//   table(mul[2], 10, 9);

//   return 0;
// }

// 3-dimensional array
// #include<stdio.h>
// int main(){
//     int td[2][3][4];
//     for (int i = 0; i < 2; i++){
//         for (int j = 0; j < 3; j++){
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("the address of [%d][%d][%d] is %u\n",i, j, k , &td[i][j][k]);
//             }
            
//         }
        
//     }
    
//     return 0;
// }

