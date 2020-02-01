#include<stdio.h>
#include<math.h>

void PTB1(){
	float a,b;
//	printf("nhap he so x: ");
//	scanf("%f",&a);
//	printf("\nnhap he so tu do: ");
//	scanf("%f",&b);
	
	if(a==0){
		if(b==0) printf("pt vo so no");
		else printf("pt vo no");
	}else printf("pt co no x = %f", -b/a);	
}	
void PTB2(){
	float a,b,c,delta;
//	printf("\nnhap he so bac 2: ");
//	scanf("%f",&a);
//	printf("\nnhap he so bac 1: ");
//	scanf("%f",&b);
//	printf("\nnhap he so tu do: ");
//	scanf("%f",&c);
//	
//	if(a == 0){
//		if(b == 0) printf("pt vo so no");
//		else printf("pt co no x = %f",-c/b);
//	}else{
		delta = b*b-4*a*c;
		if(delta<0)printf("pt vo no !!!");
		else if (delta == 0)printf("pt co no kep x = %f",-b/2*a);
		else printf("pt co 2 no p/b: x1 =%f\nx2=%f",(-b-sqrt(delta))/2*a,(-b+sqrt(delta))/2*a);
	}	
		

void main(){
	float a,b,c;
	printf("nhap a: ");
	scanf("%f",&a);
	printf("nhap b: ");
	scanf("%f",&b);
	printf("nhap c: ");
	scanf("%f",&c);
	
	if(a==0){
		PTB1();		
	}else if(a>0){
		PTB2();
	}else printf("pt vo no !!");		
	
	
}	
