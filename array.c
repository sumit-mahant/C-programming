# include<stdio.h>
int main(){
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
//ternary operator
//condition?do something if true :do something if false 
// age>18?printf("adult\n"):printf("miner");
int days ;//1-mon,2-tue,3-wed.....
printf("Enter a day(1-7)"),
scanf("%d",&days);
switch(days){
    case 1 :printf("Monday\n");
    break;
     case 2 :printf("tueday\n");
    break;
     case 3 :printf("wednsday\n");
    break;
     case 4 :printf("thursday\n");
    break;
     case 5 :printf("friday\n");
    break;
     case 6 :printf("saturday\n");
    break;
     case 7 :printf("sunday\n");
    break;
    default:printf("not a valid day  ");





}



}
