#include <stdio.h>

// coloquei um contador de movimento por que eu tava esquecendo quantas vezes moveu
int movetorre = 0, movebispo = 0, moverainha = 0, movecavalo = 0;

void menu() {
    //reutilizei o menu do carta trunfo e dei uma adaptada
    int opcao, direcao, vezes;
    int repetir = 1;

    while (repetir) {
        // escolher qual peça mover
        printf("\nQual peça você deseja mover?\n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // escolher quantas vezes a peça ira se mover
        printf("Quantas vezes deseja mover? ");
        scanf("%d", &vezes);

        switch (opcao) {
            case 1: // Mover a Torre para a direçao X
                printf("Qual direção você deseja mover a Torre?\n");
                printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
                printf("Escolha a direção: ");
                scanf("%d", &direcao);

                for (int i = 0; i < vezes; i++) {
                    movetorre++;
                    // escolher para qual lado a Torre ira se mover
                    switch (direcao) {
                        //conceito e o mesmo do menu so que ao inves de repetir varias vezes com o while ou for, ja vai puxar as informaçoes assim que escolher o case
                        case 1: printf("Torre moveu para Cima (%d)\n", movetorre); break;
                        case 2: printf("Torre moveu para Baixo (%d)\n", movetorre); break;
                        case 3: printf("Torre moveu para Esquerda (%d)\n", movetorre); break;
                        case 4: printf("Torre moveu para Direita (%d)\n", movetorre); break;
                        default: printf("Direção inválida para Torre.\n"); i = vezes; break;
                    }
                }
                break;

            case 2: // // Mover o Bispo para a direçao X
                printf("Qual direção você deseja mover o Bispo?\n");
                printf("1 - Cima/Esquerda\n2 - Cima/Direita\n3 - Baixo/Esquerda\n4 - Baixo/Direita\n");
                printf("Escolha a direção: ");
                scanf("%d", &direcao);

                for (int i = 0; i < vezes; i++) {
                    movebispo++;
                    // escolher para qual lado o Bispo ira se mover
                    switch (direcao) {
                        case 1: printf("Bispo moveu para Cima/Esquerda (%d)\n", movebispo); break;
                        case 2: printf("Bispo moveu para Cima/Direita (%d)\n", movebispo); break;
                        case 3: printf("Bispo moveu para Baixo/Esquerda (%d)\n", movebispo); break;
                        case 4: printf("Bispo moveu para Baixo/Direita (%d)\n", movebispo); break;
                        default: printf("Direção inválida para Bispo.\n"); i = vezes; break;
                    }
                }
                break;

            case 3: // // Mover a Rainha para a direçao X
                printf("Qual direção você deseja mover a Rainha?\n");
                printf("1 - Cima\n2 - Baixo\n3 - Esquerda\n4 - Direita\n");
                printf("5 - Cima/Esquerda\n6 - Cima/Direita\n7 - Baixo/Esquerda\n8 - Baixo/Direita\n");
                printf("Escolha a direção: ");
                scanf("%d", &direcao);

                for (int i = 0; i < vezes; i++) {
                    moverainha++;
                    // escolher para qual lado a Rainha ira se mover
                    switch (direcao) {
                        case 1: printf("Rainha moveu para Cima (%d)\n", moverainha); break;
                        case 2: printf("Rainha moveu para Baixo (%d)\n", moverainha); break;
                        case 3: printf("Rainha moveu para Esquerda (%d)\n", moverainha); break;
                        case 4: printf("Rainha moveu para Direita (%d)\n", moverainha); break;
                        case 5: printf("Rainha moveu para Cima/Esquerda (%d)\n", moverainha); break;
                        case 6: printf("Rainha moveu para Cima/Direita (%d)\n", moverainha); break;
                        case 7: printf("Rainha moveu para Baixo/Esquerda (%d)\n", moverainha); break;
                        case 8: printf("Rainha moveu para Baixo/Direita (%d)\n", moverainha); break;
                        default: printf("Direção inválida para Rainha.\n"); i = vezes; break;
                    }
                }
                break;

            case 4: // // Mover o Cavalo para a direçao X
                printf("Qual direção você deseja mover o Cavalo?\n");
                printf("1 - L para Cima/Direita\n2 - L para Cima/Esquerda\n");
                printf("3 - L para Baixo/Direita\n4 - L para Baixo/Esquerda\n");
                printf("Escolha a direção: ");
                scanf("%d", &direcao);

                for (int i = 0; i < vezes; i++) {
                    movecavalo++;
                    // escolher para qual lado o Cavalo ira se mover
                    switch (direcao) {
                        case 1: printf("Cavalo moveu em L para Cima/Direita (%d)\n", movecavalo); break;
                        case 2: printf("Cavalo moveu em L para Cima/Esquerda (%d)\n", movecavalo); break;
                        case 3: printf("Cavalo moveu em L para Baixo/Direita (%d)\n", movecavalo); break;
                        case 4: printf("Cavalo moveu em L para Baixo/Esquerda (%d)\n", movecavalo); break;
                        default: printf("Direção inválida para Cavalo.\n"); i = vezes; break;
                    }
                }
                break;
                
            case 0:
            printf("Saindo do menu...\n");
            repetir = 0;
            break;

            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }
}

int main() {
    menu();
    return 0;
    //consideracoes finais: eu queria muito fazer o tabuleiro so que dai eu percebi que eu iria ter que criar o tabuleiro
    //eu ia ter que declarar 8 variaveis horizontal e 8 vertical( DEZESEIS VARIAVEIS ), eu teria que declarar com valores de 1-8 e 9-16 cada uma
    //e toda vez que eu fosse mover a peça eu teria que colocar algo para comparar pra que não fosse abaixo de 0, acima de 8, antes de A ou depois de H
    //dai me desanimo
}
