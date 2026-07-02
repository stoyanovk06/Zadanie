#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

const int MAX = 100;

// Obem na piramidata
double Piramida(double a, double b, double h) {
    return (a * b * h) / 3.0;
}

// Obem na prisama
double Prism(double a, double b, double h) {
    return a * b * h;
}

// Namiranе na indeks na nai-golqmiqt element
int Maximalno(double obem[], int n) {
    int indeks = 0;
    for (int i = 1; i < n; i++) {
        if (obem[i] > obem[indeks]) {
            indeks = i;
        }
    }
    return indeks;  
}

// Sortirane (vuzhodyashto)
int Sortirane(double obem[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (obem[j] > obem[j + 1]) {
                double temp = obem[j];
                obem[j] = obem[j + 1];
                obem[j + 1] = temp;
            }
        }
    }
    return 1;
}

int main() {
    int n;
    double a[MAX], b[MAX], h[MAX];
    double ObemPiramida[MAX], ObemPrism[MAX];

    printf("Vuvedi broi figuri: ");
    scanf_s("%d", &n);

        for (int i = 0; i < n; i++) {
            printf("\nFigura %d:\n", i + 1);

            printf("a = ");
            scanf_s("%lf", &a[i]);

            printf("b = ");
            scanf_s("%lf", &b[i]);

            printf("h = ");
            scanf_s("%lf", &h[i]);

        ObemPiramida[i] = Piramida(a[i], b[i], h[i]);
        ObemPrism[i] = Prism(a[i], b[i], h[i]);
        }

    double maxObemPiramida = ObemPiramida[Maximalno(ObemPiramida, n)];
    Sortirane(ObemPiramida, n);

    printf("\nObemi na piramidite sa: ");
    for (int i = 0; i < n; i++) printf("%.2lf ", ObemPiramida[i]);;

    printf("\nNai-golqmiqt obem na piramida e: %.2lf\n", maxObemPiramida);

    double maxObemPrisma = ObemPrism[Maximalno(ObemPrism, n)];
    Sortirane(ObemPrism, n);

    printf("\nObemi na prizmite sa: ");
    for (int i = 0; i < n; i++) printf("%.2lf ", ObemPrism[i]);

    printf("\nNai-golqmiqt obem na prizma e: %.2lf\n", maxObemPrisma);

    return 0;
}