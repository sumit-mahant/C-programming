# include<stdio.h>
// int main(){
// int a=10;
// int b=a+10;
// printf("%d\n",b);
// int c=2,d=3;
// printf("%d\n",c+d);
// int z=1.888888;
// printf("%d\n",z);
// printf("%d",!(5>2));
// int x;
// printf("Enter the number -:\n");
// //scanf("%d",&x);
// printf("%d",(x>9&&x<100));
// int r=4;int p=2;int y=6;
// printf("%d",(r+p+y)/3);
// int age;
// printf("Enter your age\n");
// scanf("%d",&age);
// if(age<18){
//     printf("YOU can not drive ");
// }
// else if (age>18&&age<30){
//     printf("Yes you are young .");
// }
// else{
//     printf("YOU can  drive ");
// }
// ternary operator
// condition?do something if true :do something if false 
// age>18?printf("adult\n"):printf("miner");
// int days ;//1-mon,2-tue,3-wed.....
// printf("Enter a day(1-7)"),
// scanf("%d",&days);
// switch(days){
//     case 1 :printf("Monday\n");
//     break;
//      case 2 :printf("tueday\n");
//     break;
//      case 3 :printf("wednsday\n");
//     break;
//      case 4 :printf("thursday\n");
//     break;
//      case 5 :printf("friday\n");
//     break;
//      case 6 :printf("saturday\n");
//     break;
//      case 7 :printf("sunday\n");
//     break;
//     default:printf("not a valid day  ");

// int num;
// printf("Enter a number "),
// scanf("%d",&num);
// if(num>=0){
//     printf("number is positive\n");
//     if(num%2==0){
//         printf("the number is also even");
//     }else{
//         printf("the number is odd");
//     }
// }else{
//     printf("the number is negative");
// }



// }
// int marks;
// printf("Enter the marks");
// scanf("%d",&marks);
// if(marks>30){
//     printf("the student is pass \n");
// }else{
//     printf("the student is fail");
// }
// marks <=30?printf("fail"):printf("Pass");
// if(marks<30){
//     printf("your grade is 'c'");
// }else if (marks>=30&&marks<70){
//     printf("your grade is 'B'");
// }else if (marks>=70&&marks<90){
//     printf("your grade is 'A'");
// }else if(marks>=90&&marks<=100){
//     printf("your grade is 'A+");
// }
// else{
//     printf("the number is invalid ");
// }

// // for check weather the character is uppercase OR lowercase.
// char ch;
// printf("Enter the charcter ");
// scanf("%c",&ch);

// if(ch>='a'&&ch<='z'){
//     printf("the charcter in 'Lowercase' ");
// }else if(ch>='A'&&ch<='Z'){
//     printf("the character in 'Uppercase' ");
// }else{
//     printf("not English "); 
// }

// for(int i=0; i<=10; i= i+2) {
//     printf("%d \n",i);
// }
// for(int i=10; i>=1; i=i-1){
//     printf("%d\n",i);
// }
// int n;
// printf("Enter a number-:");
// scanf("%d",&n);
// for(int i=1;i<=20;i++){
//     printf("%d\n",n*i);
// }
// for(int i=0;i<=6;i++){
//     if(i==5){
//         break;
//     }
//     printf("%d\n",i);
// }
// for(int i=0;i<=6;i++){
//     if(i==10){
//         break;
//     }
//     printf("%d\n",i);
// }
// int n;
// do
// {
//     printf("Enter a number-:");
//     scanf("%d",&n);
//     if(n%2!=0){
//         break;
//     }
// } while (1);
// int n ;
// do
// {
//     printf("Enter a number-:");
//     scanf("%d",&n);
//     if(n%7==0){
//         break;
//     }
    
// } while (1);
// printf("thank you");
// for ( int i = 0; i <=10; i++)
// {
//     if (i==5)
//     {
//         continue;//for skip the itration !
//     }
    
//     printf("%d\n",i);
// }
// for(int i=5;i<=50;i++){
//     if(i%2==0){
//         continue;
//     }
//     printf("%d\n",i);
// }

// for(int i=5;i<=50;i=i+2){
    
