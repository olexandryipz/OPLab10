#include <stdio.h>
#include <math.h>
#include <Windows.h>

int main() {

    int number;

    printf("Введіть число: ");
    scanf_s("%d", &number);

    while (number != 1)
        if (number % 2 == 0) number /= 2, printf("%d\n", number);
        else number = (number * 3 + 1) / 2, printf("%d\n", number);

    return 0;
}