#include<stdio.h>
void main (){
	int a,b;
	printf("Giai pt bac 1: ax + b = 0\n");
	printf("nhap a =\n");
	scanf("%f", &a);
	printf("nhap b =\n");
	scanf("%f", &b);
	
	if(a == 0){
		if(b ==0) printf(" pt vo so no ");
		else printf("pt vo no");		
	}else printf("pt co no x = %f", -b/a);
	
		}


