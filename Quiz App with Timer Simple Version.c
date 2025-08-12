#include <stdio.h>
#include <time.h>

int main() {
    char answer;
    time_t start, end;

    printf("=== Quick Quiz ===\n");
    printf("You have 10 seconds to answer!\n");

    start = time(NULL);

    printf("Q1: What is the capital of France?\n");
    printf("a) Berlin  b) Paris  c) Madrid\n");
    printf("Your answer: ");
    scanf(" %c", &answer);

    end = time(NULL);

    if (difftime(end, start) > 10) {
        printf("⏳ Time's up!\n");
    } else if (answer == 'b' || answer == 'B') {
        printf("✅ Correct!\n");
    } else {
        printf("❌ Wrong!\n");
    }

    return 0;
}

