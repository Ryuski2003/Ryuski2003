#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int num,i=0,a=0,b=0,c=0,d=0,e=0;

int main(){
	setlocale(LC_ALL,"Turkish");
	puts("1'den 49'a kadar sayý çekilecek.\n-------------------------------------------");
	puts("1 ve 2 eþleþme 0 TL");
	puts("3 eþleþme 1000 TL");
	puts("4 eþleþme 2500 TL");
	puts("5 eþleþme 5000 TL");
	puts("6 eþleþme 10000 TL\n-------------------------------------------");
	
	srand((unsigned)time(NULL));
	
	num = rand()%49 +1;
	printf("%d\t",num);
	i++;
	a = num;
	i=0;
	while(i!=1){
		num = rand()%49 +1;
		if(a!=num){
			printf("%d\t",num);
			i++;
		}
		b = num;
	}
	i=0;
	while(i!=1){
		num = rand()%49 +1;
		if(a!=num && b!=num){
			printf("%d\t",num);
			i++;
		}
		c = num;
	}
	i=0;
	while(i!=1){
		num = rand()%49 +1;
		if(((a!=num && b!=num) && c!=num)){
			printf("%d\t",num);
			i++;
		}
		d = num;
	}
	i=0;
	while(i!=1){
		num = rand()%49 +1;
		if(((a!=num && b!=num) && (c!=num && d!=num))){
			printf("%d\t",num);
			i++;
		}
		e = num;
	}
	i=0;
	while(i!=1){
		num = rand()%49 +1;
		if(((a!=num && b!=num)) && ((c!=num && d!=num) && e!=num)){
			printf("%d\t",num);
			i++;
		}
	}
	system("pause");
}
