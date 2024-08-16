#include <stdio.h>

int main(){
    int marks;
    char a='A';
char b='B';
char c='C';
char d='D';
char e='E';



    printf("enter your marks");
    scanf("%d", &marks);
    if(marks<=100 &&marks>90){
    printf("%c",a);}
         else if( marks<= 90 &&marks>80)
   { printf("%c",b);}
     else if(marks<=80 &&marks>70){
    printf("%c",c);}
     else if( marks<=70 &&marks>60){
    printf("%c",d);}
    if(marks<60 ){
    printf("%c",e);}
    
    return 0;
}