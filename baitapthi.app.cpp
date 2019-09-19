#include <stdio.h>
int main(){
	int n;
	int tong = 0;
	int soTemp;
	scanf("%d",&n);
	printf("nhap n :\n");
	
    soTemp = n;
    while (soTemp != 0) {
        tong += soTemp % 10;
        soTemp /= 10;
        soTemp = n;
    }
    printf("tong cua cac chu so la: %d\n,",n);
     
    return 0;
}
