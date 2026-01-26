// 26_time_and_date.c
// --------------------------------------------------
// Demonstrates using <time.h> to print date, time and timestamps.
// --------------------------------------------------

#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    time(&t);

    printf("Current time: %s", ctime(&t));

    struct tm *localTime = localtime(&t);
    printf("Year: %d\n", localTime->tm_year + 1900);
    printf("Month: %d\n", localTime->tm_mon + 1);
    printf("Day: %d\n", localTime->tm_mday);

    // Tweaking:
    // - Use strftime() for custom formatting.
    return 0;
}
