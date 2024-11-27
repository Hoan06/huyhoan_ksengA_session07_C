#include <stdio.h>

int main(){
	
	int max,min, number[5]={1,3,5,2,7};
	max=number[1];
	min=number[7];
	for(int i=0;i<5;i++){
		if(number[i]>max){
			max=number[i];
		}
		if(number[i]<min){
			min=number[i];
		}
	}
	printf("sln %d\n",max);
	printf("snn %d",min);
	
	return 0;
}
