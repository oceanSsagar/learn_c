// a software to check the entered password is correct or not

#include <stdio.h>

int main()
{
    char b[22];
    char a[22]="thedogoftheduke";
    printf("enter the password admin: ");
    scanf("%s",&b);
    if (a==b){
        printf("right password");
    }
    else
    {
        printf("wrong password");
    };
    return 0;
}