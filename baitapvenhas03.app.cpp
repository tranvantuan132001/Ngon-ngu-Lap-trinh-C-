#include<stdio.h>
int main(){
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	
	z=x;
	y=z;
	x=y;
	printf("x=%d\n",x);
	printf("y=%d\n",x);
	
	return 0;
}
