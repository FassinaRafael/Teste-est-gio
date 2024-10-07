#include <stdio.h>

int pertenceFibonacci(int num); //Declarando a função

int main() {
    int numero;

    // Solicita que o usuário informe o número
    printf("Informe um número: ");
    scanf("%d", &numero);

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) 
    {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else 
    {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}

int pertenceFibonacci(int num) {
    int a = 0, b = 1, prox = 0;

    // Se o número for 0 ou 1, já pertence à sequência
    if (num == 0 || num == 1) 
    {
        return 1;
    }

    // Gera a sequência de Fibonacci até o número ser igual ou maior ao valor informado
    while (prox < num) 
    {
        prox = a + b;
        a = b;
        b = prox;
    }

    // Verifica se o número informado é igual a algum número da sequência
    if (prox == num)
    {
        return 1; // Pertence
    }
    return 0; // Não pertence
}