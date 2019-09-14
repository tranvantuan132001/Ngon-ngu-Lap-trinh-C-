#include <stdio.h>

int tim_so_nghich_dao(int x){
	int s=0;
	for (;x>0;)
//	scanf("%d",&x);
	//=0;
	{
	s=s*10+x%10;
	x/=10;
	}
	return s;
	

}
int main(){
	int n=1234;
	printf("so nghich dao:%d\n",tim_so_nghich_dao (n));
		}

//	return 0;
 
