// Garcia Garcia Aram Jesua
// Gathe Esquivel Arleth
// Herrera Medina Erick F
// Mac Comish Sanchez Vale
// Perez Hernandez Jesus A
// Zamarron Ramirez Javier
#include <stdio.h>
#include <stdlib.h>

void menu();
float suma();
float resta();
float multiplicacion();
float division();
float resultado = 0;
void menu(){
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
            resultado= suma();
            printf ("Resultado: %.2f/n", resultado);
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

float suma(){
    float a, b;
    printf("Ingresar primer numero: ");
    scanf("%f", &a);
    printf("Ingresar segundo numero: ");
    scanf("%f", &b);
    return a + b;
}

float resta(){
    float x, y;
    float resultado;
    printf("Ingrese primero el valor más grande");
    scanf("%f",&x);
    scanf("%f",&y);
    resultado=x-y;
    return resultado;
}

float multiplicacion(){
    float a, b;
    printf("Escribe los números a multiplicar:\n");
    scanf("%f %f", &a, &b);
    resultado = a * b;
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
int main(){
    menu();
    }
