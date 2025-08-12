#include <stdio.h>
#include <string.h>

struct Passenger {
    char name[50];
    int seatNo;
};

int main() {
    struct Passenger p[50];
    int booked = 0, choice;

    do {
        printf("\n=== Railway Ticket Reservation ===\n");
        printf("1. Book Ticket\n2. View All Bookings\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (booked >= 50) {
                printf("All seats booked!\n");
            } else {
                printf("Enter passenger name: ");
                scanf(" %[^\n]", p[booked].name);
                p[booked].seatNo = booked + 1;
                printf("Ticket booked! Seat No: %d\n", p[booked].seatNo);
                booked++;
            }
        }
        else if (choice == 2) {
            printf("\n--- Bookings List ---\n");
            for (int i = 0; i < booked; i++)
                printf("Seat %d: %s\n", p[i].seatNo, p[i].name);
        }
    } while (choice != 3);

    return 0;
}
