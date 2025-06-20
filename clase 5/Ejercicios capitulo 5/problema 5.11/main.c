 #include <stdio.h>
 /* Búsqueda binaria. */
 const  int  MAX=100;
 void Lectura(int*,  int);                                    /* Prototipos de funciones. */
 int  Binaria(int *, int, int);
 void main(void)
 {
 int RES, ELE, TAM, VEC[MAX];
 do
 {
 printf("Ingrese el tamano del arreglo: ");
 scanf("%d", &TAM);
 }
 while  (TAM > MAX || TAM < 1); /* Se verifica que el tamaño del arreglo sea
 ➥correcto. */
 Lectura(VEC, TAM);
 printf("\nIngrese el elemento a buscar: ");
 scanf("%d", &ELE);
 RES = Binaria(VEC, TAM, ELE);  /* Se llama a la función que busca en el
➥arreglo. */
 if (RES)
/* Si RREESS tiene un valor verdadero —diferente de 0—, se escribe la
 ➥posición en la que se encontró el elemento. */
 printf("\nEl elemento se encuentra en la posicion: %d", RES);
 else
 printf("\nEl elemento no se encuentra en el arreglo");
 }
 void Lectura(int  A[], int T)
 /* La función LLeeccttuurraa se utiliza para leer un arreglo unidimensional de TT
 ➥elementos de tipo entero. */
 {
 int  I;
 for (I=0; I<T; I++)
 {
 printf("Ingrese el elemento %d: ", I+1);
 scanf("%d", &A[I]);
 }
 }
 int Binaria(int A[], int T, int E)
 /* Esta función se utiliza para realizar una búsqueda binaria del
 ➥elemento EE en el arreglo unidimensional AA de TT elementos. Si se
 ➥encuentra el elemento, la función regresa la posición correspondiente.
 ➥En caso contrario, regresa 0. */
{
 int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;
 while  ((IZQ <= DER) && (!BAN))
 {
 CEN = (IZQ + DER) / 2;
 if (E == A[CEN])
 BAN = CEN;
 else
 if (E > A[CEN])
 IZQ = CEN + 1;
 else
 DER = CEN - 1;
 }
 return (BAN);
}
