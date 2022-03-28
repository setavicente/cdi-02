#include <stdio.h>

int main (void) {

    int plata = 0;
    int monto = 0;
    int uno = 0;
    int cinco = 0;
    int diez = 0;
    int veinte = 0; 
    int cincuenta = 0;
    int cien = 0;

    printf("Ingrese un monto a retirar: ");
    scanf("%d", &plata);

    if (plata < 20){
        printf("Raton, el monto minimo es 20");
        return 1;
    }

    if (plata > 5000){
        printf ("Exceso de facha. El monto maximo es 5000");
        return 2;
    }

    printf("Joya, monto aceptado\n\n");
    
    while ((plata - monto) >= 100) {
        monto = monto + 100;
        cien++;
    }

    while ((plata - monto)>= 50) {
        monto = monto + 50;
        cincuenta++;
    }
    while ((plata - monto)>= 20) {
        monto = monto + 20;
        veinte++;
    }
    while ((plata - monto)>= 10)  {
        monto = monto + 10;
        diez++;
    }
    while ((plata - monto)>= 5) {
        monto = monto + 5;
        cinco++;
    }
    while ((plata - monto)>= 1) {
        monto = monto + 1;
        uno++;
    }

        printf ("Cantidad de billetes de 100: %d\n", cien);
        printf ("Cantidad de billetes de 50: %d\n", cincuenta);
        printf ("Cantidad de billetes de 20: %d\n", veinte);
        printf ("Cantidad de billetes de 10: %d\n," diez);
        printf ("Cantidad de billetes de 5: %d\n", cinco);
        printf ("Cantidad de billetes de 1: %d\n", uno);
        
        return 0;
    
}


