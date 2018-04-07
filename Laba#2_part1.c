/***************************************************/
/*             Лабораторная работа №2             */
/*               Побитовые операции                */
/*                  Вариант №11                   */
/***************************************************/

#include <stdio.h>
int main(void) {
    char c; /* номер канала */
    char u; /* номер устройства в канале */
    char e; /* код состояния */
    unsigned char b; /* признак занятости устройства */
    unsigned int UnitStateWord; /* слово состояния */
    /* ввод составных частей */
    printf("Vvedite nomer kanala (0 - 7) > ");
    scanf("%d", &c);
    printf("Vvedite nomer ustroistva v kanale (0 - 31) > ");
    scanf("%d", &u);
    printf("Vvedite kod sostoiania (0 - 63) > ");
    scanf("%d", &e);
    printf("Vvedite priznak zaniatosty ustroistva (0 / 1) > ");
    scanf("%d", &b);
    /* формирование упакованного кода */
    UnitStateWord = ((unsigned int) c & 0x7) << 13;
    UnitStateWord |= ((unsigned int) u & 0x1F) << 8;
    UnitStateWord |= ((unsigned int) e & 0x3F) << 2;
    UnitStateWord |= b & 1;
    /* вывод результата */
    printf("\nFormat komady kanala = %04x\n", UnitStateWord);
    return 0;
}