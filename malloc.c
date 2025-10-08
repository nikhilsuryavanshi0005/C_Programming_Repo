#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int *iArr = NULL;

    printf("Enter the Length is :%d\n");
    scanf("%d\n",&iLength);

    iArr = (int*)malloc(iLength*sizeof(int));
    if(iArr == NULL)
    {
        printf("Unable to Allocate the Memory\n");
    }
    else
    {
        printf("The Memory is Successfully Allocated");
    }

    free(iArr);

    return 0;

}