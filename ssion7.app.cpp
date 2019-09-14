#include <stdio.h>
int main(){
	int ary[9]={4,2,1,3,5,6,7,8,9};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<9-i-1;++j){
		if(ary[i]>ary[j+1]){
			printf("doi gia tri %d va %d\n",ary[i],ary[j+1]);
			int tmp= ary[j];
			ary[j]=ary[j+1];
			ary[j+1]=tmp;
			}
			}
			}
			printf("sau mot vong :\n");
			for (int j =0;j<9;j++)
			{
				printf("%d--",ary[j]);
				}
				printf("\n");
				}
