#include <locale.h>
#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES
#define ROW 9
#define COL 9


int def_1();
int def_2();
int def_3();


int main(){
    setlocale(LC_ALL, ".UTF8");

    // def_1();
    def_2();
    // def_3();

    return 0;
}


int def_1(){
    for (int row = 1; row <= ROW; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            printf("%d\t", col * row);
        }
        printf("\n\n");
    }


    for (int row = 0; row < 5; ++row)
    {
        for (int col = 0; col < 5 - row; ++col)
        {
            printf("%d\t", 1);
        }
        printf("\n\n");
    }


    return 0;
}



int def_2(){
    #include <stdio.h>

    int number;
    scanf("%lld", &number);

    if (number < 0) number *= -1;

    int sum = 0;

    while (number > 0) {
        int number2 = number % 10;

        if (number2 % 2 != 0) {
            sum += number2;
        }
        number /= 10;
    }
    printf("Сумма нечетных цифр: %d", sum);

    return 0;
}