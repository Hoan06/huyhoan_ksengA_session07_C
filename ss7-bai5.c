#include <stdio.h>

int main(){
	
	int max, number[5]={1,3,5,2,7};
	max=number[1];
	for(int i=0;i<5;i++){
		if(number[i]>max){
			max=number[i];
		}
	}
	printf("%d",max);
	
	
	return 0;
}
