#include<stdio.h>
#include<conio.h>
int main()
{
    int a=76, *ptra=&a, *ptp= &ptra;
    int arr[10]={11,25,22,23,24,15,12,45,13,21};
    int *pointarr=arr;

    printf("\tLet's learn about pointers\n\n");
    printf("\n");

    printf("\tThe value of a is: %d\n",a);
    printf("\tThe value of a is: %d\n", *ptra);
    printf("\n");

    printf("\tThe address of a is: %x\n", ptra);
    printf("\tThe address of a is: %x\n", *ptp);
    printf("\n");

    printf("\tThe address of Pointer to a is: %p\n", &ptra);
    printf("\tThe address of Pointer to a is: %p\n", ptp);
    printf("\n");

    printf("\tValue of a: %d\n", a);
    printf("\tSize of a: %d\n", sizeof(a));
    printf("\tSize of address of Pointer to a: %d\n", sizeof(&ptra));
    printf("\n");
    printf("\tIncreased value of a by 1: %d\n", a+1);
    printf("\tSize of a Pointer to another Pointer: %d\n", sizeof(ptra));
    printf("\tAddress of a or Pointer's Current Value: %d\n", ptra);
    ptra++;
    printf("\tIncreased Pointer value using ++: %d\n", ptra);
    ptra--;
    printf("\tDecreased Pointer value using --: %d\n", ptra);
    printf("\tIncreased Pointer Value using Pointer+1: %d\n", ptra+1);
    printf("\tDecreased Pointer value using Pointer-1: %d\n", ptra-1);
    printf("\n");
    printf("\tMore Example:\n");
    printf("\tPointer to Pointer:%d\n", ptp);
    printf("\tIncreased by Adding 1: %d\n", ptp+1);
    ptp++;
    printf("\tIncreased by using ++: %d\n", ptp);
    printf("\n");

    printf("\tThe address of arr[0] is: %d\n", &arr[0]);
    printf("\tThe address of arr[0] is: %d\n", pointarr);
    printf("\tThe address of arr[0] is: %d\n", arr);
    printf("\tThe address of arr[1] is: %d\n", &arr[1]);
    printf("\tThe address of arr[1] is: %d\n", arr + 1);
    printf("\n");
    printf("\tThe value at address of arr[0] is: %d\n", *(&arr[0]));
    printf("\tThe value at address of arr[0] is: %d\n", *(pointarr));
    printf("\tThe value at address of arr[0] is: %d\n", *(arr));
    printf("\tThe value at address of arr[1] is: %d\n", *(&arr[1]));
    printf("\tThe value at address of arr[1] is: %d\n", *(arr + 1));
    printf("\n");
    printf("\tThe value of arr[0] is: %d\n", arr[0]);
    printf("\tThe value of arr[0] is: %d\n", *pointarr);
    printf("\tThe value of arr[9] is: %d\n", arr[9]);
    printf("\tThe value of arr[9] is: %d\n", *(arr+9));
    getch();
    return 0;
}