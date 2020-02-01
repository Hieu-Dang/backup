#include<stdio.h>
int i,j,h;

void insao(){
	for(i=0;i<h;i++){
		for(j=0;j<h+i;j++){
			if(j<h-1-i) printf("   ");
			else printf(" * ");
		}printf("\n\n");
	}
}

void main(){
	printf("\n nhap h: ");
	scanf("%d",&h);
	insao();
}	

