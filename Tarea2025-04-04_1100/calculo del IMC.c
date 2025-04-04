#include<stdio.h>
#include<math.h>

int main()
{
    float IMC, peso, altura;
    printf("Ingrese su peso en kilos: ");
    scanf("%f", &peso);
    printf("Ingresa tu estatura en metros: ");
    scanf("%f", &altura);

    IMC=peso/pow(altura,2.0);

    if (IMC<=18.4) {
        printf("Tienes bajo tu peso");
    } else if (IMC <= 24.9) {
        printf("Tu peso es Normal");
    } else if (IMC <= 29.9) {
        printf("Tienes Sobrepeso");
    } else if (IMC <= 34.9) {
        printf("Tienes Obesidad clase 1");
    } else if (IMC <= 39.9) {
        printf("Tienes Obesidad clase 2");
    } else {
        printf("Tienes Obesidad clase 3\n");
    }
    return 0;
}

