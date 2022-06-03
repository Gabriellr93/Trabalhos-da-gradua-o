#include <stdio.h>
#include <stdlib.h>

#define tamanho 5

typedef struct tipo_pilha {
	int dados[tamanho];
	int inicio;
	int topo;
}tipo_pilha;

tipo_pilha pilha1;
tipo_pilha pilha2;

void empilha (int prato){
	if(pilha1.topo == tamanho){
		printf("Pilha Cheia!\n");
		system("pause");
	}
	else{
		pilha1.dados[pilha1.topo] = prato;
		pilha1.topo++;
	}
}

int desempilha1 (){
	int prato;
	int prato2;
	
	if(pilha1.topo == pilha1.inicio){
		printf("Pilha Vazia!\n");
		system("pause");
	}
	else{
		pilha1.topo--;
		prato = pilha1.dados[pilha1.topo];
							
			if(pilha2.topo == tamanho){
				printf("Pilha Cheia!\n");
				system("pause");
			}
			else{
				pilha2.dados[pilha2.topo] = prato;
				pilha2.topo++;
			}
			
		return prato;			
	}
}

int desempilha2 (){
	int prato;
	
	if(pilha2.topo == pilha2.inicio){
		printf("Pilha Vazia!\n");
		system("pause");
	}
	else{
		pilha2.topo--;
		prato = pilha2.dados[pilha2.topo];
		return prato;
	}
}

int main(int argc, char *argv[]) {
	pilha1.topo = 0;
	pilha1.inicio = 0;
	pilha2.topo = 0;
	pilha2.inicio = 0;
	int aux, decisao;
	
	printf("Bem vindo ao sistema empilhador de pratos!\nGabriel Luiz Ribeiro	RA 1704270-5\n\n");
	printf("Temos as seguintes cores de pratos:\n\nVermelho = 1\nVerde = 2\nAzul = 3\nBranco = 4\nLaranja = 5\n\nPara empilhar os pratos aperte 1 ou qualquer outra tecla para sair.\n");
	scanf("%d", &decisao);
	
	if(decisao == 1) {
		
		printf("Empilhando o prato Vermelho (1)\n");
		empilha(1);
		printf("Empilhando o prato Verde (2)\n");
		empilha(2);
		printf("Empilhando o prato Azul (3)\n");
		empilha(3);
		printf("Empilhando o prato Branco (4)\n");
		empilha(4);
		printf("Empilhando o prato Laranja (5)\n");
		empilha(5);
	
		printf("\nDeseja desempilhar os pratos da pilha 1 e empilhar na pilha 2?\nDigite 1 para Sim ou qualquer outra tecla para sair.\n");
		scanf("%d", &decisao);
		
		if(decisao == 1) {
			aux = 0;
			
			for(aux=0; aux <= 4; aux++) {
				printf("Desempilhou o prato %d da pilha 1 e empilhou na pilha 2.\n", desempilha1());
			}
			
			printf("\nDeseja desempilhar os pratos da pilha a 2?\nDigite 1 para Sim ou qualquer outra tecla para sair.\n");
			scanf("%d", &decisao);
			
			if(decisao == 1) {
				aux = 0;
			
				for(aux=0; aux <= 4; aux++) {
					printf("Desempilhou o prato %d da pilha 2 \n", desempilha2());
				}
			}
			else{
			}		
		}
		else{		
		}		
	}		
	else{
		system ("pause");
	}
	
	return 0;
}
