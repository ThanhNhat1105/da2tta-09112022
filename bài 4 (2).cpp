#include <stdio.h>
int main()
{
	int s;
	int i=0;
	do
	{
	printf("nhap n tu 1 den 10: ");
	scanf("%d",&s);
	}
	while ((s<0)||(s>10));
	while (i<=10)
{
	printf("\n %d x %d = %d", s, i, s*i);
	i++;
}

	return 0;
}

