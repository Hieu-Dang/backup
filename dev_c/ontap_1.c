#include<stdio.h>
void main(){
	int n,m;
	printf("nhap so hang: ");
	scanf("%d", &n);
	printf("nhap so cot: ");
	scanf("%d",&m);
	int mang[n][m];
	int i,j,min,max;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("nhap phan tu[%d][%d]",i,j);
			scanf("%d",&mang[i][j]);
		}	
	}
	
	min=mang[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(min>mang[i][j]){
			min = mang[i][j];
			}
		}
	}
	
	max = mang[0][0];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(max<mang[i][j]){
				max = mang[i][j];
			}	
		}	
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("\t %d", mang[i][j]);
		}	printf("\n");
	}
	printf("phan tu nho nhat trong mang la: %d",min);
	printf("\nphan tu lon nhat trong mang la: %d",max);
	
}	
