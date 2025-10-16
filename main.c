#include <stdio.h>
void f(void);

int i;
void f(void)
{
    for (int j = 0; j < 10; j++)
        printf("#");
    printf("\n");
}

int main(void)
{
    for (i = 0; i < 5; i++)
        f();
    return 0;
}
