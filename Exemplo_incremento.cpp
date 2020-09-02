#include <stdio.h>
#include <locale>


main(){
	setlocale(LC_ALL,"Portuguese");
	
	
	int x = 0 , y = 1 , w = 0 , z = 1;
	
	x++; // pos incremento
	y--; // pos decremento
	
	printf("pos incremento x = %d  pos incremento y = %d \n\n",x,y);
	
	++w; // pre incremento
	--z; // pre decremento
	
	printf("pre incremento w = %d pre decremento z = %d \n\n",w,z);
	
}
