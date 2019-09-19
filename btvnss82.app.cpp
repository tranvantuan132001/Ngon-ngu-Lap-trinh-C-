#include <stdio.h>

int so_trong_mang(int x[]){
	int y;
	scanf ("%d",&y);
	for(int i = 0;i<9;i++){
		if(x[i]==y){
			printf("Co trong mang\n",x[i]);
			return 0;
		}
	}
		printf("Khong co trong mang\n");
		return 0;
	}



int so_le(int x[]){

    for (int i = 0;i<x[i];i++){
		if(x[i]%2!=0){
			printf("So le trong mang: %d\n",x[i]);
		}
	}
}




