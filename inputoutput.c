#include<stdio.h>

int main()
{
    char class = '\0';
    int age = 0;

    printf("Enter the Class:\n");
    scanf("%c",&class);

    printf("Enter your Age :\n");
    scanf("%d",&age);

    printf("Your class is :%c\n",class);
    
    printf("Your Age is : %d\n",age);

    return 0;

}