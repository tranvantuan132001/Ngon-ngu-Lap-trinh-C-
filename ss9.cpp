#include <stdio.h>
#include <string.h>
int main(){
	char str1[10];
	char str2[10];
	int n;
	printf("nhap chuoi 1\n");
	scanf("%s",str1);
	printf("nhap chuoi 2\n");
	scanf("%s",str2);
	
	strcpy(str1,str2);
	
	for(int i=0; i<n; i++)
    {
        printf("Nhap phan tu thu %s: ", i);
        scanf("%d",str1[i]);
        
    //dao nguoc mang
    char str[i];
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j < n; j++)
        {
            str[j] = str[i];
        }
    }
//return 0;
//}
  
