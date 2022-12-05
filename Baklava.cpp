#include <stdio.h>

int height,star=1;

int main(){
	printf("Yükseklik:");
	scanf("%d", &height);
	
	for(int i=1;i<=height;i++){
		for(int m=1;m<=height-i;m++)
		printf(" ");
		for(int c=1;c<=star;c++){
			if((c==1||c==star))
			printf("*");
			else
			printf(" ");
		}
		puts("");
		star+=2;
	}
	star-=2;
	for(int i=height-1;i>=1;i--){
		star-=2;
		for(int m=1;m<=height-i;m++)
		printf(" ");
		for(int c=1;c<=star;c++){
			if((c==1||c==star))
			printf("*");
			else
			printf(" ");
		}
		puts("");
	}
}
