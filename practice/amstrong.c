#include<stdio.h>
int main(void)
{
int n,temp,rem,sum=0;
scanf("%d",&n);
temp=n;
while(n)
{
rem=n%10;
sum=sum+rem*rem*rem;
n=n/10;
}
if(sum==temp)
printf("Yes");
else
printf("No");
return 0;
}

