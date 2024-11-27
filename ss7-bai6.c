#include <stdio.h>

int main(){
	
	int arrayNum[5]={1,2,3,4,5};
	
	for (int i=0;i<5;i++){
		if(arrayNum[i]%2==0){
			arrayNum[i]+=3;
		} else {
			arrayNum[i]+=2;
		}
	}
	for (int n=0;n<5;n++){
		printf("phan tu thu %d co gia tri la %d\n",n,arrayNum[n]);
	}
	
	
	
	return 0;
}
