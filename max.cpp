#include <stdio.h>
#include <stdlib.h>
int main(){
	int a[];
	int n;
int LonNhat(int a[], int n) ;
{
	
	int max = a[0];
	for(int i=1; i<n; i++)		
		if(a[i] > max)
			max = a[i];
	return max;
}
}
