#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int i = 3;
    srand(time(NULL));
    printf("%d", rand() % i);
    return 0;
}
