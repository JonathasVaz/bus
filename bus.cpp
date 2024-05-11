#include <stdio.h>

int corredor [25] = {0};
int janela [25] = {0};
int i = 0, j = 0;

void verificartudo() {
	
	printf("\nDisponivel (ONIBUS) = ");
	printf("\nDisponivel (CORREDOR) -> ");
	for (i=1; i<=24; i++){
		if (corredor[i] == 0){
			printf("%d; ", i);
		}
	}
	printf("\nDisponivel (JANELA) -> ");
	for (j=1; j<=24; j++){
	if (janela[j] == 0){
		printf("%d; ", j);
		}
	}
}

void verificarcorredor() {
	
	printf("\nDisponivel (CORREDOR) -> ");
	for (i=1; i<=24; i++){
		if (corredor[i] == 0){
			printf("%d; ", i);
		}
	}
}
void verificarjanela() {
	
	printf("\nDisponivel (JANELA) -> ");
	for (j=1; j<=24; j++){
		if (janela[j] == 0){
			printf("%d; ", j);
		}
	}
}

int main(){
	int poltronas, escolha;
	printf("Digite (1) para ver poltronas no corredor.\nDigite (2) para ver poltronas na janela.\nDigite (3) para ver todas poltronas. -> ");
  	 	scanf("%d", &escolha);	
	switch (escolha){
		case 1:
			verificarcorredor();
			break;	
	
 		case 2:
 			verificarjanela();
 			break;
 		case 3:
 			verificartudo();
 			break;
 }
 	
 	
 	
 	
}
