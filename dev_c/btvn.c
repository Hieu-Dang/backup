#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	//bai1.a
//	printf("- Ho va ten: Nguyen Van A\n");
//	printf("- Sinh nam 2019\n");
//	printf("- So thich: Yeu mau tim, ghet thuy chung :)\n");
//	printf("- Cong viec: Dang hoc lap trinh tai website saophaixoan.net");
	
	
	//bai1.b
//	int a,b;
//	printf("nhap gia tri a,b\n");
//	scanf("%d%d",&a,&b);
//	printf("2 so nguyen vua nhap la %d %d ",a,b);


	//bai1.c
//	int a,b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	printf("tong: %d\n", a+b);
//	printf("hieu: %d\n", a-b);
//	printf("tich: %d\n", a*b);
//	printf("thuong: %d", a/b);
	
	
	//bai 2.a
//	int a,b,D;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	if(a>b) D=a;a=b;b=D;
//	printf("2 so theo thu tu tang dan: %d %d", a,b);
//	return 0;
	
	//bai2.b
//	int a, b;
//	printf("nhap a: ");
//	scanf("%d", &a);
//	printf("nhap b: ");
//	scanf("%d", &b);
//	if(a>b) printf("a - b = %d", a-b);
//	if( b>a) printf("b -a =%d", b-a);
	
	//bai2.c
//	float a,b,x;
//	printf("GIAI PTB1\n");
//	printf("nhap he so bac nhat: ");
//	scanf("%f", &a);
//	printf("nhap he so tu do: ");
//	scanf("%f",&b);
//	if(a == 0){
//		if(b == 0) printf("pt vo so no");
//		else printf("pt vo no");
//	}else printf("pt co no = %f", -b/(a));
//		
//	getch();
	
	//bai2.d
//	float a,b,c,delta;
//	printf("GIAI PTBB2\n");
//	printf("nhap he so bac 2: ");
//	scanf("%f", &a);
//	printf("nhap he so bac 1: ");
//	scanf("%f", &b);
//	printf("nhap he so tu do: ");
//	scanf("%f",&c);
//	
//	if(a == 0){
//		if(b == 0) printf("pt vo no");
//		else printf("pt bac nhat co no = %f", -c/b);
//	}else{
//		delta = b*b - 4*a*c;
//		if(delta <0) printf("pt vo no");
//		else if(delta=0) printf("pt co no kep = %f",-b/(2*a));
//		else printf("pt co 2 no p/b = %f %f", (-b- sqrt(delta))/(2*a),(-b+ sqrt(delta))/(2*a));
//		
//		getch();		
//		}
	//bai2.e
//	int a;
//	printf("nhap so tu 0 den 6: ");
//	scanf("%d", &a);
//	if(a==0) printf("hnay la cn");
//	else if(a==1) printf("hnay la t2");
//	else if(a==2) printf("hnay la t3");
//	else if(a==3) printf("hnay la t4");
//	else if(a==4) printf("hnay la t5");
//	else if(a==5) printf("hnay la t6");
//	else if(a==6) printf("hnay la t7");
//	else printf("so nhap ko hop le !!!");
//	
//	return 0;

	//bai2.g
//	float x;
//	printf("nhap diem cua hs: ");
//	scanf("%f",&x);
//	if(x>10 || x<0 ) printf("so diem nhap vao ko hop le !!!");
//	else {
//		if(x>=9.0) printf("hs xuat sac");
//		else if(x>=8.0 && x< 9.0) printf("hs gioi");
//		else if(x>=6.5 && x<8.0) printf("hs tien tien");
//		else if(x>=5.0 && x<6.5) printf("hs trung binh");
//		else if(x>=3.5 && x<5.0) printf("hs yeu");
//		else printf("hs kem");
//	}
//	getch();

	//bai 2.h
