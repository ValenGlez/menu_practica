/*
Escribe un programa en C++ que realice un menú, dentro de las opciones:
1- El primer enunciado
2 - El segundo enunciado
3 - El siguiente enunciado
4 - Salir del programa
*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main (){

int opcion;

printf ("Ingrese el numero 1 para ver la tabla de multiplicaciones de un numero.\n");
printf ("Ingrese el numero 2 para ver si un numero ingresado es primo o no lo es.\n");
printf ("Ingrese el numero 3 para ver el enunciado 3.\n");
printf ("Ingrese el numero 4 si desea salir de el programa.\n");
scanf (" %d", &opcion);

if (opcion <= 0 || opcion > 4){
    printf ("Numero ingresado no valido.\n");
}

if (opcion == 1){
    int numero;
    int limite;

    printf ("Ingrese un numero positivo para ver su tabla de multiplicacion.\n");
    scanf (" %d", &numero);
    printf ("Ahora ingrese el limite de la tabla de multiplicacion.\n");
    scanf (" %d", &limite);

    printf ("La tabla de el numero %d hasta %d es:\n", numero, limite);

    for (int i = 1; i <= limite ;i++){
        printf ("%d * %d = %d\n", numero, i, numero * i);
    }
    return 0;
}

if (opcion == 2){


    int numero;
    int contador = 0;

    printf ("Ingrese un numero natural para verificar si es primo o no.\n");
    scanf (" %d", &numero);

    if (numero < 1){
        printf ("El numero ingresado debe ser natural.\n");
    }

    for (int i = 1; i <= numero; i++){
        if ((numero%i) == 0){
            contador++;
        }
    }
    if (contador == 2){
        printf ("El numero es primo.\n");
    }

    else if (contador != 2){
        printf ("El numero NO es primo\n");
    }

    return 0;
}
if (opcion == 3){

    int seleccion;
    char cadena[100];

    printf ("Ingrese una cadena de hasta 100 caracteres.\n");
    scanf (" %s", cadena);
    printf ("Con el numero 1 podra ver en pantalla la longitud de la cadena ingresada.\n");
    printf ("Con el numero 2 podra ver en pantalla la cadena de caracteres invertida.\n");
    printf ("Con el numero 3 debera ingresar una nueva cadena de caracteres para concatenarla con la anteriopr y poder verla.\n");
    printf ("Con el numero 4 tambien debera ingresar una nueva cadena de caracteres pero esta se copiara arriba de la anterior y lo vera en pantalla.\n");
    scanf (" %d", &seleccion);

    switch (seleccion){

    case 1:{

        int longitud = strlen(cadena);
        printf ("La longitud de la cadena de caracteres ingresada es de %d caracteres.\n", longitud);

    break;
    }

    case 2:{

    printf ("La cadena de caracteres invertida seria:\n");
    for (int i = strlen(cadena) - 1; i >= 0; --i){
        printf ("%c", cadena[i]);
    }

    break;
    }

    case 3:{

    char cadenanueva3[100];

    printf ("Ingrese una nueva cadena de caracteres para concatenarla con la anterior.\n");

    scanf (" %s", cadenanueva3);

    strcat (cadena, cadenanueva3);
    printf ("Las cadenas de caracteres concatenadas se verian asi:\n%s", cadena);

    break;
    }

    case 4:{

    char cadenanueva4[100];
    printf ("Ingrese una nueva cadena de caracteres para copiarla arriba de la anterior.\n");
    scanf (" %s", cadenanueva4);

    strcpy (cadena, cadenanueva4);

    printf ("La cadena de caracteres copiada seria la siguiente:\n%s", cadena);

    break;
    }

    default:
    printf ("Numero ingresado no valido.\n");


    return 0;
    }



    return 0;
}

if (opcion == 4) {

    const char* nombre_creador = "Valentino Gonzalez";

    printf ("Gracias por utilizar el programa creado por %s.\n\n", nombre_creador);
    getchar();
    printf ("Pulse cualquier tecla para terminar el proceso...");

    return 0;
}




























return 0;
}
