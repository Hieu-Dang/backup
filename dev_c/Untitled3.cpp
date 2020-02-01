#include<stdio.h>
int main(){
	int a, b, tong, hieu, tich, thuong;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);

	tong = a+b;
	hieu = a-b; 
	tich = a*b;
	thuong = a/b;
	
	printf("tong = %d\n",tong);
	printf("hieu = %d\n",hieu);
	printf("tich = %d\n",tich);
	printf("thuonng = %d\n",thuong);
}

