// #include <stdio.h> 
// int main(){

// printf("sumit");
// int number=25;
// char star='*';
// int age =22;
// printf("\nthis is my name ");

// return 0;
// }
# include<stdio.h>
int mian(){
int year;
 printf("Enter a year:");
 scanf("%d",&year);
 if((year%4==0&&year&100!=0)||(year%400==0)){
    printf("%d is  A LEAP YEAR.\n",year);

 }else{
    printf("%d is not a leap year.\n");
 }
return 0;
}