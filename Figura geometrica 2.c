#include<stdio.h>
#include<math.h>
int main()

{
    int L=7;
    float pt=(23.0/5*L)+((3.1416*7)/2);
    float at,a1,a2,a3;
    a1=L*L;
    a2=(1.0/5*L)*(3/5*L);
    a3=(1.0/5*L)*(1/5*L);
    at=a1+a2+2*a3+pow(((3.1416*(L/2))/2),2);

    printf("Perimetro total es: %.4f\n",pt);
    printf("Area total es: %.4f\n",at);

    return 0;
}
