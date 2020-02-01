#include<stdio.h>
void main(){
	//3.a
	int n,m;
	printf("nhap so dong: ");
	scanf("%d",&n);
	printf("nhap so cot: ");
	scanf("%d",&m);
//	mang2c[j];
	int mang[n][m];
	int i,j,k,g,D,C;
	
	for(i=0; i<n; i++){
		for(j=0;j<m; j++){
			printf("nhap phan tu[%d][%d] ",i,j);
			scanf("%d", &mang[i][j]);
		}
	}

	for(i=0;i<n-1;i++){
		for(j=0;j<m-1;j++){
			//sap xep phan tu cung hang tang dan 
			for(k=j+1;k<m;k++){
					if(mang[i][j]>mang[i][k])
					D=mang[i][j];mang[i][j]=mang[i][k];mang[i][k]=D;
			}
		}
	}
	
	//in mang
	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			printf(" \t %d", mang[i][j]);
		}printf("\n");
	}
}
