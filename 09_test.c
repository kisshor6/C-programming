// structures we can store different types of datatypes in structure

// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[12];
// };

// int main()
// {
//     struct employee aa;
//     aa.code = 78;
//     aa.salary = 45.566;
//     strcpy(aa.name, "kisshor");
//     printf("the code of employee is %d\n",aa.code);
//     printf("the salary of employee is %.2f\n",aa.salary);
//     printf("the name of employee is %s\n",aa.name);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[12];
// };

// int main()
// {
//     struct employee aa, a1,a2;
//     printf("enter the code of a user : ");
//     scanf("%d", &aa.code);
//     printf("enter the salary of a user : ");
//     scanf("%f", &aa.salary);
//     printf("enter the name of a user : ");
//     scanf("%s", &aa.name);


//     printf("enter the code of a user : ");
//     scanf("%d", &a1.code);
//     printf("enter the salary of a user : ");
//     scanf("%f", &a1.salary);
//     printf("enter the name of a user : ");
//     scanf("%s", &a1.name);


//     printf("enter the code of a user : ");
//     scanf("%d", &a2.code);
//     printf("enter the salary of a user : ");
//     scanf("%f", &a2.salary);
//     printf("enter the name of a user : ");
//     scanf("%s", &a2.name);

//     return 0;
// }

// an array of structures

// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[12];
// };

// int main()
// {
//     struct employee google[100];
//     google[0].code = 768;
//     google[0].salary = 68;
//     strcpy(google[0].name, "kisshor");

//     google[1].code = 78;
//     google[1].salary = 6800;
//     strcpy(google[1].name, "suvam");

//     google[2].code = 8;
//     google[2].salary = 7900;
//     strcpy(google[2].name, "kiran");

//     return 0;
// }

// another way to initalize the structure
// #include<stdio.h>
// struct employee{
//     int code;
//     float salary;
//     char name[12];
// };
// int main(){
//     struct employee google = {10, 38.9, "michal"};


//     printf("the code of employee is :%d \n",google.code);
//     printf("the salary of employee is :%.2f \n",google.salary);
//     printf("the name of employee is :%s\n ",google.name);
// }

// pointer to structures

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     int code;
//     float salary;
//     char name[12];
// };
// int main(){
//     struct employee aa;
//     struct employee *ptr;
//     ptr = &aa;
//     // (*ptr).code = (6578);
//     ptr->code = (6578);
//     printf("%d", aa.code);

//     return 0;

// }

// passing structure to a function

// #include<stdio.h>
// #include<string.h>
// struct employee{//its a structure
//     int code;
//     float salary;
//     char name[12];
// };
// void show(struct employee emp){//its a function
//     printf("the code of employee is: %d\n", emp.code);
//     printf("the salary of employee is: %f\n", emp.salary);
//     printf("the name of employee is: %s\n", emp.name);
// }
// int main(){
//     struct employee aa;
//     struct employee *ptr;
//     ptr = &aa;
//     // (*ptr).code = (6578);
//     ptr->code = (6578);
//     ptr->salary = (45.67);
//     strcpy((*ptr).name, "kisshor_kc");
//     show(aa);

//     return 0;

// }

// type of keyboard

// #include<stdio.h>
// #include<string.h>
// typedef struct employee{//its a structure
//     int code;
//     float salary;
//     char name[12];
// } emp;
// void show(emp emp1){//its a function
// // void show(struct employee emp1){  //we can also write this 
//     printf("the code of employee is: %d\n", emp1.code);
//     printf("the salary of employee is: %f\n", emp1.salary);
//     printf("the name of employee is: %s\n", emp1.name);
// }
// //custom datatype
// int main(){
//     emp aa;//declearing aa and ptr
//     emp *ptr;
//     ptr = &aa;  //pointing ptr to aa
//     // (*ptr).code = (6578);
//     ptr->code = (6578);
//     ptr->salary = (45.67);
//     strcpy((*ptr).name, "kisshor_kc");
//     show(aa);
//     return 0;
// }


