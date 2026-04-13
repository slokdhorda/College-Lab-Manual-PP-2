#include <stdio.h>

struct Date {
    int date;
    int month;
    int year;
};

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.date, &d1.month, &d1.year);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.date, &d2.month, &d2.year);

    if (d1.date == d2.date && d1.month == d2.month && d1.year == d2.year) {
        printf("equal");
    } else {
        printf("not equal");
    }

    return 0;
}
