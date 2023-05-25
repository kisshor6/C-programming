// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     int v;
//     ptr = fopen("this.text", "r");//for reading file(character by character)
//     // ptr = fopen("this.text", "w");//for writing file(content will overight)
//     // ptr = fopen("this.text", "wb");//this is also used for writing file ""
//     // ptr = fopen("this.text", "rb");//for reading binary file in 
//     // ptr = fopen("this.text", "a");//for appending file
//     fscanf(ptr, "%d", &v);
//     printf("the value of this.text is %d ",v);
//     fclose(ptr);
//     return 0;
// }

// checking the  file exist or not 

// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     int v;
//     ptr = fopen("thigs.text", "r");
//     if (ptr == NULL)
//     {
//         printf("the file is not present");
//     }
//     else{
//     fscanf(ptr, "%d", &v);
//     printf("the value of this.text is %d ",v);
//     fclose(ptr);
//     return 0; 
//     }
// }


// writing the file 

// #include<stdio.h>
// int main(){
//     FILE *bmw;
//     bmw = fopen("zzzz.txt", "w");
//     int v =345;
    
//     fprintf(bmw,"The value must be written i.e is %d", v);

//     fclose(bmw);
//     return 0;
// }

// fputs(write file character by character) and fgets(read file character by character) in c programming
//shortcut way to write a upper program


// #include<stdio.h>
// int main(){
//     FILE *rolls;
//     rolls = fopen("roman.txt","w");
//     putc('t', rolls);
//     fclose(rolls);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     FILE *rolls;
//     rolls = fopen("roman.txt","r");
//     char c = getc(rolls);
//     while (c != EOF){    
//         printf("%c",c);
//         c = getc(rolls);
//     }
    
//     fclose(rolls);
//     return 0;
// }

