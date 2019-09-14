#include <stdio.h>
int main(){
int ary[20]={1,4,5,6,2,3,7,8,9,11,14,13,12,15,19,16,20,44,33,55};
for(int i=0;i<19;i++){
for(int j=0;j<19-i-1;j++){
if (ary[i]>ary[j+1]){
	printf("doi gia trin cua %d va %d\n",ary[i],ary[j+1]);
		int tmp= ary[j];
		//	ary[j]=ary[j+1];
            ary[j]=ary[j+1];
			ary[j+1]=tmp;
			
			printf("sau mot vong :\n");
			for (int j =0;j<19;j++)
			{
				printf("%d--",ary[j]);
				}
				printf("\n");
				}


}



}
}








