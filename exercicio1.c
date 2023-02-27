// Escreva o seu código a seguir
#include <stdio.h>
int main()
{
    char nome[80];
    int d;
    int m;
    int a;
    int res;
    printf(O seu nome: );
    gets (nome);
    printf(Dia de nascimento: );
    scanf ("%d",&d);
    printf(Mês de nascimento: );
    scanf ("%d",&m);
    printf(Ano de nascimento: );
    scanf ("%d",&a);
    res=365*2023+ 30*2 +23 - 365*a - 30*m - d;

    printf("+-------------------+");
    printf("| Dias de vida para |");
    printf(| %3s               |\n,nome);
    printf(+-------------------+);
    printf(| %res dias de vida |);
    printf(+-------------------+);
}

