 #include <stdio.h>
 /* Conflicto de variables con el mismo nombre. */
 void f1(void);            /* Prototipo de funci�n. */
 int K = 5;               /* Variable global. */
 void main (void)
 {
 int I;
 for (I = 1; I <= 3; I++)
    f1();
 }
 void f1(void)
  /* La funci�n utiliza tanto la variable local I como la variable global I. */
{
    int localK = 2;         // Variable local
    localK += localK;
    printf("\n\nEl valor de la variable local es: %d", localK);
    K = K + localK;         // Se accede a la global sin problema
    printf("\nEl valor de la variable global es: %d", K);

}
