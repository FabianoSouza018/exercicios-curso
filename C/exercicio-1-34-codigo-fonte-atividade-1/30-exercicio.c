#include <stdio.h>

int main() {

    //declaração das variaveis
    int SalarioBruto;
    float INSS, IRPF;
    float PercentualINSS, PercentualIRPF;
    float SalarioLiq, BaseIRPF;
    float DescINSS, DescIRPF;

    //dados entrada
    printf("Digite salario bruto.: ");
    scanf("%d", &SalarioBruto);

    printf("Digite percetual INSS.: ");
    scanf("%f", &PercentualINSS);

    printf("Percetual IRPF.: ");
    scanf("%f", &PercentualIRPF);

    //processamento
    DescINSS = PercentualINSS / 100.0;
    DescIRPF = PercentualIRPF / 100.0;

    INSS = SalarioBruto * DescINSS;
    BaseIRPF = SalarioBruto - INSS;
    IRPF = BaseIRPF * DescIRPF;
    SalarioLiq = SalarioBruto - (INSS + IRPF);

    //saida
    printf("\nSalario Liquido final\n\n");
    printf("INSS.: %6.2f\n", INSS);
    printf("Base IRPF.: %6.2f\n", BaseIRPF);
    printf("IRPF.: %6.2f\n", IRPF);
    printf("Sal. Liq.: %6.2f\n", SalarioLiq);

    return 0;

}