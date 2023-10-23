#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {

    int m, n;
    double i, j, sum = -1, dob = 1;

    printf("Введіть ліміт суми: ");
    scanf_s("%d", &m);
    printf("Введіть ліміт добутку: ");
    scanf_s("%d", &n);

    m += 1;

    for (i = 1; i <= m; i++)

    {
        sum += dob;
        dob = 1;
        for (j = 1; j <= n; j++)
        {
            dob *= (pow(i, 2) + j) / 2;
        }
    }
    printf("Сума = %.2lf", sum);

    return 0;
}