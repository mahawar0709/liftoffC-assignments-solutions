#include<stdio.h>
void main()
{
	int p,c,b,m,q;
	float r;
	printf("enter the marks of physics,chem,bio,maths,comp:\n");
	scanf("%d %d %d %d %d",&p,&c,&m,&b,&q);
	r=(p+c+m+b+q)/5;
	printf("the percentage of the marks obtained is:%.2f\n",r);
	if(r>=90)
	{
		printf("grade A");
	}
	else if(r>=80 )
	{
		printf("grade b");
	}
	else if(r>=70)
	{
		printf("grade c");
	}
	else if(r>=60)
	{
		printf("grade d");
	}
	else if(r>=50)
	{
		printf("grade e");
	}
	else
	{
		printf("grade f");
	}
	
}

