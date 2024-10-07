#include <stdio.h>
#include <string.h>

void inverter_string(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;

    // Invertendo os caracteres da string
    while (inicio < fim) 
    {
        // Troca os caracteres nas posições 'inicio' e 'fim'
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;

        // Avança para as posições seguintes
        inicio++;
        fim--;
    }
}

int main() {
    char str[100];

    // Solicita ao usuário a string a ser invertida
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);  // Usando fgets para ler a string com espaços

    // Remover o caractere de nova linha que pode ser lido pelo fgets
    str[strcspn(str, "\n")] = 0;

    // Inverter a string
    inverter_string(str);

    // Exibir a string invertida
    printf("String invertida: %s\n", str);

    return 0;
}
