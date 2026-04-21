# include<stdio.h>
int main(){
// // int arr[3][3];
// // for(int i=0;i<3;i++)
// // {
// //     for (int j=0;j<3;j++)
// // {
// //     scanf("%d",&arr[i][j]);
// // }

// // }
// // for(int i=0;i<3;i++)
// // {
// //     for (int j=0;j<3;j++)
// // {
// //     printf("%d\n",arr[i][j]);
// // }

// // }
// int arr[10];
// int min,max;
// for(int i=0;i<10;i++){
// printf("enter your number-:\n");
// scanf("%d",& arr[i]);
// }
// min=arr[0];
// max=arr[0];
// for(int i=1;i<10;i++){
//  if (arr[i]>max){
//    max = arr[i];
//  }  
 
// if(arr[i]<min){
//  min=arr[i];

// }
// }
// printf(" Max No. = %d\n",max);
// printf("Min No. is = \n%d",min);
// }

int arr[10];
int key;
for (int i = 0; i < 10; i++)
{
    printf("Enter a No. = \n");
   scanf("%d",&arr[i]);
}
printf("enter a no. to find = ");
scanf("%d",&key);



for (int i = 0; i < 10; i++)
{
    if (arr[i] == key)
    {
        printf("Key found at = %d",i);
    }
    
}
// }
