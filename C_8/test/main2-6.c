#include<stdio.h>

int main(void)
{
    int sum1=0, sum2=0;
    int i;
    i=1;
    while (i<=10){
    if(i%2!=0)
      sum1+=i;
    else
        sum2+=i;
        i++;
    }
    printf("1부터 10까지의 홀수의 합:%d\n",sum1);
    printf("1부터 10까지의 짝수의 합:%d\n",sum2);
    return 0;
    
}