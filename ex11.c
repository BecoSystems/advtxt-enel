#include <stdio.h>
#include <string.h>
#include "ex11.h"

int main() {
    char objeto[50];
    char acao[50];

    printf("Você está em uma floresta sombria e encontra um inimigo.\n");
    printf("Escolha um objeto para usar: ");
    scanf("%49s", objeto);

    printf("Escolha uma ação a realizar: ");
    scanf("%49s", acao);

    verificar_escolhas(objeto, acao);

    return 0;
}

void verificar_escolhas(const char *objeto, const char *acao) {
    if (strcmp(objeto, "espada") == 0 && strcmp(acao, "lutar") == 0) {
        printf("Você empunha sua espada e derrota o inimigo! Vitória!\n");
    } else {
        printf("Você falha em sua tentativa e é derrotado. Fim de jogo.\n");
    }
}
