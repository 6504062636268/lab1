#include <stdio.h>
int main(){
	float pr1,pr2,pr3,sale;
	scanf("%f",&pr1);
	printf("%.2f\n",pr1-(pr1*5/100));
	scanf("%f",&pr2);
	printf("%.2f\n",(pr1+pr2)-((pr1+pr2)*15/100));
	scanf("%f",&pr3);
	printf("%.2f\n",(pr1+pr2+pr3)-((pr1+pr2+pr3)*30/100));
	
}
