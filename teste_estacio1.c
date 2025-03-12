#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu principal\n");
    printf("\n");

    printf("Escolha uma opção: ");
    printf("\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair do jogo\n");
    printf("\n");
    printf("Escolha uma opção: ");
    printf("\n");

    scanf("%d", &opcao);

    switch (opcao){
        case 1: 
          srand(time(0));
          numeroSecreto = rand() % 10;

          printf("Digite um número de 0 a 9: ");
          scanf("%d", &palpite);

          if (palpite == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
          } else {
            printf("Que pena! Você errou o número secreto. Tente novamente!\n");
            printf("O número secreto era: %d\n", numeroSecreto);
          }
          
        break;
        case 2: 
          printf("---  Regras  ---\n");
          printf("\n");
          printf("1. Não nos responsabilizamos pela perca de dinheiro do usuário, assim como, eventualmente, o vício do mesmo. Este é apenas um jogo feito para diversão, sem o intuito de viciar.\n");
          printf("2. Jogo proibido para menores de 18 anos, se for o seu caso, recomendamos que não jogue este jogo.\n");
          printf("3. Qualquer valor de depósito que seja feito, caso solicitado o reembolso, a estimativa de prazo para realização do reembolso é de 30 dias.\n");
          printf("4. Caso acerte o número secreto, envie para o endereço de e-mail (jogo.numeroSecreto@gmail.com) como forma de provar que acertou e quer o prêmio, caso contrário, não o receberá.\n");
          printf("\n");
          printf("Desejamos um ótimo jogo para você e uma boa diversão!\n");
          printf("NumerosSecretos@empress.\n");
        break;
        case 3: 
          printf("Saindo do jogo...\n");
        break;
        default:
          printf("Opção inválida!\n");
        break;
    }

}