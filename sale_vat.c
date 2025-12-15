#include <stdio.h>
int main(){
	float pr1,pr2,pr3,pr11,pr12,pr13;
	float total1,total2,total3;
	scanf("%f",&pr1);
	pr11 = pr1-(pr1*5/100);
	total1 = pr11*1.07;
	printf("%.2f\n",total1);
	
	scanf("%f",&pr2);
	pr12 = (pr1+pr2)-((pr1+pr2)*15/100);
	total2 = pr12*1.07;
	printf("%.2f\n",total2);
	
	scanf("%f",&pr3);
	pr13 = (pr1+pr2+pr3)-((pr1+pr2+pr3)*30/100);
	total3 = pr13*1.07;
	printf("%.2f\n",total3);
	
}
