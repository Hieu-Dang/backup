#include<stdio.h>
#define MAX 10

char filename[] = "vidu_mang.txt";
void main(){
	int mang[MAX][MAX],i,j;
	FILE *fp;
	if((fp = fopen(filename,"w+"))==NULL)
		printf("\nkhong the tao tap tin %s",filename);
	else{
		printf("\nnhap cac phan tu cua mang: ");
		for(i=0;i<MAX;i++){
			for(j=0;j<MAX;j++){
				printf("\nmang[%d][%d] = ",i,j);
				scanf("%d", &mang[i][j]);
			}
		}		
		fwrite(&mang, sizeof(int),MAX * MAX,fp);
		fclose(fp);
		printf("Viec ghi hoan tat");
	}	
	getch();
}	
