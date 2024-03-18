//Вычисляем среднее арифметическое чифр 4-х значного числа
#include <stdio.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int a;
    float res;
    printf("Введите целое положительное 4-х значное число: ");
    scanf("%4d", &a);
   // a = (float)a;
    res =(float) ((a%10)+(a/10)%10+(a/100)%10+(a/1000))/4;
    printf("Среднее арифметическое цифр: %.2f \n", res);
    return 0;
}
