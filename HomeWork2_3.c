//Вычисляем разность 2-х целых чисел
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    printf("Введите 2 целых числа через пробел: ");
    scanf("%d %d", &a, &b);
    printf("Разность чисел: %d - %d = %d \n", a,b,a-b);
    return 0;
}
