#include<stdio.h>
int main1()
{
	int a,n,i,wei1,wei2;
	scanf("%d%d",&a,&n);
	a=a*a;
	for(i=1;i<n;i++)
	{
		wei1=a%10;
		wei2=a/10;
		a=wei1*wei1+wei2*wei2;
		
	}
	printf("%d",a);
	return 0;
}
int main()
{
	float i=3;
	i=1/3;
	printf("%f",i);
	return 0;
}
