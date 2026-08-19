#include <stdio.h>

int main() {
	int cantidad;
	int nota;
	int suma = 0;
	int mayor;
	int menor;
	float promedio;
	
	do {
		printf("Ingrese la cantidad de estudiantes: ");
		scanf("%d", &cantidad);
		
		if (cantidad <= 0) {
			printf("Error: ingrese un numero positivo.\n");
		}
		
	} while (cantidad <= 0);
	
	for (int i = 0; i < cantidad; i++) {
		
		do {
			printf("Ingrese la nota: ");
			scanf("%d", &nota);
			
			if (nota < 0) {
				printf("Error: no se permiten numeros negativos.\n");
			}
			
			if (nota > 100) {
				printf("Error: la nota no puede ser mayor a 100.\n");
			}
			
		} while (nota < 0);
		
		while (nota > 100) {
			printf("Ingrese la nota nuevamente: ");
			scanf("%d", &nota);
			
			if (nota > 100) {
				printf("Error: la nota no puede ser mayor a 100.\n");
			}
		}
		
		suma = suma + nota;
		
		if (i == 0) {
			mayor = nota;
			menor = nota;
		}
		
		if (nota > mayor) {
			mayor = nota;
		}
		
		if (nota < menor) {
			menor = nota;
		}
	}
	
	promedio = (float)suma / cantidad;
	
	printf("\nPromedio: %.2f\n", promedio);
	printf("Nota mas alta: %d\n", mayor);
	printf("Nota mas baja: %d\n", menor);
	
	return 0;
}
