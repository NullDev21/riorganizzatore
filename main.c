#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main () {
    int primo_numero;
    int secondo_numero;
    int terzo_numero;
    int quarto_numero;

    int primo_numero_rand;
    int secondo_numero_rand;
    int terzo_numero_rand;
    int quarto_numero_rand;

    int terzo_numero_selector;
    int secondo_numero_selector;
    int primo_numero_selector;
    int quarto_numero_selector;

    int checker = 0;


    printf("[System] immetti primo numero: ");
    scanf("%d", &primo_numero);
    printf("[System] Immetti secondo numero: ");
    scanf("%d", &secondo_numero);
    printf("[System] Immetti terzo numero: ");
    scanf("%d", &terzo_numero);
    printf("[System] Immetti quarto numero: ");
    scanf("%d", &quarto_numero);


    time_t t;
    srand(time(NULL));
    while (checker == 0) {
        primo_numero_rand = rand() % 5;
        secondo_numero_rand = rand() % 5;
        terzo_numero_rand = rand() % 5;
        quarto_numero_rand = rand() % 5;


        if (primo_numero_rand == 1) {
            primo_numero_selector = primo_numero;
        } else if (primo_numero_rand == 2) {
            primo_numero_selector = secondo_numero;
        } else if (primo_numero_rand == 3) {
            primo_numero_selector = terzo_numero;
        } else if (primo_numero_rand == 4) {
            primo_numero_selector = quarto_numero;
        }


        if (secondo_numero_rand == 1) {
            secondo_numero_selector = primo_numero;
        } else if (secondo_numero_rand == 2) {
            secondo_numero_selector = secondo_numero;
        } else if (secondo_numero_rand == 3) {
            secondo_numero_selector = terzo_numero;
        } else if (secondo_numero_rand == 4) {
            secondo_numero_selector = quarto_numero;
        }


        if (terzo_numero_rand == 1) {
            terzo_numero_selector = primo_numero;
        } else if (terzo_numero_rand == 2) {
            terzo_numero_selector = secondo_numero;
        } else if (terzo_numero_rand == 3) {
            terzo_numero_selector = terzo_numero;
        } else if (terzo_numero_rand == 4) {
            terzo_numero_selector = quarto_numero;
        }

        if (quarto_numero_rand == 1) {
            quarto_numero_selector = primo_numero;
        } else if (quarto_numero_rand == 2) {
            quarto_numero_selector = secondo_numero;
        } else if (quarto_numero_rand == 3) {
            quarto_numero_selector = terzo_numero;
        } else if (quarto_numero_rand == 4) {
            quarto_numero_selector = quarto_numero;
        }


        if (primo_numero_selector > secondo_numero_selector && secondo_numero_selector > terzo_numero_selector && terzo_numero_selector > quarto_numero_selector) {
            printf("\n\n[out message] Numeri corretti: %d , %d , %d, %d", primo_numero_selector,
                   secondo_numero_selector,
                   terzo_numero_selector, quarto_numero_selector);
            printf("\n");
            system("pause");
            checker = 1;
        } else {
            printf("\n[debug] checking: %d , %d, %d, %d", primo_numero_selector, secondo_numero_selector,
                   terzo_numero_selector, quarto_numero_selector);
        }
    }
}