#include<stdio.h>
int main(void)
{
int a,i=2;
scanf("%d",&a);
while(i<=a)
{
if(i==a)
{
printf("Yes");
break;
}
i*=2;
}
if(i!=a)
printf("No");
return 0;
}
