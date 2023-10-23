#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {
    int x, terms;
    double S = 0;
    double term = 1;

    printf("Введіть ціле число x: ");
    scanf_s("%d", &x);

    printf("Введіть кількість доданків (кількість членів ряду, яку Ви бажаєте врахувати при обчисленні значення S: ");
    scanf_s("%d", &terms);

    for (int i = 0; i < terms; i++) {
        if (i % 2 == 0) {
            S += term;
        }
        term *= (x * x) / ((2 * i + 3) * (2 * i + 2));
    }

    printf("Значення S = %lf\n", S);

    return 0;
}
