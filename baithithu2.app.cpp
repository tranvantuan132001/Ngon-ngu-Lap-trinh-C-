#include<stdio.h>
#include<string.h>

int main() {
   char string[100];
 
   printf("Nhap chuoi bat ky: ");
   gets(string);
 
   strlwr(string);
   printf("\nChuoi dang chu thuong la: %s", string);
 
   return (0);
}
