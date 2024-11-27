#include <stdio.h> 

  int main() {
	
	int arrayNum[5];
	for (int n=1;n<6;n++){
		printf ("moi ban nhap phan tu thu %d ", n);
	    scanf("%d",&arrayNum[n]);
	}

	printf("---------------------------------------\n");
	for (int i=1;i<6;i++){
		printf("gia tri cua mang thu %d la %d\n",i,arrayNum[i]);
	}
	
	
	return 0;
}
