#include <stdio.h>
// #include <math.h>
// void printhello();
// void printgoodbye();
// int main()
// {
//     printhello();
// printhello();
// printhello();
// printhello();
// printhello();
// printhello();
// printgoodbye();
// printgoodbye();
// printgoodbye();
// printgoodbye();
// printgoodbye();
// }
// void printhello(){
//     printf("I am sumit bro\nI am the best \nI win\nI do't lose\n");
// }void printgoodbye(){
//     printf("goodbye baby\n");
// }
// int main(){
//     char country;
//     printf("Enter 'I' If you are from India OR 'France'\n");
//     scanf("%c",&country);
// }
// void namaste();
// void monjour();
// int main(){
//     char country;
//     printf("Enter 'I' If you are from India OR 'France'\n");
//     scanf("%c",&country);
//     if(country=='I'||country=='i'){
//         namaste();

//     }else if(country=='F'||country=='f'){
//         monjour();
//     }
    
//     else{
//         printf("I do not know where are your form ");
//     }
// }


// void namaste(){
//     printf("namste indian boy!\n");
// }
// void monjour(){
//     printf("monjour franch man!\n");
// }
// int sum(int a,int b);
// int main(){
//     int a,b;
//     printf("Enter the first number->");
//     scanf("%d",&a);
//     printf("Enter the second number->");
//     scanf("%d",&b);
//     int s=sum(a , b);
//     printf("the sum is ->%d",s);
//     return 0;

// }
// int sum(int a,int b){
//     return a + b ;
// }
// void printTable(int n);
// int main(){
//     int n;
//     printf("Enter a number->");
//     scanf("%d",&n);
//     printTable(n);//argument\actual parameter!

//     return 0;
// }
// void printTable(int n){// formal parameter!
//     for(int i=1;i<=10;i++){
//         printf("%d\n",n*i);
//     }
// }
// void printprice(float value);
// int main(){
//     float value;
//     printf("Enter the price->");
//     scanf("%f",&value);
//     printprice(value);


//     return 0;
// }
// void printprice(float value){
//     value=value+(value*0.18);
//     printf("final price is->%f",value);
// }
// int main(){
//     // int n=4;
//     printf("%f",pow(3,2));
// }
// float squerarea(float side);
// float circlearea(float radius);
// float rectangle(float a,float b );
// int main(){
//     float a=5.0;float b=10.0;
//     printf("the area is ->%f",rectangle(a,b));
 


// }
// float rectangle(float a,float b){
//     return a*b;
// }
//recursion👌
// void printHW(int count);
// int main(){
//     printHW(10);

// }
// void printHW(int count){
//     if(count==0){
//         return;
//     }
//     printf("hello world\n");
//     printHW(count-1);
// }
// int sum(int n);
// int main(){
//    printf("the sum is->%d",sum(5));
// }
// int sum(int n){
//     if(n==1){
//         return 1;

//     }
//     int sumnm1=sum(n-1);
//     int sumN=sumnm1+n;
//     return sumN;
// }
//👍👍👍👍👍👍very important😊
// int fact(int n);
// int main(){
//    printf("the factorial of the n is->%d",fact(6));


// }
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     int factnm1=fact(n-1);
//     int factn=factnm1*n;
//     return factn;
// }
//function for convert cels.. to fren...
// float converttem(float celsius);
// int main(){
//      float fara=converttem(37);
//      printf("far-:%f",fara);

//     return 0;
// }
// float converttem(float celsius){
//     float fara=   9.0/8.0*celsius  + 32;
//    return fara;
// }
// float converttem(float celsius);
// int main(){
//      float fara=converttem(37);
//      printf("fara-%f",fara);

//     return 0;
// }
// float converttem(float celsius){
//     float fara=   9.0/8.0*celsius  + 32;
//    return fara;
// }
// int  calculateper(int science ,int maths,int sanskrit);
// float convertTemp(float celcius);
// int fibonacci(int n);
// int main(){
//   int science=90;
//   int maths=60;
//   int sanskrit=80;
   

//     float fara=convertTemp(37);
//     printf("fara is-%f\n",fara);
//     printf("percent is->%d",calculateper(science,maths,sanskrit));
//     printf(">>%d",fibonacci(6));
//     // fibonacci(6);

//     return 0;
// }
// float convertTemp(float celcius){
//     float fara= celcius * (9.0/5.0) + 32;
//     return fara;
// }
// int calculateper(int science ,int maths,int sanskrit){
//     return ((science + maths + sanskrit)/3) ;
// }
// int fibonacci(int n){
    
//         if(n==0){
//             return 0;
//         }

//          if(n==1){
//         return 1;
//     }

//     int fibnm1=fibonacci(n-1);
//     int fibnm2=fibonacci(n-2);
//     int fibonacci=fibnm1+fibnm2;
//     printf("fibonacci seq->%d\n",fibonacci);
//     return fibonacci;
// }
// //fibonacci sequence from loop control!!!!!!!
// int main(){
//     int n;
// printf("Enter the number-->");
// scanf("%d",&n);
// for(int i=0;i<=n;i++){
    
