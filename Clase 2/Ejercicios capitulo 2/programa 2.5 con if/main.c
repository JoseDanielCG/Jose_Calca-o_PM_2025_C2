#include <stdio.h>
#include <math.h>

/* Funci�n matem�tica.
   El programa obtiene el resultado de una funci�n.

   OP y T: Variables de tipo entero.
   RES: Variable de tipo real.
*/

int main(void)
{
    int OP, T;
    float RES;

    printf("\nIngrese la opci�on del calculo y el valor entero: ");
    scanf("%d %d", &OP, &T);

    if (OP == 1)
        RES = T / 5.0;  // Divisi�n entre enteros puede causar truncamiento, mejor dividir por 5.0
    else if (OP == 2)
        RES = pow(T, T);  // potencia T^T
    else if (OP == 3 || OP == 4)
        RES = 6 * T / 2.0;
    else
        RES = 1;

    printf("\nResultado: %7.2f\n", RES);
    return 0;
}
