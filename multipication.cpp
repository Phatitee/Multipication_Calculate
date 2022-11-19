#include<stdio.h>
#include<conio.h>
main()
{
	int multi, num, i;
	printf("**** Program Multiplication ****\n");
	printf("Program Multiplication : ");
	scanf("%d",&multi);
	printf("Program Multiplication to Number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d x %d = %d\n",multi,i,multi*i);
	}
}
