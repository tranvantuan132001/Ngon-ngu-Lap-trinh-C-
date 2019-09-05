#include <stdio.h>
//#include < >
int main(){
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	if(( a +b > c) && (a +c > b) && (b +c>a)){
		printf(" day la ba canh tam giac\n");
		int P = a +b +c;
		printf("chu vi tam giac: %d\n",P);
		float P2 =(float)P/2;
     	float S = 0;
     	S = sqrt (P2-a)
	}
