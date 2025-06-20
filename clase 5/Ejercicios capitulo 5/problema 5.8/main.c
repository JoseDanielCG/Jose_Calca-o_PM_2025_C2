 #include <stdio.h>
 /* Primos.
 El programa almacena en un arreglo unidimensional los primeros 100 números
 ➥primos. */
 const int TAM = 100;

 void Imprime(int *, int);                /* Prototipos de funciones. */
 void Primo(int, int *);

 int main(void)
 {
 int P[TAM];
 int FLA, J = 2, PRI = 3;
 while (J <= TAM)
 {
 FLA = 1;
 Primo(PRI, &FLA);       /* Se llama a la función que determina si PPRRII es
➥primo. */
 if (FLA)                 /* Si FFLLAA es 11, entonces PPRRII es primo. */
 {
 P[J] = PRI;
 J++;
 }
 PRI += 2;
 }
 Imprime(P, TAM);
 }
 void Primo(int A, int *B)
 /* Esta función determina si AAes primo, en cuyo caso el valor de **BB no se
 ➥altera. */
 {
 int DI = 3;
 while (*B &&  (DI < (A / 2)))
 {
 if  ((A % DI) == 0)
 *B = 0;
 DI++;
 }
 }
 void Imprime(int Primos[], int T)
 /* Esta función imprime el arreglo unidimensional de números primos. */
 {
 int I;
 for (I=0; I<T; I++)
 printf("\nPrimos[%d]:  %d", I, Primos[I]);
 }
