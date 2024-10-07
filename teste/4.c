#include <stdio.h>

int main() {
    // Valores de faturamento por estado
    double SP = 67836.43;
    double RJ = 36678.66;
    double MG = 29229.88;
    double ES = 27165.48;
    double Outros = 19849.53;

    // Calculando o faturamento total
    double faturamento_total = SP + RJ + MG + ES + Outros;

    // Calculando o percentual de cada estado
    double perc_SP = (SP / faturamento_total) * 100;
    double perc_RJ = (RJ / faturamento_total) * 100;
    double perc_MG = (MG / faturamento_total) * 100;
    double perc_ES = (ES / faturamento_total) * 100;
    double perc_Outros = (Outros / faturamento_total) * 100;

    // Exibindo os resultados
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", perc_SP);
    printf("RJ: %.2f%%\n", perc_RJ);
    printf("MG: %.2f%%\n", perc_MG);
    printf("ES: %.2f%%\n", perc_ES);
    printf("Outros: %.2f%%\n", perc_Outros);

    return 0;
}
