/***************************************************/
/*             Лабораторная работа №2              */
/*               Побитовые операции                */
/*                  Вариант №11                    */
/***************************************************/

#include <stdio.h>
/* библиотека, которая используется для различных операций стандартного ввода и вывода.*/
int main(void) {
    char c; /* номер канала */
    char u; /* номер устройства в канале */
    char e; /* код состояния */
    unsigned char b; /* признак занятости устройства */
    unsigned int UnitStateWord; /* слово состояния */
    /* ввод слова состояния устройства */
    printf("Vvedite format komandy kanala \n");
    printf("(16-richnie chislo ot 0 do 0xFFFF) >");
    scanf("%x",&UnitStateWord);
    /* Выделение составных частей */
    c = (UnitStateWord>>13) & 0x7;
    u = (UnitStateWord>>8) & 0x1F;
    e = (UnitStateWord>>2) & 0x3F;
    b = UnitStateWord & 1;
    /* вывод результатов */
    putchar('\n');
    printf("Nomer kanala = %d\n",c);
    printf("Nomer ustroistva v kanale = %d\n",u);
    printf("Kod sostoiania = %d\n",e);
    printf("Priznak zaniatosty ustroistva = %d\n",b);
    return 0;
}