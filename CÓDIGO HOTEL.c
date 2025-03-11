#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int serviço, Checkin, opção, horario, pedidos, salgados, bebidas, lanche;
    char nome[15], local[20], telefone[14], rg[16], sobrenome[20], cpf[17];

    printf("Seja bem vindo(a) ao Hotel Amparo. Vamos começar a fazer o Checkin! Digite '1' para começar:\n");
    scanf("%d",&Checkin);
    if (Checkin == 1) {
        printf("Informe seu nome:\n");
        scanf("%s", nome);
    } else {
        printf("Opção inválida");
        return 1; // Sai do programa se a opção for inválida
    }

    printf("Informe seu sobrenome\n");
    scanf("%s", sobrenome);
    printf("Informe o número do RG\n");
    scanf("%s", rg);
    printf("Informe o seu CPF\n");
    scanf("%s", cpf);
    printf("Informe seu número de telefone.\n");
    scanf("%s", telefone);

    printf("Parabéns! Você realizou o Checkin! Selecione a opção desejada (1-2)\n");
    printf("1 - Chamar serviço de quarto\n");
    printf("2 - Fazer Pedido\n");
    scanf("%d", &opção); // Aqui, agora estamos pegando a opção corretamente

    switch (opção) {

        case 1:
            printf("Você selecionou o serviço de quarto\n");
            printf("1 - Limpeza\n");
            printf("2 - Troca de toalhas\n");
            printf("3 - Troca de roupa de cama\n");
            printf("4 - Manutenção\n");
            scanf("%d", &serviço);

            switch (serviço) {
                case 1:
                case 2:
                case 3:
                case 4:
                    printf("Agende o melhor período para você. Digite 1 - Manhã e 2 - Tarde.\n");
                    scanf("%d", &horario);
                    if (horario == 1) {
                        printf("O serviço será realizado no período da Manhã.\n");
                    } else {
                        printf("O serviço será realizado no período da Tarde.\n");
                    }
                    break;

                default:
                    printf("Opção inválida.\n");
            }
            break; // Aqui impede que o programa continue para case 2

        case 2:
            printf("Selecione o seu pedido\n");
            printf("1 - Salgados\n");
            printf("2 - Bebidas\n");
            printf("3 - Lanches\n");
            scanf("%d", &pedidos);

            switch (pedidos) {
                case 1:
                    printf("Selecione o salgado desejado.\n");
                    printf("1 - Coxinha\n");
                    printf("2 - Croquete\n");
                    printf("3 - Salgado Assado de Frango\n");
                    scanf("%d", &salgados);

                    switch (salgados) {
                        case 1:
                        case 2:
                        case 3:
                            printf("Em breve o garçom levará o pedido para você.\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                case 2:
                    printf("Selecione a bebida desejada.\n");
                    printf("1 - Coca-Cola\n");
                    printf("2 - Água\n");
                    printf("3 - Suco natural de laranja\n");
                    scanf("%d", &bebidas);

                    switch (bebidas) {
                        case 1:
                        case 2:
                        case 3:
                            printf("Em breve o garçom levará a bebida para você.\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                case 3:
                    printf("Selecione o lanche desejado.\n");
                    printf("1 - X-tudo\n");
                    printf("2 - X-bacon\n");
                    printf("3 - X-frango\n");
                    scanf("%d", &lanche);

                    switch (lanche) {
                        case 1:
                        case 2:
                        case 3:
                            printf("Em breve o garçom levará o lanche para você.\n");
                            break;
                        default:
                            printf("Opção inválida.\n");
                    }
                    break;

                default:
                    printf("Opção inválida.\n");
            }
            break;

        default:
            printf("Opção inválida. Programa encerrado.\n");
            return 1;
    }

    return 0;
}
