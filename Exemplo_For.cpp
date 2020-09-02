#include <stdio.h>
#include <locale>


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i , numero;
	
	
	printf("Calcula tabuada !! digite um numero:\n");
	scanf("%i",&numero);
	
	
	for(i=1;i<=10;i++){
		
		printf("%d x %d = %d \n", numero,   i   ,numero * i);
	} 
	
	
}
