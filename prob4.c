#include<stdio.h>
#include<math.h>

int main()
{
    const float L =12, iva =0.16;
    float atr, arom, At, Costm, costbru, costnet, IVA, b, h;

    printf("¿Cuanto es el costo por metro cuadrado? ");
    scanf("%f", &Costm);

    h=(1.0/2)*L*2;
    b=sqrt((h*h)-(0.5*L*0.5*L));
    atr=(0.5*L*b)/2;
    arom=((b/2.0)*L);
    At=atr+arom;
    costbru=At*Costm;
    IVA=costbru*iva;
    costnet=costbru+IVA;

    printf("Tus metros cuadrados son: %.2f\n", At);
    printf("El costo bruto es: %.2f\n", costbru);
    printf("El IVA es: %.2f\n", IVA);
    printf("El costo neto es: %.2f\n", costnet);

    return 0;
}
