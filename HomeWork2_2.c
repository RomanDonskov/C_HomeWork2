//Вычисляем сумму и произведение 3-х целых чисел
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a, b, c;
    printf("Введите 3 целых числа через пробел: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Сумма чисел: %d + %d + %d = %d \n", a,b,c,a+b+c);
    printf("Произведение чисел: %d * %d * %d = %d \n", a,b,c,a*b*c);
    return 0;
}
