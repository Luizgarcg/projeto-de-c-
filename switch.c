#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main () {
    int opcao;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Sair\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Voce escolheu iniciar um novo jogo.\n");
            break;

        case 2:
            printf("Voce escolheu carregar um jogo salvo.\n");
            break;

        case 3:
            printf("Saindo do jogo. Ate logo!\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
