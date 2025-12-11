#include <stdio.h>
int main(){
	int mid,shrt,finl;
	scanf("%d/%d/%d",&mid,&shrt,&finl);
	int score;
	score = mid+shrt+finl;
	if(score>=50){
		if(score<60){
			printf("D %d",80-score);
		}
		else if(score<70){
			printf("C %d",80-score);
		}
		else if(score<80){
			printf("B %d",80-score);
		}
		else{
			printf("A");
		}
	}
	else{
		printf("F %d",80-score);
	}
}
