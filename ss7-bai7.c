#include <stdio.h>

int main(){
	
	int n, arrayNum[n];
	printf("moi ban nhap so phan tu cua mang ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("moi ban nhap phan tu thu %d \n",i+1);
		scanf("%d",&arrayNum[i]);
		while(arrayNum[i]%2==0){
			printf("moi ban nhap lai ");
			scanf("%d",&arrayNum[i]);
		}
	}
	
	
	return 0;
}
