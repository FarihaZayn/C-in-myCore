#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Booking {
    char name[50];
    int roomNo;
    int day, month, year;
};

int validDate(int d, int m, int y) {
    if (m < 1 || m > 12) return 0;
    if (d < 1 || d > 31) return 0;
    if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return 0;
    if (m == 2) {
        int leap = (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
        if (d > 29 || (d == 29 && !leap)) return 0;
    }
    return 1;
}

int main() {
    struct Booking b;
    FILE *fp = fopen("hotel_bookings.txt", "a");

    printf("Enter guest name: ");
    scanf(" %[^\n]", b.name);
    printf("Enter room number: ");
    scanf("%d", &b.roomNo);
    printf("Enter booking date (DD MM YYYY): ");
    scanf("%d %d %d", &b.day, &b.month, &b.year);

    if (!validDate(b.day, b.month, b.year)) {
        printf("Invalid date! Booking failed.\n");
        fclose(fp);
        return 0;
    }

    fprintf(fp, "Name: %s | Room: %d | Date: %02d-%02d-%04d\n",
            b.name, b.roomNo, b.day, b.month, b.year);

    printf("Booking successful!\n");
    fclose(fp);
    return 0;
}
