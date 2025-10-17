#include <stdio.h>
#include <math.h>
#include <Windows.h>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float h; // ввод высоты
    printf("Введите высоту в метрах: ");
    scanf_s("%f", &h);

    float g = 9.8; // ускорение
    float t = sqrt(2 * h / g); // вычисление времени по высоте

    printf("Предмет падает с высоты %f метров\n", h);
    printf("Он коснётся земли через %f секунд\n", t);
}