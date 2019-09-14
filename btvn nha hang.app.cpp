#include <stdio.h>
#include <stdlib.h>
#include <iostream>
int main(){
	
	int n;
    printf("Menu mon an:\n");
	printf("1.mon an\n");
	printf("2.do uong\n");
	printf("3.thanh toan \n");
	printf("4.Thoat chuong trinh\n");
	printf("moi quy khach chon do :\n");
	scanf("%d",&n);
//	printf("moi quy khach chon do ");
	//scanf("%d",&n);
/*	if(n!=1||n!=2||n!=3) 
		printf("Moi ban chon lai dung so tren man hinh\n");
	else
	{
		if(n==1) printf("sup heo\n");
		if(n==1) printf("thit bo bac my\n");
		if(n==1) printf("lau thai chua cay\n");
		if(n==2) printf("nuoc chanh\n");
		if(n==2) printf("nuoc ep\n");
		if(n==2) printf("ca phe\n");1
		if(n==3) printf("moi quy khach thanh toan,cam on quy khach\n");
	}*/
	if(n!=1)
	{
		printf("Moi chon chuong trinh dung tren man hinh :\n");
		scanf("%d",&n);
	}
	else
	{
		if(n!=2)
		{
			printf("Moi chon chuong trinh dung tren man hinh :\n");
			printf("Moi chon chuong trinh dung tren man hinh :\n");
			scanf("%d",&n);
		}
		else
		{
			if(n!=3)
			{
				printf("Moi chon chuong trinh dung tren man hinh :\n");
				scanf("%d",&n);
			}
			else
			if(n!=4)
			{
				printf("Moi chon chuong trinh dung tren man hinh :\n");
				scanf("%d",&n);
			}
		}
	}
	if(n==1) {
				printf("sup heo\n");
				printf("thit bo bac my\n");
				printf("lau thai chua cay\n");
				
		}
		if(n==2) {
				 printf("nuoc chanh\n");
				 printf("nuoc ep\n");
				 printf("ca phe\n");
				 
		}
		if(n==3) 
		{
			    printf("moi quy khach thanh toan,cam on quy khach\n");
			    
		}
		if(n==4)
		 exit(0);
	printf("Cam on quy khach");
}

