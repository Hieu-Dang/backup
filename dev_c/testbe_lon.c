#include<stdio.h>
void main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int mang[n];
	int i,j,D;
	for(i=0;i<n;i++){
		printf("nhap phan tu[%d]: ",i);
		scanf("%d",&mang[i]);
	}	
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(mang[i]>mang[j]){
			D=mang[i];mang[i]=mang[j];mang[j]=D;
			}
		}	
	}	
	for(i=0;i<n;i++){
		printf("\t %d",mang[i]);
	}	
}	
