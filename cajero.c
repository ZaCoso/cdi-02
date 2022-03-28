#include <stdio.h>

int main (void) {

    int plata =0;
    int uno= 1;
    int cinco= 5;
    int diez= 10;
    int veinte= 20;
    int cincuenta= 50;
    int cien= 100;

    printf("Ingrese su monto a retirar:");
    scanf ("%d", &plata);

    if (plata < 20){
        printf("El monto minimo es de 20, ingrse un monto mas grande.");
        return 1;
    }
    if (plata > 5000){
        printf("El monto maximo es de 5000, ingrese un monto mas chico.");
        return 2;
    }

    int Ccien = 0;
    while (plata >= cien){
        Ccien++;
        plata -= cien;
    }
    printf ("Billetes de 100: %d\n",Ccien);

    int Ccicuenta = 0;
    while (plata >= cincuenta){
        Ccicuenta++;
        plata -= cincuenta;
    }
    printf ("Billetes de 50: %d\n",Ccicuenta);

    int Cveinte = 0;
    while (plata >= veinte){
        Cveinte++;
        plata -=veinte;
    }
    printf ("Billetes de 20: %d\n",Cveinte);

    int Cdiez = 0;
    while (plata >= diez){
        Cdiez++;
        plata -= diez;
    } 
    printf ("Billetes de 10: %d\n",Cdiez);

    int Ccinco = 0;
    while (plata >= cinco){
        Ccinco++;
        plata -= cinco;
    } 
    printf ("Billetes de 5: %d\n",Ccinco);

    int Cuno = 0;
    while (plata >= uno){
        Cuno++;
        plata -=uno;
    }  
    printf ("Billetes de 1: %d\n",Cuno);
    return 0;
    }

