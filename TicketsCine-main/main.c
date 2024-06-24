#include <stdio.h>
#include "funciones.h"

void main() {
    char peliculas[10][4][40] = {
        {"1", "Avatar", "10:20", "Fantasia"},
        {"2", "Inception", "12:00", "Sci-Fi"},
        {"3", "Titanic", "15:00", "Drama"},
        {"4", "Interstellar", "18:00", "Sci-Fi"},
        {"5", "Matrix", "20:00", "Sci-Fi"},
        {"6", "The Godfather", "14:00", "Crime"},
        {"7", "Pulp Fiction", "16:30", "Crime"},
        {"8", "The Dark Knight", "19:00", "Action"},
        {"9", "Forrest Gump", "21:00", "Drama"},
        {"10", "Gladiator", "23:00", "Action"}
    };
    
    double precio[3] = {7, 3.5, 3}; 
    
    char clientes[5][2][40] = {
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""},
        {"", ""}
    };

    int reserva[10][4] = {
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1},
        {-1, -1, -1, -1}
    };

    int opcion1 = 0, opcion2 = 0, opcion3 = 0;
    do {
        printf("Escoja una opcion:\n1. Ingresar Cliente\n2. Ver Peliculas\n3. Buscar Pelicula\n4. Comprar Ticket\n5. Ver Compras\n>>");
        scanf("%d", &opcion2);
        
        switch (opcion2) {
            case 1:
                ingresarCliente(clientes);
                break;
            case 2:
                listarPeliculas(peliculas);
                break;
            case 3:
                printf("1. Por nombre\n2. Por Genero\n>>");
                scanf("%d", &opcion3);
                switch (opcion3) {
                    case 1:
                        buscarporNombre(peliculas);
                        break;
                    case 2:
                        buscarporGenero(peliculas);
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                comprarTicket(peliculas, precio, clientes, reserva);
                break;
            case 5:
                verCompras(peliculas, precio, clientes, reserva);
                break;
            default:
                break;
        }
        printf("Desea escoger una nueva opcion: 1.Si/2.No\n>>");
        scanf("%d", &opcion1);
    } while (opcion1 == 1);
}
