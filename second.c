#include <stdio.h>
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
void namaste();
void monjour();
int main(){
    char country;
    printf("Enter 'I' If you are from India OR 'France'\n");
    scanf("%c",&country);
    if(country=='I'&&'i'){
        namaste();

    }else{
        monjour();
    }
}


void namaste(){
    printf("namste indian boy!\n");
}
void monjour(){
    printf("monjour franch man!\n");
}