# include<stdio.h>
int main(){
//radius of a circle 3.14*r*r 
// float radius;
// printf("radius of the circle-:");
// scanf("%f",& radius );
// printf("\narea is %f",radius*3.14*radius);
// //perimeter of ractangle 2(w+h)
//  float side1;
//  float side2;
//  printf("enter the hight-: ");
//  scanf("%f",&side1);
// printf("enter the width-: ");
//  scanf("%f",&side2);
//  printf("perimeter of ractangle is-: %f", 2*(side1+side2));
//  //cube of a number a*a*a 
//  int num;
//  printf("Enter the number ");
//  scanf("%d",&num);
//  printf("cube of the number is -:%d", num*num*num);
//  int a,b,c;
//  a=b=c=5;
//  printf("%d",a);
int arr[3][3];
for(int i=0;i<3;i++)
{
    for (int j=0;j<3;j++)
{
    scanf("%d",&arr[i][j]);
}

}
for(int i=0;i<3;i++)
{
    for (int j=0;j<3;j++)
{
    printf("%d\n",arr[i][j]);
}

}
}
