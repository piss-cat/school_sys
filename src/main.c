#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "commands.h"
#include "help.h"
#include "list.h"
#include "stu_info.h"

struct StudentInfo st[55];

int main() {
    int num = 0;
    char usr_input[50];

    printf("Welcome to the School System! Type 'help' if you need any extra assistance.\n");

    while (true) {
        printf(">>> ");
        
        if (scanf("%49s", usr_input) != 1) {
            break;
        }

        printf("\n");

        if (!strcasecmp(usr_input, "exit")) {
            break;
        }

        if (!strcasecmp(usr_input, "help")) {
            help_command();
            printf("\n");
            continue;
        }

        if (!strcasecmp(usr_input, "list")) {
            list_command();
            printf("\n");
            continue;
        }

        if (!exec_command(usr_input, &num)) {
            printf("Unknown command. Try again.\n");
        }

        printf("\n");
    }

    return 0;
}
