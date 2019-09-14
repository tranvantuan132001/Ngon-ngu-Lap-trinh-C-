#include <stdio.h>
int main()
{
	printf("Menu mon an:\n");
	printf("1.Sup heo\n");
	printf("2.Thit bo bac my \n");
	printf("3.Lau thai chua cay \n");
	printf("4.Canh chua ca loc \n");
	printf("\n\n moi ban chon lai : \n");
	int n;
	scanf("%d",&n);
	printf("Danh sach cac mon ban chon la:\n");

		if(n==1) printf("1.Sup heo\n");
		if(n==2) printf("2.Thit bo bac my\n");
		if(n==3) printf("3.Lau thai chua cay\n");
		if(n==4) printf("4.Canh chua ca loc\n");
		if(n==n) printf("moi ban chon lai");
	
	
}
