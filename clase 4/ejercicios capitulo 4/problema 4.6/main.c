#include <stdio.h>

void f1(int *);

int main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la funcion: %d", ++K);
        f1(&K);  // Llamada correcta por referencia
        printf("\nValor de K después de llamar a la funcion: %d", K);
    }
    return 0;
}

void f1(int *R)
{
    *R += *R;
}
