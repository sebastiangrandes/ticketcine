#include <stdio.h>
#include "funciones.h"
#include <string.h>

void ingresarCliente(char clientes[][2][40]) {
    for (int i = 0; i < 5; i++) {
        if (strcmp(clientes[i][0], "") == 0) {
            printf("Ingrese nombre del nuevo cliente: ");
            scanf("%s", clientes[i][0]);
            printf("Ingrese cedula del nuevo cliente: ");
            scanf("%s", clientes[i][1]);
            break;
        }
    }
    imprimirClientes(clientes);
}

void imprimirClientes(char clientes[][2][40]) {
    for (int i = 0; i < 5; i++) {
        printf("%s\t\t%s\n", clientes[i][0], clientes[i][1]);
    }
}


void listarPeliculas(char peliculas[][4][40]) {
   
}

void buscarporNombre(char peliculas[][4][40]) {
    
    
}

void buscarporGenero(char peliculas[][4][40]) {
    
}

void comprarTicket(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]) {
    
}

void verCompras(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]) {
    
}
