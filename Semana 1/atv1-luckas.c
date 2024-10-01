//programa que retorna a idade de acordo com o ano de nascimento informado pelo usuario//
#include <stdio.h>

int main(){

    int anoatual = 2024, anodnascimento, idade;

    printf("Escreva o seu ano de nascimento: \n");
    scanf("%d", &anodnascimento);

    idade = anoatual - anodnascimento;

    printf("Vc tem %d anos", idade);

        
    return 0;
}
