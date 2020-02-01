#include<stdio.h>
#include<math.h>
 
void main(){
	float a, b, c, delta;
	printf("GIAI PTB2\n");
	printf("Nhap he so bac 2 a =\n");
	scanf("%f", &a);
		printf("Nhap he so bac 1 b =\n");
	scanf("%f", &b);
		printf("Nhap he so tu do c =\n");
	scanf("%f", &c);
	
	if(a==0){
		if(b==0){
		 if (c==0) printf("pt vo dinh");
		 else printf("pt vo no");
		 }
		if(b !=0) printf("pt co no x = %f",(-c)/b); 
		}
		
		if(a!=0){
			delta = b*b - 4*a*c;
			if(delta < 0) printf(" pt vo nghiem !");
			else if(delta == 0) printf("pt co 1 no kep = %f", -b/(2*a));
			else printf("Pt co 2 no p/b: x1 = %f\nx2 =%f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
				
			}
		}
		getch();