// }
// int main(){
// float pi=3.102314;
// printf("%.2f\n",pi);
// printf("%.4f\n",pi);
// int a=10;
// int b=20;
// int temp;
// printf("befor swap-->%d,%d",a,b);
// temp=a;
// a=b;
// b=temp;

// printf("after swap-->%d,\n",a,b);
// a=a+10;
// b=a-10;
// printf("after swap-->%d,%d\n",a,b);
// int num;
// int sum=0;

// while (num>0)
// {
//   printf("Enter a number\n");
//   scanf("%d",&num);
//   sum=sum + num; 
//   if(num==0){
//     printf("the total sum is -->%d\n",sum);
//      printf("thankyou bro I am happy ");
//   }

//        }

//nested loop loaded>>>>>>>>>>

// for(int i=1;i<=4;i++){
//     printf("#");
// for(int j=1;j<=5;j++){
//     printf("*");
// }
// printf("\n");

// }

//prime numbers>>>>>👌👌👌👌👌👌
// int num;
// printf("Enter a number for chacking prime number-->");
// scanf("%d",&num);
// if(num<=1){
//     printf("not prime\n");
// }

// {
// for(int i=2;i<num;i++){

//     if(num % i!=0){
//         printf(" prime number\n");
//         break;
//     }
//     else{
//         printf("Note prime\n");
//         break;
//     }
// }
// }
//print trangle with the help of satars bro⭐⭐⭐⭐
// int row=5;
// for(int i=5;i>=1;i--){
//     printf(" *");
// for(int j=5;j>=1;j--){
//     printf(" *");
// }
// printf("\n");
// }


// return 0;
// }
// void printHW();
// void printstar();


// int main(){
// printHW();
// printHW();
// printHW();
// printHW();
// printstar();
// printstar();
// printstar();
// printstar();
// printstar();
// }
// void printHW(){
//     printf("sumit is the best\nhe always wins\n he is best in everything\n he is also Articulate");
// }

// void printstar(){
//     printf("********\n");
// }
//FUNCTION👍👍👍👍>.>>>>
// void nameprint(){
//     printf("SUMIT \nMAHANT\n");
// }
// void printgb(){
//     printf("goodbye Boss");
// }
// int main(){
//     nameprint();
//     printgb();

// }
// void namaste(){
//     printf("numste Indian boy ");
// }
// void monjour(){
//     printf("monjour French boy");
// }
// int main(){
//     char country ;
//     printf("for India>>'I',for France>>'F'->");
//     scanf("%c",&country);
//     if(country=='i'||country=='I'){
//         namaste();
//     }else{
//         monjour();
//     }
// }
//    int sum(int a ,int b){
//     int  sum=a+b;
//     return sum;
//    }
// int main(){
//     int a,b;
//     printf("Enter first num>>>");
//     scanf("%d",&a);
//     printf("Enter the second number>>>>");
//     scanf("%d",&b);
//     printf("%d",sum(a,b));
//     // sum(a,b);
// }
//table of N..>>>>
// void printtable(int n){
//     for(int i=1;i<=20;i++){
//     printf("%d   ",i*n);
//     }
// }
// int main(){
//     int n;
//     printf("Enter a number->>");
//     scanf("%d",&n);
//     printtable( n);
// }
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sum1mn=sum(n-1);
//      int sumN=sum1mn+n;
//      return sumN;
// }
// // {
// //     if(count== 0){
// //         return;}
// //         printf("Hello world\n");
// //          count = count-1;
    
// // }
// int main(){
//    printf("the sumvis--> %d",sum(10));
// }
// int fact(int n){
//     if(n==1){
//   return 1;
//     }
//     int factnm1=fact(n-1);
//     int factn=factnm1*n;
//     return factn;
// }
// int main(){
//     printf("factorial  is -->%d",fact(5));
// }
// int main(){
// int age=20;
// int *ptr=&age;
// int _age= *ptr;
// // Format spasifier for ADDRESS⭐⭐⭐
// printf("%d\n",_age);
// printf("%p\n",&age);
// printf("%u\n",&age);
// printf("%u\n",ptr);
// printf("%u\n",&ptr);
// //frint of value👍👍👍👍
// printf("%d\n",age);
// printf("%d\n",*ptr);
// printf("%d\n",*(&age));
// int *ptr;
// int x;
// ptr=&x;
// *ptr=0;
// printf("valu of x= %d\n",x);
// printf("valu of ptr=%d\n",*ptr);
// *ptr += 5;
// printf("valu of x= %d\n",x);
// printf("valu of ptr=%d\n",*ptr);
// (*ptr)++;
// printf("valu of x= %d\n",x);
// printf("valu of ptr=%d\n",*ptr);
// float price=98.24;
// float *ptr=&price;
// float **pptr=&ptr;
// printf("%.2f",**pptr);
//CALL BY VALUE 😁😁😁😁😁
int square(int n){
    n=n*n;
    printf("square is >>%d\n",n);

}

int main(){
    int number=5;
    square(number);
    printf("n=%d\n",number);
}



// }