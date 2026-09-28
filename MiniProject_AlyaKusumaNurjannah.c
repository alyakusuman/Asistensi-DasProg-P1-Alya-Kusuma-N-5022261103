#include <stdio.h>

int main() {
    char name[50], food[50], pl[2], id[50];
    int tgl, bln, tahun;
    int operasi1, operasi2;

    printf("\n----------------------------------------------\n");
    printf("\n         FOODIE SPECIAL ID GENERATOR          \n");
    printf("\n            by Alya KN/5022261103             \n");
    printf("\n----------------------------------------------\n");
    printf("Name: ");
    scanf("%s", name);

    printf("P(perempuan)/L(laki-laki): ");
    scanf("%s", pl);

    printf("Date of birth (DD): ");
    scanf("%d", &tgl);

    printf("Month of birth (MM): ");
    scanf("%d", &bln);

    printf("Year of birth (YYYY): ");
    scanf("%d", &tahun);

    printf("Favorite food: ");
    scanf("%s", food);

    operasi1 = tgl + 10;
    operasi2 = bln % 2;

    sprintf(id, "%c%c%c%c%d%d%d%d%d%c",
            name[0], name[1], name[2], pl[0],
            tgl, bln, tahun, operasi1, operasi2, food[0]);

    printf("\n----------------------------------------------\n");
    printf("|   ID            : %s\n", id);
    printf("|   Name          : %s\n", name);
    printf("|   Favorite Food : %s\n", food);
    printf("----------------------------------------------\n");

    return 0;
}
