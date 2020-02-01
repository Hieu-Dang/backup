#include<stdio.h>
#include<math.h>

int isPrime(int a){
	if(a<2){
		return 0;
	} else {
		int i;
		for( i=2 ; i<=sqrt(a); i++){
			if( a%i == 0 ){
				return 0;
			}
		}
	}
	return 1;
}

int PrimeCount(int a[], int n){
	int i,count=0;
	for( i=0; i<n; i++){
		if(isPrime > 0) count++;
	}
	return count;
}

void PrintPrime(int a[], int n){
	int i;
	for( i=0; i<n; i++){
		if(isPrime(a[i])) printf("%d\t", a[i]);
	}
}

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	int a[n];
	int i;
	for(i=0; i<n; i++){
	printf("Nhap a[%d] =", i);
	scanf("%d", &a[i]);
	}
	
	for( i=0; i<n; i++){
		printf(" %d ", a[i]);
	}
	
	int primecount = PrimeCount(a,n); 
	printf("\nso luong so nguyen to la :%d ", primecount);
	
	if(primecount > 0){
		printf("\nDanh sach so nguyen to: ");
		PrintPrime(a, n);
	}
 	
	return 0;
}
