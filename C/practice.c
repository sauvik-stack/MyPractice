#include<stdio.h>
#include<conio.h>
/*Print a multiplication Table for the Number entered by the user*/
int main()
{
    int inputNum, loop=1, mul;
    printf("Enter a number for multiplication table:\n");
    scanf("%d", &inputNum);

    for (loop=1; loop<=10; loop++)
    {
        mul=inputNum*loop;
        printf("%d X %d = %d\n", inputNum, loop, mul);
    }
    // getch();
    return 0;
}