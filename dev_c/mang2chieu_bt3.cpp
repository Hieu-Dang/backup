#include<stdio.h>
void main(){
	//3.a
	int n,m;
	printf("nhap so dong: ");
	scanf("%d",&n);
	printf("nhap so cot: ");
	scanf("%d",&m);
	
	int mang[n][m];
	int i,j,k;
	
	for(i=0; i<n; i++){
		for(j=0;j<m; j++){
			printf("nhap phan tu[%d][%d] ",i,j);
			scanf("%d", &mang[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(i=0; i<n; i++){
			printf(" \t %d", mang[i][j]);
		}
	}
}
