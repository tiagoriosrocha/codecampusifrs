// Resolvido por: Joaquim R. Debiasi e Pedro Molinaro
#include <stdio.h>

int main()
{

    int codigo, quantidade;
    float pagar;
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    switch (codigo)
    {

    case 1:
        pagar = quantidade * 4;

        break;
    case 2:
        pagar = quantidade * 4.50;
        break;
    case 3:
        pagar = quantidade * 5;
        break;
    case 4:
        pagar = quantidade * 2;
        break;

    case 5:
        pagar = quantidade * 1.5;
        break;
    }
    printf("Total: R$ %.2f\n", pagar);

    return 0;
}
