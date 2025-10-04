#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    int *Arr = NULL;


    // Step 1 : Allocate the memory
    Arr = (int*)calloc(5*sizeof(int));
    

    // Step 2 : Use the Memory.
    Arr =(int*)realloc(Arr,10*sizeof(int));
    
    // Step 3 : Free the Memory.
    free(Arr);

    return 0;
}