//     printf("%d\n",i);
// }
// factorial of a number !
// int n;
// printf("Enter a number-:");
// scanf("%d",&n);
// int fact=1;
// for(int i=1;i<=n;i++){
//     fact=fact*i;
    
// }printf("%d\n",fact);
// int n;
// printf("Enter a number-:");
// scanf("%d",&n);
// for(int i=10;i>=1;i--){
//     printf("%d\n",n*i);
// }
// int sum=0;
// for(int i=5;i<=50;i++){
//      sum=sum+i;
// }
// printf("%d",sum);
// int i,j;
// for(int i=1;i<=8;i++){
//      for(int j=1;j<=5;j++){
//           printf("* ");
//      }
// printf("\n");}
// printf("new one\n");
// int k,s;
// for(int k=1;k<=2;k++){
//      for(int s=6;s>=1;s--){
//           printf("* ");
//      }printf("\n");
// }
// int p,r;
// for(int p=1;p<=5;p++)
// {
//      for(int r=1;r<=p;r++)
//      {
//           printf("* ");
//      }
     
//   printf("\n");}
// int num;
// printf("Enter a number:-");
// scanf("%d",&num);
// if(num<=1){
//      printf("NOt PRIME");
// }
// for(int i=2;i<num;i++){
//      if(num%i!=0){
//           printf("  prime number");
//      }else{
//           printf("NOt prime ");
//      }
// }

// int n;
// printf("Enter the number-:");
// scanf("%d",&n);
// if(n<=1){
//      printf("NOT PRIME");
// }
// for(int i=2;i*i<=n;i++){
//      if(n%i==0){
//           printf("NOT PRIME");
//      }
// printf("prime number");}

// } printf("prime number");
// CHECK FOR A PRIME NUMBER 
// int num,i,prime=1;
// printf("Enter a number:-");
// scanf("%d",&num);
// if(num<=1){
//     prime=0;
// }else{
// for(i=2;i*i<=num;i++){
//      if(num%i==0){
//           prime=0;
//           break;
//      }
// }
// }
// if(prime){
//      printf("%d is a prime number\n ",num);
// }else{
//      printf("%d is not a prime number",num );
// }
// // FUNCTION!!!!!
// int a=10;
// void num();




// int main(){
//     num();
//     return 0;
// }

// void num(){
//     a%2==0?printf("Even"):printf("Odd");
// int a=22;
// int b=a;
// int c=b+2;
// printf("%d",c);
// int a=20,b=30,c=24;
// printf("%d\n",a);
// printf("%d\n",b);
// printf("output is%d ", 5+2/2*3);
// printf("%d\n",15<16 && 1>=0);
// printf("%d\n",5<=5||2>3);
// printf("%d\n",3!=3);
// int a,b;
// printf("Enter 'a'->");
// scanf("%d\n",&a);
// printf("Enter 'b'->");
// scanf("%d\n",&b);
// printf("parameter of rectangle is->%d",a*b);
// int num;
// printf("Enter a number->");
// scanf("%d",&num);
// printf("cube of the number is->%d",num*num*num);
// float a=5.0,b=4.0,c=6.0;
// printf("%f",(a+b+c)/3);
// char ch;
// printf("Enter a character->");
// scanf("%c",&ch);
// if(ch>='a'&&ch<='z'||ch>='A'&&ch<='z'){
//     printf("this is not a digit.its ch...");
// }else{
//     printf("yes this is a digit");
// }
// int a=5,b=2;
// if(a<b){
//     printf("smallest number is->%d",a);
// }else if(a>b){
//     printf("smallest number is->%d",b);
// }else{
//     printf("both number is equal");
// }
// program for three digit if that is ARMSTRONG NUMBER !!!!!
// int num,original,digit,sum=0;
// printf("Enter a three digit number->");
// scanf("%d",&num);
// original=num;
// while(num>0){
//     digit=num % 10;
//     sum= sum + (digit *digit * digit);
//     num=num / 10;
// }if(sum==original){
//     printf("this is a armstrong number");
// }else{
//     printf("this is not an armstrong number");
// }
// int num, original, digit, sum = 0;

//     printf("Enter a 3-digit number: ");
//     scanf("%d", &num);

//     original = num;

