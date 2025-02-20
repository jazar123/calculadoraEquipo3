//Garcia Garcia Aram Jesua
//Gathe Esquivel Arleth
//Herrera Medina Erick F
//Mac Comish Sanchez Vale
//Perez Hernandez Jesus A

#include <stdio.h>
#include <stdlib.h>

int resultado = 0;

int main(){
    menu();
    
    return 0;
}

int menu(){
    printf("Selecciona la operación a realizar en la calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Salir\n");

    int opcion;
    scanf("%d", &opcion);

    switch(opcion){
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplicacion();
            break;
        case 4:
            division();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Opción no válida\n");
            break;
    }
}

int suma(){
    return resultado;
}

int resta(){
    return resultado;
}

int multiplicacion(){
    return resultado;
}

int division(){
    return resultado;
}