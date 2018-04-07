/*******************************************************/
/*           Лабораторная  работа №1                  */
/*          Типы данных и ввод-вывод                   */
/*        Пример выполнения. Вариант №11.             */
/*******************************************************/

#include <stdio.h>

struct team {
    char name[10], id[8];
    float points;
    int place;
};

int main(void) {

    /* Введение фактических данных*/
    struct team first_player;
    printf("1. Vvedite: familiu uchasnika, kod komandy, kolichestva ballov, mestto v itoge >");
    scanf("%s %s %f %d", &first_player.name, &first_player.id, &first_player.points, &first_player.place);

    struct team second_player;
    printf("2. Vvedite: familiu uchasnika, kod komandy, kolichestva ballov, mestto v itoge >");
    scanf("%s %s %f %d", &second_player.name, &second_player.id, &second_player.points, &second_player.place);

    struct team third_player;
    printf("3. Vvedite: familiu uchasnika, kod komandy, kolichestva ballov, mestto v itoge >");
    scanf("%s %s %f %d", &third_player.name, &third_player.id, &third_player.points, &third_player.place);

    /* Вывод таблицы */
    /* вывод заголовков */
    printf("\n-------------------------------------------------\n");
    printf("|         Vedomost sportivnyh sostazaniy        |\n");
    printf("|-----------------------------------------------|\n");
    printf("| Familia     | Kod     | Kolichestvo | Mesto v |\n");
    printf("| uchasnika   | komandy | ballov      | itoge   |\n");
    printf("|-------------|---------|-------------|---------|\n");
    /* вывод строк фактических данных */
    printf("| %-11s | %-7s | %-11.2f | %-7d |\n", first_player.name, first_player.id, first_player.points, first_player.place);
    printf("| %-11s | %-7s | %-11.2f | %-7d |\n", second_player.name, second_player.id, second_player.points, second_player.place);
    printf("| %-11s | %-7s | %-11.2f | %-7d |\n", third_player.name, third_player.id, third_player.points, third_player.place);
    /* вывод примечаний */
    printf("|-----------------------------------------------|\n");
    printf("| Primechnie: D - Dinamo, S - Spartak,          |\n");
    printf("|             H - Shahter                       |\n");
    printf("-------------------------------------------------\n");
    getchar(); getchar();
    return 0;
}