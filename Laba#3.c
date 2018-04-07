/***************************************************/
/*             Лабораторная работа №3              */
/*               Обработка массивов                */
/*                   Вариант №11.                  */
/***************************************************/
#include <stdio.h>
#include <stdlib.h>
int main () {
    while (1) {
        int S, el;
        char E;
        printf("Enter height of matrix (if you want to enter elements by yourself enter <= 4)('E' for exit): ");
        if (scanf("%d", &S) == 1) {
            int array[S][S]; // объявили массив
            short i, j;
            if (S <= 4)
            {
                for (i = 0; i < S; i++) {
                    for (j = 0; j < S; j++) {
                        if (scanf("%d", &el) == 1) {
                            array[i][j] = el;
                        } else{
                            printf("Enter number!\n");
                            break;
                        }
                    }
                }
                puts("First Array: ");
                for (i = 0; i < S; i++) {
                    for (j = 0; j < S; j++) {
                        printf("%4d", array[i][j]);
                    }
                    printf("\n");
                }
            }
            else {
                for (i = 0; i < S; i++) {
                    for (j = 0; j < S; j++) {
                        array[i][j] = 1 + rand() % 20;
                        printf("%4d", array[i][j]);
                    }
                    printf("\n");
                }
            }
            puts("Result Array: ");
            for (i = 0; i < S; i++) {
                for (j = 0; j < S; j++) {
                    if ((i == j) && (i < S - 1) && (0 < i)) {
                        int str = 0;
                        array[i][i] = 0;
                        do {
                            str++;
                            array[i][i] += (array[i + str][j - str] + array[i - str][j + str]);
                        } while (i + str != S - 1 && j + str != S - 1 && i - str != 0 && j - str != 0);
                    }
                    printf("%4d", array[i][j]);
                }
                printf("\n");
            }
        }
        else
            printf("Enter number!\n");
        printf("For Exit type 'E' ");
        scanf("%s", &E);
        if (E == 'E' || E == 'e')
            break;
        printf("\n");
    }
    return 0;
}