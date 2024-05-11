#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int corredor[25] = {0};
int janela[25] = {0};
int i = 0, j = 0;

void verificartudo() {
    printf("\nDisponível (ÔNIBUS) = ");
    printf("\nDisponível (CORREDOR) -> ");
    for (i = 1; i <= 24; i++) {
        if (corredor[i] == 0) {
            printf("%d; ", i);
        }
    }
    printf("\nDisponível (JANELA) -> ");
    for (j = 1; j <= 24; j++) {
        if (janela[j] == 0) {
            printf("%d; ", j);
        }
    }
}

void verificarcorredor() {
    printf("\nDisponível (CORREDOR) -> ");
    for (i = 1; i <= 24; i++) {
        if (corredor[i] == 0) {
            printf("%d; ", i);
        }
    }
}

void verificarjanela() {
    printf("\nDisponível (JANELA) -> ");
    for (j = 1; j <= 24; j++) {
        if (janela[j] == 0) {
            printf("%d; ", j);
        }
    }
}

void venderPassagem(int poltrona, int tipo) {
    if (tipo == 1) {
        if (corredor[poltrona] == 'X') {
            printf("\nPoltrona já vendida.\n");
        } else {
            corredor[poltrona] = 'X'; // Coloca 'X' na poltrona vendida
            printf("\nPassagem vendida com sucesso!\n");
        }
    } else {
        if (janela[poltrona] == 'X') {
            printf("\nPoltrona já vendida.\n");
        } else {
            janela[poltrona] = 'X'; // Coloca 'X' na poltrona vendida
            printf("\nPassagem vendida com sucesso!\n");
        }
    }
}

void cancelarpassagem(int poltrona, int tipo){
    if (tipo == 1) {
        if (corredor[poltrona] == 0) {
            printf("\nPoltrona não vendida.\n");
        } else {
            corredor[poltrona] = 0;
            printf("\nPassagem cancelada com sucesso!\n");
        }
    } else {
        if (janela[poltrona] == 0) {
            printf("\nPoltrona não vendida.\n");
        } else {
            janela[poltrona] = 0;
            printf("\nPassagem cancelada com sucesso!\n");
        }
    }
}


int main() {
    setlocale(LC_ALL, "Portuguese");
   
    
    int poltronas, escolha, poltrona;
    
    while (1) {
        printf("\n-------------------------------------------\nDigite (1) para ver poltronas no corredor.");
        printf("\nDigite (2) para ver poltronas na janela.");
        printf("\nDigite (3) para ver todas poltronas.");
        printf("\nDigite (4) para comprar passagem.");
        printf("\nDigite (5) para cancelar passagem.");
		printf("\nDigite (0) para sair. \n-------------------------------------------> ");
        
        if (scanf("%d", &escolha) != 1) { 
            printf("Entrada inválida. Por favor, insira um número válido.\n");
            while (getchar() != '\n'); // Limpa o buffer do teclado
            continue;
        }
        
        switch (escolha) {
            case 1:
                verificarcorredor();
                break;
            case 2:
                verificarjanela();
                break;
            case 3:
                verificartudo();
                break;
            case 4:
                printf("Digite o número da poltrona: ");
                scanf("%d", &poltrona);
                printf("Digite 1 para corredor ou 2 para janela: ");
                scanf("%d", &poltronas);
                venderPassagem(poltrona, poltronas);
                break;
            case 5:
                printf("Digite o número da poltrona: ");
                scanf("%d", &poltrona);
                printf("Digite 1 para corredor ou 2 para janela: ");
                scanf("%d", &poltronas);
                cancelarpassagem(poltrona, poltronas);
                break;
			case 0:
                printf("\nSaindo do programa...\n");
                return 0;
            default:
                printf("\nOpção inválida. Por favor, tente novamente.\n");
                break;
        }
    }

    return 0;
}

