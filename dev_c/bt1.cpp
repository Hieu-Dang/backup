#include<stdio.h>
int main(){
	int n;
	printf("nhap gia tri n = ");
	scanf("%d", &n);
	
	if(n<0){
		if(n%2 == 0) printf("n la so chan,so am");
		else printf("n la so le, so am");
	} else{
		if(n%2 == 0) printf("n la so chan,so duong");
		else printf("n la so le, so duong");	
		}
	
	return 0;
	}S
