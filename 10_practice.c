// #include<stdio.h>
// int main(){
//     int a, b, c;
//     FILE *vax;
//     vax = fopen("this.text","r");
   
//     fscanf(vax, "%d %d %d", &a,&b,&c);
//     printf("the integers in program is %d %d %d \n", a, b, c);


//     return 0;

// }

// to find table in file 

// #include<stdio.h>
// int main(){

//      FILE *vax;    
//      int a;
//      printf("enter any value that you want to multiply\n");
//      scanf("%d",&a);
//     vax = fopen("table.text","w");
//     for (int i = 0; i < 10; i++)
//     {
//         fprintf(vax,"%d x %d = %d\n", a, i+1,a*(i+1));
//     }
//     fclose(vax);
//     return 0;

// }

// program to read a text from one file and write double in anither

#include<stdio.h>
int main(){
    FILE *rolls;
    FILE *roll;
    rolls = fopen("roman.txt","r");
    roll = fopen("reing.txt","w");
    char c = fgetc(rolls);
    while (c != EOF)
    {
        fputc(c,roll);
        fputc(c,roll);
        c = fgetc(rolls);
    }
    
    return 0;
}

// program to find salary and name 

// #include<stdio.h>
// struct employee{
//     char name[16];
//     float salary
// };
// int main(){
//     struct employee a2 ,a3;
//     printf("enter the name of first employee\n");
//     scanf("%s",&a2.name);
//     printf("enter the salary of first employee\n");
//     scanf("%f",&a2.salary);

//     printf("enter the name of second employee\n");
//     scanf("%s",&a3.name);
//      printf("enter the salary of second employee\n");
//     scanf("%f",&a3.salary);
//     FILE *cancer;
//     cancer = fopen("worker.txt","w");
//     fprintf(cancer,"%s, %.2f\n",a2.name,a2.salary);
//     fprintf(cancer,"%s, %.2f\n",a3.name,a3.salary);
//     fclose(cancer);

//     return 0;

// }
