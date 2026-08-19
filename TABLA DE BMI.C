#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("CALCULA TU INDICE CORPORAL\n\n");

    printf("Altura en metros: ");
    scanf("%f", &altura);

    printf("Peso en kg: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("\nIndice | Condicion\n");
    printf("-----------------------------\n");
    printf("<18.5 | Bajo peso\n");
    printf("18.5 a 24.9 | Normal\n");
    printf("25.0 a 29.9 | Sobrepeso\n");
    printf(">=30 | Obesidad\n");

    printf("\nSu indice corporal es de %.3f\n", imc);

    if (imc < 18.5) {
        printf("Usted se encuentra en la condicion: Bajo peso\n");
    }
    else if (imc <= 24.9) {
        printf("Usted se encuentra en la condicion: Normal\n");
    }
    else if (imc <= 29.9) {
        printf("Usted se encuentra en la condicion: Sobrepeso\n");
    }
    else {
        printf("Usted se encuentra en la condicion: Obesidad\n");
    }

    return 0;
}
