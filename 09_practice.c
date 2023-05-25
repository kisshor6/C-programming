// showing  2D-vector using structure

// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };

// int main(){
//     struct vector v1, v2;
//     v1.x = 34;
//     v1.y = 97;
//     printf("the value of x is %d and y is %d\n", v1.x, v1.y);
//     // printf("[%d   %d]\n", v1.x, v1.y);

//     v2.x = 38;
//     v2.y = 75;
//     printf("the value of x is %d and y is %d", v2.x, v2.y);
//     // printf("[%d   %d]", v2.x, v2.y);
    
//     return 0;

// }


// #include<stdio.h>
// struct vector{
//     int x;
//     int y;
// };
// struct vector sum(struct vector v1, struct vector v2){
//     struct vector result;
//     result.x = v1.x + v2.x;    
//     result.y = v1.y + v2.y;
//     return result;    
// };


// int main(){
//     struct vector v1, v2,s;
//     v1.x = 34;
//     v1.y = 97;
//     printf("the value of x is %d and y is %d\n", v1.x, v1.y);


//     v2.x = 38;
//     v2.y = 75;
//     printf("the value of x is %d and y is %d\n", v2.x, v2.y);
//     s = sum(v1, v2);
//     printf("the sum of x is %d and y is %d",s.x, s.y);    
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int number;
//     char name[19];
//     float per;
// };
// int main(){
//     struct employee name;
//     struct employee *nqqm;
//     nqqm = &name;
//     // nqqm->number = (26);
//     (*nqqm).number = (26);
//     // printf("the code of a number is %d",nqqm->number);
//     printf("the code of a number is %d",(*nqqm).number);

//     return 0;
// }

// #include<stdio.h>
// typedef struct complex{
//     int real;
//     int complex; 
// }com;
// void str(com var){
//     printf("the value of real part is %d\n",var.real);
//     printf("the value of Imaginary part is %d\n",var.complex);
// }
// int main(){
//     com a1[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("enter the real value for %d\n", i+1);
//         scanf("%d",&a1[i].real);

//         printf("enter the complex value for %d\n", i+1);
//         scanf("%d",&a1[i].complex);


//     }
//         for (int i = 0; i < 5; i++){
//         str (a1[i]);
//         }

//     return 0;

// }

// #include<stdio.h>
// #include<string.h>
// typedef struct employee{
//     char name[15];
//     int edu;
//     int date;
// }sata;
// void show(sata venom){
//     printf("thw name of employee is %s\n", venom.name);
//     printf("thw education level of employee is %d\n", venom.edu);
//     printf("thw date of issue of employee is %d\n",venom.date);

// }
// int main(){
//     sata xcv;
//     strcpy(xcv.name, "kisshor");
//     xcv.date = 23/4/2021;
//     xcv.edu = 12;
//     show(xcv);
//     return 0;
// }


