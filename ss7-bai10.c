#include <stdio.h>

int main (){
	
	int i,n;
	
	int flag=0;
	printf("moi ban nhap so phan tu ");
	scanf("%d",&n);
	int array[n];
	for (i=0;i<n;i++){
		printf("moi ban nhap gia tri phan tu thu %d ", i);
		scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++){
		if (array[i]==1){
			continue;
		}
		for (int j=2;j<array[i];j++){
			if (array[i]%j==0){
				flag++;
			}
		}
		if(flag==0){
			printf("%d \n",array[i]);
		}
		flag=0;
	}
	
	
	return 0;
}
