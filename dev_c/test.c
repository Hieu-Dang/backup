#include<stdio.h>
void main(){
	float a;
	printf("nhap so diem cua hs:\n");
	scanf("%f",&a);
	
	if(a>10||a<0) printf("ko hop le\n");
    else {
    	if(a>=9.0) printf("hs suat xac");
    	else if(a>=8.0 && a<9.0 ) printf("hs gioi");
    	else if(a>=6.5 && a<8.0) printf("hs tien tien");
   			else if(a>=5.0 && a<6.5) printf("hs trung binh");
   				else if(a>=3.5 && a<5.0) printf("hs yeu");
   					else printf("hs kem");
   		}
   	}
