#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length = 0;
    int *Arr = NULL;

    printf("Enter the number of Elements :\n");
    scanf("%d",&length);

    // Step 1 : Allocate the memory
    Arr = (int*)malloc(length*sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to Allocate the Memory\n");

    }
    else 
    {
        printf("Sucessfully Allocated Memory\n");
    }

    // Step 2 : Use the Memory.
    // Step 3 : Free the Memory.
    free(Arr);

    return 0;
}