//     while (num > 0)
//     {
//         digit = num % 10;
//         sum = sum + (digit * digit * digit);
//         num = num / 10;
//     }

//     if (sum == original)
//         printf("Armstrong Number");
//     else
//         printf("Not an Armstrong Number");
//to print a pattern!!
// printf("hello world");
// now time of "THE ARRAY"⭐⭐⭐⭐⭐,
// int Arr[3]={1,2,3};
// printf("%d\n%d\n%d\n",Arr[0],Arr[1],Arr[2]);

// int marks[3];
// printf("Enter the marks of physic-->>");
// scanf("%d",&marks[0]);

// printf("Enter the marks of Maths-->>");
// scanf("%d",&marks[1]);

// printf("Enter the marks of English-->>");
// scanf("%d",&marks[2]);

// printf("physics=%d  Maths=%d  English=%d",marks[0],marks[1],marks[2]);
// float price[3];
// printf("Enter 3 prices-->>");
// scanf("%f",&price[0]);
// scanf("%f",&price[1]);
// scanf("%f",&price[2]);
// printf("Total price 1 =%.1f\n",price[0]+(0.18*price[0]));

// printf("Total price 2 =%.1f\n",price[1]+(0.18*price[1]));
// printf("Total price 3 =%.1f\n",price[2]+(0.18*price[2]));
//  int marks[]={10,20,30};
//  printf("%d\n",marks[1]);
//pointer arithmetic😊😊😊
//case 1
// int age=20;
// int *ptr=&age;
// printf("ptr=%u\n",ptr);
// // ptr++;
// ptr=ptr+3;
// printf("ptr=%u\n",ptr);
// ptr=ptr-2;
// printf("ptr=%u\n",ptr);
// int page =90;
// int range=30;
// int *ptr= &page;
// int *_ptr=&range;
// printf("diffrence=%u\n",ptr-_ptr);

// char ch[]={'R','s','T'};
// printf("%c\n%c\n%c\n",ch[0],ch[1],ch[2]);
// int adhar[5];
//for input >>
// int *ptr= &adhar[0];
// for(int i=0;i<5;i++){
//     printf(" %d indax: ",i);
//     scanf("%d", (ptr + i));
// }
// //output
// for(int i=0;i<5;i++){
//     printf("%d indax= %d\n",i, *(ptr + i));
// }
// int age=20;
// int *ptr=&age;
// int _age=*ptr;
// printf("age=%d\n",age);

// printf("age=%u\n",&age);
// printf("address of age=%u\n",ptr);
// printf("value at store that address =%d\n",*ptr);

// printf(" address of the pointer =%u\n",&ptr);
// printf(" value which store at address of age = %d",*(&age));
// int x;
// int *ptr;
// ptr = &x;
// *ptr=0;
// printf("value of x=%d\n",x);
// printf("value which store at the address=%d\n",*ptr);
// *ptr+=5;
// printf("value of x=%d\n",x);
// printf("value which store at the address=%d\n",*ptr);
// (*ptr)++;
// printf("value of x=%d\n",x);
// printf("value which store at the address=%d\n",*ptr);
// int i=5;
// int* ptr=&i;
// int** pptr=&ptr;
// printf("%d",**pptr);
// int age=22;
// int age2=20;
// int *ptr=&age;
// int *_ptr=&age2;
// printf(" %udifference=%u\n", *_ptr,*ptr-*_ptr);
// int adhar[5];
// int *ptr=&adhar[0];
// //for Input;
// for(int i=0;i<5;i++){
//     printf("%d indax :",i);
//     scanf("%d",(ptr+i));
//     scanf("%d",&(adhar[i]));
// }
// //for output;
// for(int i=0;i<5;i++){
//     printf("%d indax=%d\n",i,*(ptr+i));
//     printf("%d indax=%d\n",i,(adhar[i]));
// }
// void printnum(int arr[],int n);


// int main(){
//   int arr[]={20,30,40,50,60};
//   int n=5;
//   printnum(arr,5 );
//     return 0;
// }
// void printnum(int arr[],int n){
//   for(int i=0;i<n;i++){
// printf("%d \t",arr[i]);
//   }
//   printf("\n");
// }