//	float a,b;
//	char dau;
//	printf("nhap dau: ");
//	scanf("%c",&dau);
//	printf("nhap a: ");
//	scanf("%f", &a);
//	printf("nhap b: ");
//	scanf("%f", &b);
//
//	if(dau == '+') printf("%.2f + %.2f = %.2f", a,b,a+b);
//	if(dau == '-') printf("%.2f - %.2f = %.2f", a,b,a-b);
//	if(dau == '*') printf("%.2f * %.2f = %.2f", a,b,a*b);
//	if(dau == '/') printf("%.2f / %.2f = %.2f", a,b,a/b);
//	
//	
//	return 0;

	//bai3.a
//	int a;
//	printf("nhap a = ");
//	scanf("%d",&a );
//	
//	switch(a){
//		case 1:
//			printf("mot");
//		break;
//		case 2:
//			printf("hai");
//		break;
//		case 3:
//			printf("ba");
//		break;
//		case 4:
//			printf("bon");
//		break;
//		case 5:
//			printf("nam");
//		break;
//		default:
//			printf("ko hop le !!!");
//		
//	}
	//bai 3.b
//	int x;
//	printf("nhap ngay: ");
//	scanf("%d",&x);
//	 switch(x){
//	 	case 0:
//	 		printf("hnay la cn");
//	 		
//	 	break;	
//	 	case 1:
//	 		printf("hnay la t2");
//	 	break;	
//	 	case 2:
//	 		printf("hnay la t3");
//	 	break;	
//	 	case 3:
//	 		printf("hnay la t4");
//	 	break;	
//	 	case 4:
//	 		printf("hnay la t5");
//	 	break;	
//	 	case 5:
//	 		printf("hnay la t6");
//	 	break;	
//	 	case 6:
//	 		printf("hnay la t7");
//	 	break;	
//	 	default:
//	 		printf("ngay nhap ko hop le !!!");
//	 	
//	 }
	//bai3.c
//	char dau;
//	float a,b;
//	printf("nhap dau: ");
//	scanf("%c",&dau);
//	printf("nhap a: ");
//	scanf("%f", &a);
//	printf("nhap b: ");
//	scanf("%f", &b);
//	
//	switch(dau){
//		case '+':
//			printf("%.2f + %.2f = %.1f", a, b, a 
//			+ b );
//			break;
//				case '-':
//			printf("%f - %f = %f", a, b, a - b );
//			break;
//				case '*':
//			printf("%f * %f = %f", a, b, a * b );
//			break;
//				case '/':
//			printf("%f / %f = %f", a, b, a / b );
//			break;
//			default:
//				printf("nhap sai mm r ");
//	}
	
	//bai 4
	int thang, ngay;
	int ktraNamNhuan(int nam){
		return (nam %4 == 0 && nam %100 != 0) || (nam % 400 == 0);
	}
	printf("nhap thang: ");
	scanf("%d", &thang);
	ngay=30;
	
	switch(thang){
		case 1:
			printf("thang nay co %d ngay",ngay + 1);
			break;
				case 2:
			int Check = ktraNamNhuan(nam);
			if(Check == 1) printf("thang nay co %d ngay", ngay -1);
			else printf("thang nay co%d ngay",ngay -2);
			break;
					case 3:
			printf("thang nay co %d ngay",ngay +1);
			break;
					case 4:
			printf("thang nay co %d ngay",ngay);
			break;
					case 5:
			printf("thang nay co %d ngay",ngay +1);
			break;
					case 6:
			printf("thang nay co %d ngay",ngay);
			break;
					case 7:
			printf("thang nay co %d ngay",ngay +1); 
			break;
					case 8:
			printf("thang nay co %d ngay",ngay +1);
			break;
					case 9:
			printf("thang nay co %d ngay",ngay);
			break;
					case 10:
			printf("thang nay co %d ngay",ngay +1);
			break;
					case 11:
			printf("thang nay co %d ngay",ngay);
			break;
					case 12:
			printf("thang nay co %d ngay",ngay+1);
			break;
			default:
				printf("nhap ko hop le !!!");
	}
	
	
	}
