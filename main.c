#include <stdio.h>
#include <stdlib.h>

//'-----------------/*
///'    Archivos     |
//'-----------------/*

int main()
{

    ///'--------------------/*
    ///'Creacion de Archivos|
    ///'--------------------/*

    FILE * archivo1 = fopen("nombres.txt", "a"); /// "w" -> write, crea el archivo si no existe.
    FILE * archivo2 = fopen("edades.txt", "w"); ///  "a" -> No sobreescribe los datos del archivo, no crea el archivo si no existe.
    FILE * archivo3 = fopen("juegos.txt", "r");///   "r" -> Lectura del archivo.

    ///'---------------------/*
    ///'Escritura de Archivos|
    ///'---------------------/*
    fprintf(archivo1, "Luciano Martin Perez");
    fprintf(archivo2, "19 años");
    fprintf(archivo3, "Minecraft\n");
    fprintf(archivo3, "CSGO\n");
    fprintf(archivo3, "League of Legends\n");

    ///'-------------------------/*
    ///'Bucle Lectura de Archivos|
    ///'-------------------------/*

    while ( !feof(archivo3)){ ///Mientras el archivo no termine, hacer...
        char info[200] = ""; /// Inicializamos
        fgets(info,200,archivo3); /// A diferencia del fprintf, se aclara el archivo al final de la funcion. (var, caracteres ,archivo).
        printf("\n%s", info); ///Imprimimos la informacion
    };

    ///'------------------/*
    ///'Cierre de Archivos|
    ///'------------------/*
    fclose(archivo1); ///Cerramos archivo1
    fclose(archivo2); ///Cerramos archivo2
    fclose(archivo3); ///Cerramos archivo3
    return 0;
}
