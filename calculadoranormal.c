#include <stdio.h>

// calculadora por: John Morales y Nathalia Maldonado

void sumar (int sumando1, int sumando2){
    int suma;
    suma = sumando1 + sumando2;
    printf("El resultado de la suma es:%d", suma);
}

void restar (int restando1, int restando2){
    int resta;
    resta = restando1 - restando2;
    printf("La resta tiene como resultado:%d", resta);
}

void multiplicar (int multiplica1, int multiplica2){
    int multiplicacion;
    multiplicacion = (multiplica1 * multiplica2);
    printf("La multiplicacion tiene como resultado:%d", multiplicacion);
}

void dividir (int dividendo, int divisor){
    float division;
    if (divisor == 0){
        printf ("El numero 0 com divisor no es valido para la operacion");
    }
    else {
        division = dividendo / divisor;
    printf ("La division tiene como resultado:%f", division); 
    }
}

int main() 
{
    int num1, num2, opcion;
    printf ("Leer numero 1:   ");
    scanf ("%d", &num1);
    printf ("Leer numero 2:   ");
    scanf ("%d", &num2);


    printf ("MENU DE OPERACIONES BASICAS\n");
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Division\n");
    printf("5.- salir\n");
    printf("escoja una opcion:\n");
    scanf ("%d", &opcion);

switch (opcion) {
case 1:
   sumar(num1, num2);
    break;
case 2:
  restar(num1, num2);
  break;
case 3:
  multiplicar(num1, num2);
  break;
case 4:
  dividir(num1, num2);
  break;
case 5:
default:
    break;
}
 
}

