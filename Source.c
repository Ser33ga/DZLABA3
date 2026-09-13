#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    double price;              
    double price_after_fixed;  
    double price_after_percent;

    setlocale(LC_CTYPE, "");

    printf("Введите цену товара: ");
    scanf("%lf", &price);

    price_after_fixed = price + 12.50;

    price_after_percent = price * 1.25;

    printf("\nРАСЧЕТ УВЕЛИЧЕНИЯ ЦЕНЫ ТОВАРА\n");
    printf("================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Исходная цена товара: %.2f\n", price);
    printf("- Величина 'a' для увеличения: $12.50\n");
    printf("- Процент увеличения: 25%%\n\n");

    printf("РАСЧЕТ:\n");
    printf("- (а) Увеличение на $12.50: %.2f + 12.50 = %.2f\n",
        price, price_after_fixed);
    printf("- (b) Увеличение на 25%%:   %.2f * 1.25 = %.2f\n",
        price, price_after_percent);
    printf("================================\n");
    printf("ЦЕНА ПОСЛЕ УВЕЛИЧЕНИЯ НА $12.50: %.2f\n", price_after_fixed);
    printf("ЦЕНА ПОСЛЕ УВЕЛИЧЕНИЯ НА 25%%:   %.2f\n", price_after_percent);

    return 0;
}
