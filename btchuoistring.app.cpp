#include <stdio.h>
#include <string.h>
int main(){
	
	int n;
	scanf("%d",&n);
	char ary[n][50];
	for (int i=0;i<n;i++)
	{
		printf("nhap chuoi thu %d :\n",i);
		scanf("%s",ary[i]);
		
		
		
	}
	char s[50];
	printf("nhap chuoi can tim kiem:\n");
	scanf("%s",s);
	int i;
	for (i=0;i<n;i++)
	{
		if(strcmp(s,ary[i])==0){
			printf("chhuoi %s co trong mang\n",s);
			break;
			
		}
	}
	if(i>=n){
		printf("so nay k cso trong mang\n");
	}
	return 0;
}
