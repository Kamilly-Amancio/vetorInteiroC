//VETOR

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	//Declarando um vetor do tipo inteiro
	
	int vetor[5], contador=0;
	
	for(contador=0;contador<5; contador++){
		
		printf("Digite um valor para o vetor na posição %i: ", contador);
		scanf("%i", &vetor[contador]);
	}
	
	for(contador=0; contador<5; contador ++){
		
		printf("Valor do vetor na posição %i é: %i\n", contador, vetor[contador]);
	}
}
