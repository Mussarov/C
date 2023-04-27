#include<stdio.h>

int main(void)
{
    int i,sum=0;

    for(i=11; i<=20; i++)
    if(i%2==1)
    continue;
    sum +=i;

    printf("11부터 20까지 짝수의 합음%d이다.Wn",sum);

    return 0;
}