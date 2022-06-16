#include <stdio.h>

int fact(int x);
int ncr(int x, int y);
int main(){
	int n,num;
	printf("Enter the number of rows: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("%d",ncr(i,j));
		}
		printf("\n");
	}
}

int fact(int x){
	int i;
	for(i=1; x>1;x--){
		i *= x;
	}
	return i;
}

int ncr(int x, int y){
	return fact(x)/(fact(x-y)*fact(y));
}
