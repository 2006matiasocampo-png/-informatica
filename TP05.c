#include <stdio.h>

char cal(int nota){
	
	if(nota >= 90){
		return 'A';
	}
	else if (nota >= 80){
		return 'B';
	}
	else if (nota >= 70){
		return 'C';
	}
	else if (nota >= 60){
		return 'D';
	}
	else {
		return 'F';
	}
	
}
	
	int main(){
		int examen;
		char resultado;
		
		do {
			printf("Cargue su nota: ");
			scanf("%d", &examen);
			
			if(examen < 0){
				printf("Error: no se permiten numeros negativos.\n");
			}
			
		} while(examen < 0);
		
		resultado = cal(examen);
		
		printf("Su calificacion es %c\n", resultado);
		
		return 0;
	}
