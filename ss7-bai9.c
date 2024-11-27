#include <stdio.h>

int main(){
	
	int i,j;
	int a,b;
	printf("moi ban nhap so hang ");
	scanf("%d",&a);
	printf("moi ban nhap so cot ");
	scanf("%d",&b);
	int array[a][b];
	for (i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("moi ban nhap phan tu cua array[%d][%d] \n",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	for (i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("gia tri phan tu array[%d][%d] la %d \n",i,j,array[i][j]);
		}
	}
	
	return 0;
}
