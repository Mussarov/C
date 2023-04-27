#include<stdio.h>

int main(void)
{
    int sum=0;
    int i;

    i=1;
    while (i<=10){
    sum+=i;
    i++;
    }
    printf("1부터 10까지의 합:%d\n",sum);
    return 0;
}