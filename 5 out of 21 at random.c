#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int a, i, j;
    srand(time(0));   //调用time来初始化随机数
    for (i = 0; i < 5;i++)
    {
        printf("\n");  
        for (j = 0; j<5; j++)
        {
            a = rand() % 21 + 1; //用rand函数取随机数后用求余操作使0<=a<=20,再对a加1使1<=a<=21.
            printf("%d\t", a);
        }
    }
}
