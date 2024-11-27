#include <stdio.h>

int main(){
	
	int a,b;
	printf("moi ban nhap so hang ");
	scanf("%d",&a);
	printf("moi ban nhap so cot ");
	scanf("%d",&b);
	int array[a][b];
	
	for (int i=0;i<a;i++){
		for (int n=0;n<b;n++){
			printf("phan tu thu %d hang %d ",n+1,i+1);
			scanf("%d",&array[i][n]);
		}
	}
	for (int i=0;i<a;i++){
		for(int n=0;n<a;n++){
			printf(" %d ",array[i][n]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
