#include<stdio.h>
int so_fibonaci(int x[]){
	int n;
	scanf("%d",&n);
	int x1=1,x2=1,x3=2;
	for(int i=0,j=0;x1+x2<=n&&n>0;i+=j,j++){
		x1 = x2;
		x2 = x3;
		x3 = x1+x2;
	}
	printf("so thu %d trong day: %d\n",n,x3);
	return 0;
}


int main(){
	int n[10]={1,2,3,4,5,6,7,8,9,10};
    so_le(n);
    so_trong_mang(n);
    so_fibonaci(n);
	return 0;
