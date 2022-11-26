#include <stdio.h>
int main()
{
	int a;
	float b,s ;
	
	printf ("\n nhap gia tri nguyen a: ");
	scanf(" %d", &a);
	printf(" \n nhap gia tri thuc b: ");
	scanf(" %f",&b);
	printf("\n gia tri a: %d",a);
	printf("\n gia tri b: %f",b);
	s=a+b;
	printf(" \n tong s: %f",s= a + b);
	//gan gia tri moi
	a=123;
	b=54.15234;
	printf("\n gia tri moi cua a va b: %d va %f", a, b);
	return 0;
}
