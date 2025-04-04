#include <stdio.h>

int main() {
    int Tipo, Ingrediente;

    printf("Bienvenidos a la pizzeria Bella Napolli\n. Que pizza quieres?\n. 1=vegetariana\n. 2=no vegetariana\n. ");
    scanf("%d", &Tipo);

    if (Tipo == 1) {
        printf("Ingredientes vegetarianos: \n. 1=Pimiento\n. 2=Tofu\n. ");
        scanf("%d", &Ingrediente);

        switch (Ingrediente) {
            case 1: printf("Tu pizza es vegetariana y lleva Pimiento.\n"); break;
            case 2: printf("Tu pizza es vegetariana y lleva Tofu.\n"); break;
            default: printf("Ingrediente inválido\n");
        }
    } else if (Tipo == 2) {
        printf("Ingredientes no vegetarianos: \n. 1=Peperoni\n. 2=Jamon\n. 3=Salmon\n. ");
        scanf("%d", &Ingrediente);

        switch (Ingrediente) {
            case 1: printf("Tu pizza es no vegetariana y lleva Peperoni.\n"); break;
            case 2: printf("Tu pizza es no vegetariana y lleva Jamon.\n"); break;
            case 3: printf("Tu pizza es no vegetariana y lleva Salmon.\n"); break;
            default: printf("Ingrediente inválido\n");
        }
    } else {
        printf("Opción inválida.\n");
    }

    return 0;
}
