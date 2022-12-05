#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int num,i=0,c;
int numb[6];

int main(){
	setlocale(LC_ALL,"Turkish");
	puts("1'den 49'a kadar sayý çekilecek.\n-------------------------------------------");
	puts("1 ve 2 eþleþme 0 TL");
	puts("3 eþleþme 1000 TL");
	puts("4 eþleþme 2500 TL");
	puts("5 eþleþme 5000 TL");
	puts("6 eþleþme 10000 TL\n-------------------------------------------");
	
	srand((unsigned)time(NULL));
	
	while(i<6){
		c=0;
		num=rand()%49+1;
		for(int b=0;b<i;b++){
			if(num==numb[b])
			c++;continue;
		}
		if(c==0){
			printf("%d\t",num);
			numb[i]=num;
			i++;
		}
	}
	system("pause");
}
