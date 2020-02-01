#include<stdio.h>

int max(int mang[],int n){
	int max = mang[0];
	for(int i = 1;i < n;i++){
		if(max < mang[i]) max = mang[i];
		}
		return max;
	}
int min(int mang[],int n){
	int min = mang[0];
	for(int i =1;i < n; i++){
		if(min > mang[i]) min = mang[i];
		}
		return min;
	}
	
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int mang[n];
	int i;
	for( i =0;i<n; i++){
	printf("nhap phan tu cua mang: ");
	scanf("%d",&mang[i]);
	
	}
	
	for(i=0;i<n;i++){
		printf("\t %d", mang[i]);
		}
		printf("\nMax = %d",max(mang,n));
		printf("\nMin = %d",min(mang,n));
	return 0;
	}
