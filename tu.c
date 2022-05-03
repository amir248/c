#include<stdio.h>
main(){
	int integer;
	char name[7];
	printf("Как тебя зовут?");
	scanf("%s", &name);
	printf("hello! " );
	printf("%s", &name, "\n");

	if(("%s", &name)=="Amir"){
		printf("\n Yra!!! \n");
	}else if(("%s",&name)!=1){
		printf("\n ok \n");
	}else{
		printf("else \n");
	}	
}
