#include<stdio.h>
int main(){
	int Count;
	char ok[70];
	for(Count=0;Count<1;Count++){
		printf("%u \n" , Count, "\n Как тебя зовут?");
		printf("\n what you name?");
	}
	scanf("%s", &ok);
	printf(" :-) Yra!!!\n Привет ","%s", ok, " \n");
	printf("%s", ok);
	printf("\n Отличного дня и волшебного настроения!!!\n");
}
