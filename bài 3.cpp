#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,a,so;
    int s = 0;
    int d=0;
    do
	{ 
   printf("Nhap so nguyen 3 chu so: ", i) ;
  	scanf("%d",&i);
  	so=i;
	}
	while((i<100)||(i>999));
	while(i>0)
   			{
   			a=i%10;
   			if(a%2!=0)
   				{
   					d++;
   				}
   			s=s+a;
   			i=i/10;
   			}
   	system("color f6");
   printf("\nTong cua %d la %d", so, s );
   printf("\nSo %d co %d so le", so, d);
 

    return 0;
}
