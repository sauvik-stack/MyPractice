/*
Arguments can be passed either right to left or left to right, in case of C language, its the second one, which means the arguments are passed from right to left.
example is given below
*/
#include<stdio.h>
int func(int a, int b, int c)
{
    printf("%d,%d,%d\n", a,b,c);
}
int main()
{
    int a=1, b=2, c=3;
    func(a, b, c);  //calling arguments from left to right or right to left, does not matter, not exactly, each gets its corresponding formal parameter
    printf("%d, %d, %d\n", a, ++a, a++);    //CALLING ARGUMENTS FROM RIGHT TO LEFT, a=1, a++->a=2, ++a->a=3, a=3, thus 3, 3, 1
    func(a, ++a, a++);  // again from right to left is reflected
    return 0;
}
