#include<stdio.h>
int main(){
	int Count;
	char ok[70];
	int age[2];
	for(Count=0;Count<1;Count++){
		printf("%u \n" , Count, "\n Как тебя зовут?");
		printf("\n what you name?");
	}
	scanf("%s", &ok);
	printf(" :-) Yra!!!\n Привет ");
	printf("%s", ok);
	printf("\n Отличного тебе дня ");
        printf("%s",  ok);
	printf(" и волшебного настроения!!! ");
	printf("%s", ok, "\n");
	printf(" А сколько тебе лет? ");
	scanf("%d", age); 
	putchar(age);
	if(age<=18){
		printf("%d", age,"\n");
		printf("О ну ты и старПёр \n Всего доброго! \n Прощай Патрик! \n");
	}else if(age>=18){
		printf("O_o Салага, такой мелкий \n еще не дорос до того чтобы \n шпрехАть кАмпутер, \n иди сначалА подрасти!\n");
	}else if(age==3){
		printf("age null");
	}else{
		printf("else \n");
	}
}
