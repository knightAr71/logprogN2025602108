#include<stdio.h>
#include<math.h>

int main ()

{
    int L=2;
    float a1,a2,a3,a4,at;
    a1=((L*3.0/2*(L))/2);//Area del triangulo grande
    a2=(1.0/4)*L*L*2;//Area del rectangulo
    a3=L*L;//Area del cuadrado
    a4=(L*L)/2;//Area trigulos pequeños
    at=a1+a2+a3+(a4*2);
    float pt,p1,p2,p3,h1,h2;
    h1=sqrt((L*L)+(L*L));//Hipotenusa de triangulo TR y TL
    h2=sqrt((L*L)+(3.0/2*L*3.0*L));//Hipotenusa de TS
    p1=h1+L;//Perimetro TR y TL
    p2=h2+(3.0/2*L);//Perimetro de TS
    p3=2*((3.0/4*L))+(2*L);//Perimetro rectangulo
    pt=p1+p2+p3;

    printf("Area total: %.4f\n",at);
    printf("Perimetro total %.4f\n",pt);
    printf("Area del tringulo grande es %.4f\n",a1);
    return 0;
}
