#include <stdio.h>

int main() {
	float peso , altura , imc ;
	
	printf("CALCULA TU INDICE CORPORAL\n");
	
	printf("altura en metros:");
	scanf("%f" , &altura);
	
	printf("peso en kg: ");
	scanf("%f" , &peso);
	
	imc = peso / (altura * altura);
	
	printf("su indice corporal es de %.3f\n " , imc);
	
	if(imc < 18){
	   
 	    printf("su peso esta por debajo del indice corporal");
	}
	  else if(imc < 24.5){
 	  
	   printf("su peso es normal, siga asi");
    }
	  else if( imc >= 30){
	   
	   printf("su peso esta por arriba de indice corporal");
	}
	  else{
		  printf("tienes obesidad");
	  }
	return 0;

}
