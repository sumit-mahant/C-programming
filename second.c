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
int  calculateper(int science ,int maths,int sanskrit);
float convertTemp(float celcius);
int fibonacci(int n);
int main(){
  int science=90;
  int maths=60;
  int sanskrit=80;
   

    float fara=convertTemp(37);
    printf("fara is-%f\n",fara);
    printf("percent is->%d",calculateper(science,maths,sanskrit));
    printf(">>%d",fibonacci(6));
    // fibonacci(6);

    return 0;
}
float convertTemp(float celcius){
    float fara= celcius * (9.0/5.0) + 32;
    return fara;
}
int calculateper(int science ,int maths,int sanskrit){
    return ((science + maths + sanskrit)/3) ;
}
int fibonacci(int n){
    
        if(n==0){
            return 0;
        }

         if(n==1){
        return 1;
    }

    int fibnm1=fibonacci(n-1);
    int fibnm2=fibonacci(n-2);
    int fibonacci=fibnm1+fibnm2;
    printf("fibonacci seq->%d\n",fibonacci);
    return fibonacci;
}
//fibonacci sequence from loop control!!!!!!!
int main(){
    int n;
printf("Enter the number-->");
scanf("%d",&n);
for(int i=0;i<=n;i++);




}
