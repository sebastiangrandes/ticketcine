#include <stdio.h>
#include <string.h>
#include "funciones.h"


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
    printf("ID\tNombre\t\tHorario\t\tGenero\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(peliculas[i][0], "") != 0) {
            printf("%s\t%s\t\t%s\t\t%s\n", peliculas[i][0], peliculas[i][1], peliculas[i][2], peliculas[i][3]);
        }
    }
}


void buscarporNombre(char peliculas[][4][40]) {
    char nombre[40];
    printf("Ingrese el nombre de la pelicula: ");
    scanf("%s", nombre);
    printf("ID\tNombre\t\tHorario\t\tGenero\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(peliculas[i][1], nombre) == 0) {
            printf("%s\t%s\t\t%s\t\t%s\n", peliculas[i][0], peliculas[i][1], peliculas[i][2], peliculas[i][3]);
        }
    }
}


void buscarporGenero(char peliculas[][4][40]) {
    char genero[40];
    printf("Ingrese el genero de la pelicula: ");
    scanf("%s", genero);
    printf("ID\tNombre\t\tHorario\t\tGenero\n");
    for (int i = 0; i < 10; i++) {
        if (strcmp(peliculas[i][3], genero) == 0) {
            printf("%s\t%s\t\t%s\t\t%s\n", peliculas[i][0], peliculas[i][1], peliculas[i][2], peliculas[i][3]);
        }
    }
}


void comprarTicket(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]) {
    int peliculaID, clienteID, cantidad;
    printf("Ingrese ID de la pelicula: ");
    scanf("%d", &peliculaID);
    printf("Ingrese ID del cliente: ");
    scanf("%d", &clienteID);
    printf("Ingrese cantidad de boletos: ");
    scanf("%d", &cantidad);
    
    for (int i = 0; i < 10; i++) {
        if (reserva[i][0] == -1) {
            reserva[i][0] = peliculaID;
            reserva[i][1] = clienteID;
            reserva[i][2] = cantidad;
            reserva[i][3] = 1; 
            break;
        }
    }
    printf("Ticket comprado exitosamente!\n");
}


void verCompras(char peliculas[][4][40], double precio[], char clientes[][2][40], int reserva[][4]) {
    printf("Compras realizadas:\n");
    printf("Cliente\t\tPelicula\t\tCantidad\tPrecio Total\n");
    for (int i = 0; i < 10; i++) {
        if (reserva[i][0] != -1) {
            int peliculaID = reserva[i][0];
            int clienteID = reserva[i][1];
            int cantidad = reserva[i][2];
            double total = cantidad * precio[0]; 
            
            printf("%s\t\t%s\t\t%d\t\t%.2f\n", clientes[clienteID][0], peliculas[peliculaID][1], cantidad, total);
        }
    }
}
