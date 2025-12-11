#include <stdio.h>
int main(){
	int hr,min;
	scanf("%d:%d",&hr,&min);
	if(hr==7){
		if(min>=10&&min<=60){
			printf("Y");
		}
		else{
			printf("N");
		}
	}
	else if(hr==8){
		if(min>=00&&min<=60){
			printf("Y");
		}
		else{
			printf("N");
		}
	}
	else if(hr==9){
		if(min>=00&&min<=30){
			printf("Y");
		}
		else{
			printf("N");
		}
	}
	else{
		printf("N");
	}
}
