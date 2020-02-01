#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c,D;
	printf("nhap abc lan luot la:\n ");
	 scanf("%d %d %d",&a,&b,&c);
	if(a>b) 
	D=a;a=b;b=D;
	if(a>c)
	 D=a;a=c;c=D;
	if(b>c)
	 D=b;b=c;c=D;
	printf("\n3 so thu tu tang dan la:%d %d %d",a,b,c); 
	return 0;
	}
