/*  This program will count the words given by the user.
 *
 *
 *  Alejandro Ramírez Michel
 *  18 de octubre de 2018
 *
 * */

#include <stdio.h>
#include <string.h>


int main() {
    //defino variables
    char palabras [200];
    int words = 1; //empieza en 1 porque no cuenta la primer palabra porque no hay espacio
    int contador = 0;

    //le pido a usuario que escriba
    printf("Write anything you want: ");
    fgets(palabras, sizeof(palabras), stdin);

    //imprimo lo que el usuario escribió
    printf("You said: %s", palabras);

    //establezco condición para contar
    while (palabras[contador] != '\0') { // mientras las palabras escritas no sean 0...
        contador++;
        if (palabras[contador] == ' ') { // si las palabras en el contador tienen espacio, sumar "words"
        words++;
        }
    }

    //imprimo el resultado
    printf("You wrote %i letters.", words);







    return 0;
}