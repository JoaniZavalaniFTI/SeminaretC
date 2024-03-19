#include <stdio.h>

// deklarimi i funksionit merrNoten

char merrNoten(int piket);

// funksioni main

int main(){
    int piket;
    printf("Ju lutem vendosni nje numer pikesh.\n");

    scanf("%d", &piket);

    // perjashtimi i vlerave jashte intervalit [0, 100]

    while (piket < 0 || piket > 100) {
        printf("Nuk keni vendosur nje numer te sakte pikesh. Provoni perseri:\n");
        scanf("%d", &piket);
    }

    // thirrja e funksionit merrNoten

    char nota = merrNoten(piket);
    printf("Ju keni marre noten %c ne lenden TGJP.", nota);

    return 0;
}

// funksioni merrNoten, i bere me switch case

char merrNoten(int piket){
    switch (piket / 10){
        case 10:
            return 'A';
        case 9:
            return 'A';
        case 8:
            return 'B';
        case 7:
            return 'C';
        case 6:
            return 'D';
        default:
            return 'F';
    }

/*  logjika mbas kesaj eshte se kur nje variabel int pjesetohet me 10,
    vlera mbas presjes nuk merret parasysh dhe merret vetem pjesa e plote. */

}
