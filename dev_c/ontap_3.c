#include<stdio.h>
#include<ctype.h>
void main(){

//	char chuoi[100];
//	printf("nhap chuoi: ");
//	gets(chuoi);
//	int h = strlen(chuoi);
//	int i;
//	int sodem = 0;
//	for(i=0;i<h;i++){
//		if(isalpha(chuoi[i])){
//			sodem++;
//		}	
//	}	
//	printf("ket qua dem la: %d",sodem);
	char chuoi[100];
	printf("nhap chuoi: ");
	gets(chuoi);
	int h = strlen(chuoi);
	int i;
	int sodem =0;
	for(i=0;i<h;i++){
		if(isalpha(chuoi[i])){
			sodem++;
		}
	}		
	printf("ket qua dem la: %d",sodem);
}	
