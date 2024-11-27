#include <stdio.h> 

  int main() {
	
	int arrayNum[5]={1,2,3,4,5};
	int flagNum=0;
	
	for (int i=0;i<5;i++){
		if(arrayNum[i]%2==0 ){
			printf("so chan %d\n",arrayNum[i]);
			flagNum=1;
		} 
		
	}
	if (!flagNum ){
			printf("mang khong co so chan\n");
		}
	
	
	return 0;
}
