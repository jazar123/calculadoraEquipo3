// Garcia Garcia Aram Jesua
// Gathe Esquivel Arleth
// Herrera Medina Erick F
// Mac Comish Sanchez Vale
// Perez Hernandez Jesus A

#include <stdio.h>
#include <stdlib.h>

float resultado = 0;

// Declaración de funciones
int menu();
float suma();
float resta();
float multiplicacion();
float division();

int main(){
    menu();
    return 0;
}

int menu(){
    int opcion;

    printf("Selecciona la operación a realizar en la calculadora\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicación\n");
    printf("4. División\n");
    printf("5. Salir\n");
    printf("Opción: ");
    
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
    return 0;
}

float suma(){

    return resultado;
}

float resta(){

    return resultado;
}

float multiplicacion(){

    return resultado;
}

float division(){
    float a, b;
    printf("Introduce el dividendo: ");
    scanf("%f", &a);
    printf("Introduce el divisor: ");
    scanf("%f", &b);
    
    if(b == 0){
        printf("Error: No se puede dividir por cero\n");
        resultado = 0;
    } else {
        resultado = a / b;
        printf("Resultado: %.2f\n", resultado);
    }
    return resultado;
}
