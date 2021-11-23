#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc, char const *argv[])
{
    int a[5], i, j;
    srand(time(0));   //调用time来初始化随机数
    for (i = 0; i < 5;i++)
    { 
        a[i] = rand() % 21 + 1; //用rand函数取随机数后用求余操作使0<=a<=20,再对a加1使1<=a<=21.
        for ( j = 0; j<i; j++)
        {
          if (a[i]==a[j])
          {
              break; /*如果当前取到的随机数和之前的随机数相同，就提前结束循环（此时j<i）*/
          }
        }
        if(i==j)
             printf("%d\t", a[i]);   /* 如果i=j说明上面的循环执行结束也没有时随机数也没有重复，所以可以输出新的随机数 */
        else
              i--;  //确保输出的随机数数量是5个
    }
}
