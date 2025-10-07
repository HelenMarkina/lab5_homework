#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "");

    double x, y, z, a;

    printf("ПРОГРАММА ВЫЧИСЛЕНИЯ ВЕЛИЧИНЫ a\n");
    printf("===============================\n\n");

    // Ввод значений от пользователя
    printf("Введите значение x: ");
    scanf_s("%lf", &x);

    printf("Введите значение y: ");
    scanf_s("%lf", &y);

    printf("Введите значение z: ");
    scanf_s("%lf", &z);

    printf("\nВВЕДЕННЫЕ ЗНАЧЕНИЯ:\n");
    printf("===================\n");
    printf("x = %.6f\n", x);
    printf("y = %.1f\n", y);
    printf("z = %.3f\n", z);

    // Вычисление значения
    a = pow(2, -x) * sqrt(x + pow(fabs(y), 1.0 / 4.0)) * pow((exp(x - 1 / sin(z))), 1.0 / 3.0);

    printf("\nРЕЗУЛЬТАТ ВЫЧИСЛЕНИЙ:\n");
    printf("=====================\n");
    printf("a = %.5f\n", a);

    return 0;
}