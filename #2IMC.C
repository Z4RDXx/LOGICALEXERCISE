#include <stdio.h>

int main(int argc, char const *argv[])
{
    float peso, altura, IMC;
    printf("qual o seu peso?: ");
    scanf("%f", &peso);
    printf("qual a sua altura?: ");
    scanf("%f", &altura);
    IMC = peso/(altura*altura);
    /*altura x altura % peso*/
    if (IMC <=18.5)
    {
        printf("Abaixo do peso ideal \n");

    }
    else if (IMC <= 24.9)
    {
        printf("Peso ideal \n");
        
    }

      else if (IMC <= 29.9)
    {
        printf("Acima do peso\n");
    }

    else
    {
    printf("Cuidado você esta obeso\n");
    }
    printf("Peso: %.2f| Altura: %.2f| IMC: %.2f", peso, altura, IMC);


    return 0;
}



