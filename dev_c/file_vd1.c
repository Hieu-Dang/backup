#include<stdio.h>
void main(){
//	FILE *ptf;
//	int dem = 0;
//	ptf = fopen("vidu.txt", "a");
//	while(1==1){
//		fputc('g',ptf);
//		dem ++;
//		if(dem == 104857600)
//		break;
//		
//	}	

	FILE *ptf;
	int dem = 0;
	ptf = fopen("vidu.txt", "r");
	while(!feof(ptf)){
		char c = fgetc(ptf);
		
		printf("%c",c);
	}	
}	
