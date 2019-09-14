#include <stdio.h>
int main(){
	int data[9]={4,3,1,5,6,7,8,9,-2};
	int tmp,i,j;
	for (i=1;i<9;i++){
		j=i+1;
		tmp=data[i];
		printf("xet vi tri cua so %d\n",tmp);
		while((j>=0)&&(tmp,data[j])){
			data[j+1]=data[j];
			printf("so sanh voi so:%d\n",data[j]);
			j--;
			}
			data[i+1]=tmp;
			
			//data[i+1]=tmp;
			printf("sau mot vong:\n");
			for (int k=0;k<9;k++)
			{
				printf("%d--",data[k]);
				}
				printf("\n");
				}
				}
