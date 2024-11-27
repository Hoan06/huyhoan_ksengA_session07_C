#include <stdio.h>

  int main() {	  
	int a,n;
	printf ("moi ban nhap so phan tu cua mang ", n);
    scanf("%d",&n);
    int arrayNum[n];
	
	for (int i=0;i<n;i++){
		printf("nhap gia tri phan tu thu %d ",i+1);
		scanf ("%d",&arrayNum[i]);
	}
	
	
	return 0;
}
