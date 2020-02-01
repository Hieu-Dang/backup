#include<stdio.h>

//Bai1
//int main(){
//	int a;
//	scanf("%d", &a);

//	if(a == 0)	printf("hnay la cn");
//	if(a == 1) printf("hnay la t2");
//		if(a == 2) printf("hnay la t3");
//			if(a == 3) printf("hnay la t4");
//				if(a == 4) printf("hnay la T5");
//					if(a == 5) printf("hnay La t6");
//						if(a == 6) printf("hnay la t7");
//		return 0;   5.0 , 3.5
		
//	}

// Bai2
//void main(){
//	float a;
//	printf("nhap so diem cua hs:\n");
//	scanf("%f",&a);
//	
//	if(a>10||a<0) printf("ko hop le\n");
//    else {
//    	if(a>=9.0) printf("hs suat xac");
//    	else if(a>=8.0 && a<9.0 ) printf("hs gioi");
//    	else if(a>=6.5 && a<8.0) printf("hs tien tien");
//   			else if(a>=5.0 && a<6.5) printf("hs trung binh");
//   				else if(a>=3.5 && a<5.0) printf("hs yeu");
//   					else printf("hs kem");
//   		}
//   			getch();
//
//   	}
//


//Bai 3
int main(){
	int a,b,D;
	printf("nhap vao 2 so nguyen\n");
	scanf("%d%d",&a ,&b);

	float tbc = (a+b)/2;
	printf("trung binh cong cua 2 so = %f\n", tbc);
	printf("thu tu cac so da nhap = %d, %d", a,b);
	if(a>b) D=a;a=b;b=D;
	printf("\nthu tu tang dan la: %d , %d",a,b);
	
}
