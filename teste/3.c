#include <stdio.h>

#define MIN 99999
#define MAX -99999 //Constantes para atribuir valores para as variáveis de faturamentos

int main() {
    // Dados de faturamento diário
    double faturamento[] = {22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 
                            42889.2258, 46251.1740, 11191.4722, 0.0, 0.0, 3847.4823, 373.7838, 
                            2659.7563, 48924.2448, 18419.2614, 0.0, 0.0, 35240.1826, 43829.1667, 
                            18235.6852, 4355.0662, 13327.1025, 0.0, 0.0, 25681.8318, 1718.1221, 
                            13220.4950, 8414.6100};
    int num_dias = sizeof(faturamento) / sizeof(faturamento[0]);

    double menor_faturamento = MIN, maior_faturamento = MAX;
    double soma_faturamento = 0.0;
    double media_mensal;
    int dias_validos = 0, dias_acima_media = 0;

    // Calculando menor, maior e soma dos faturamentos
    for (int i = 0; i < num_dias; i++) {
        if (faturamento[i] > 0) { // Ignorando dias com faturamento 0
            if (faturamento[i] < menor_faturamento) 
            {
                menor_faturamento = faturamento[i];
            }
            if (faturamento[i] > maior_faturamento) 
            {
                maior_faturamento = faturamento[i];
            }
            soma_faturamento += faturamento[i];
            dias_validos++;
        }
    }

    // Calculando a média mensal
    media_mensal = soma_faturamento / dias_validos;

    // Contando os dias acima da média
    for (int i = 0; i < num_dias; i++) 
    {
        if (faturamento[i] > media_mensal) 
        {
            dias_acima_media++;
        }
    }

    // Exibindo os resultados
    printf("Menor valor de faturamento: %.2f\n", menor_faturamento);
    printf("Maior valor de faturamento: %.2f\n", maior_faturamento);
    printf("Dias com faturamento acima da média: %d\n", dias_acima_media);

    return 0;
}
