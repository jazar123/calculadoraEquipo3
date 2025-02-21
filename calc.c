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

float suma(){
    return resultado;
}

float resta(){
    float x, y;
    float resultado;
    cout<<"Ingrese los valores";
    cin >> x;
    cin >> y;
    resultado=x-y;
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

