// Resolvido por: Joaquim R. Debiasi e Pedro Molinaro
#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a < b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", b - a);
    }
    if (a == b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }
    if (a > b)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b);
    }
    return 0;
}
