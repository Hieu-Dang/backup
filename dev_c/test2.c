#include<stdio.h>

void main(){
	int phim,a,b;
	while(phim !=0){
	
 printf("bam phim 1 de tinh tong 2 so\n");
 printf("bam phim 2 de tinh hieu 2 so\n");
 printf("bam phim 0 de thoat\n");
 scanf("%d",&phim);
 
 switch(phim){
 	case 0:
 		printf("chao tam biet!!! ");
 		break;
 		
 	case 1:
 		printf("nhap a = ");
 		scanf("%d", &a);
 		printf("nhap b = ");
 		scanf("%d",&b);
 		printf("%d + %d = %d", a,b, a+b);
 		break;
 		
 	case 2:
	 	printf("nhap a = ");
 		scanf("%d", &a);
 		printf("nhap b = ");
 		scanf("%d",&b);
 		printf("%d - %d = %d", a,b, a-b);
 		break;	
 		
 	default:
	 printf("ko hop le");
	 break;	
 		}   
 	
 	}getch();


// 	int x;
//
//while(x!=0){
//	
//	printf("nhap so x = ");
//	
//	scanf("%d",&x);
//	
//	printf("so vua nhap la %d",x);
//	
//	getch();
//	system("cls");
//	
//	
//	}
}
