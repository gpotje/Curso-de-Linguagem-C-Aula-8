#include <locale>


main(){
	setlocale(LC_ALL,"Portuguese");
	
	int i , numero;
	
	
	printf("digite um numero:\n");
	scanf("%i",&numero);
	
	
	for(i=1;i<=10;i++){
		
			printf("%d + %d = %d \n", numero,   i   ,numero + i);
			
	}
		printf("\n\n");
		
		for(i=1;i<=10;i++){
		
			printf("%d - %d = %d \n", numero,   i   ,numero - i);
			
	}
	
}
