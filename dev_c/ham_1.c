#include<stdio.h>
int Min(int mang[], int n){
	int i;
	for(i=0;i<n;i++){
		int min = mang[0];
		if(min<mang[i]){
		min = mang[i];
		}
	return min;	
	}	
}	

int Max(int mang[],int n){
	int i;
	for(i=0;i<n;i++){
		int max = mang[0];
		if(max>mang[i]){
		max =mang[i];
		}
	}	
}	

void main(){
	int n;
	printf("nhap n: ");
	scanf("%d",&n);
	int mang[n];
	int i;
	for(i=0;i<n;i++){
		printf("\n nhap phan tu [%d]: ",i);
	}	
	for(i=0;i<n;i++){
		printf("\t %d",mang[i]);
		int Max(mang,n);
	}	
}	
