#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int a, i, j;
    srand(time(0));
    for (i = 0; i < 5;i++)
    {
        printf("\n");
        for (j = 0; j<5; j++)
        {
            a = rand() % 20 + 1;
            printf("%d\t", a);
        }
    }
}
