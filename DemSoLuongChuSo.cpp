#include <conio.h>
#include <stdio.h>

int main()
{
	int n;
	printf("Nhap vao 1 so nguyen duong :");
	scanf("%d",&n);
	//printf("%d\n",n);
	int dem=0;
	while(n>=10)
	{
		n=n/10;
		dem=dem+1;
	
	}
	 printf("So luong chu so cua so nguyen duong tren la: %d",dem+1);
	
	}
