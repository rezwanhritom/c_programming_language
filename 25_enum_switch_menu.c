// 25_enum_switch_menu.c
// --------------------------------------------------
// Demonstrates using enums with a switch-case menu system.
// Good for console applications and state machines.
// --------------------------------------------------

#include <stdio.h>

enum Menu { START = 1, SETTINGS, HELP, EXIT };

int main() {
    int choice;

    printf("1. Start\n2. Settings\n3. Help\n4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case START:
            printf("Game Started!\n");
            break;
        case SETTINGS:
            printf("Settings opened.\n");
            break;
        case HELP:
            printf("Help menu.\n");
            break;
        case EXIT:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    // Tweaking:
    // - Add more menu options easily using enums.
    return 0;
}
