#include<stdio.h>
#include<math.h>
void main(){
	float a,b,c,delta;
	printf("nhap he so bac 2: ");
	scanf("%f",&a);
	printf("nhap he so bac 1: ");
	scanf("%f",&b);
	printf("nhap he so tu do: ");
	scanf("%f",&c);
	
	if(a == 0){
		if(b==0) printf("pt vo no");
		else printf("pt co no x = %f", -c/b);
	}else{
		delta = b*b -4*a*c;
		if(delta<0) printf("pt vo no !!");
		else if(delta==0) printf("pt co no kep x = %f", -b/2*a);
		else printf("pt co 2 no p/b: x1 = %f\nx2 =%f",(-b-sqrt(delta))/2*a, (-b+sqrt(delta))/2*a);
	}	
}	
