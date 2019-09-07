#include <stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
//	printf("in ra so n la ");
   // int	i=1;
   // int count=0;
//n=n+i;
int count=0;
	for(int i=1;i<=n;i++){
		n=n/10;
		printf("%d co so ki tu la n ",&count);
		break;
		
	}
	return 0;
}   
