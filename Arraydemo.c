#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,151,251,501};
    char cArr[3] = {'A','B','C'};
    float fArr[] ={11.11,21.11,51.11,101.11};
    double dArr[] ={11.1111,21.2121,51.112151,101.112151101};

    printf("The Size of the Integer Array:%lu\n",sizeof(Arr));
    printf("The Size of the Character Array is : %lu\n",sizeof(cArr));
    printf("The Size of the Double Array is : %lu\n",sizeof(dArr));
    printf("The Size of the Float Array is :%d\n",sizeof(fArr));

    printf("%c\n",cArr[2]);
    printf("%d\n",Arr[1]);
    printf("The integer Array is :%d\n",Arr);
    printf("%f\n",fArr[1]);
    printf("The Float Array is : %f\n",fArr);
    printf("The Double Array is : %d\n",dArr);

    return 0;
}