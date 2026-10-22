#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "lib/stu_add.h"
#include "lib/stu_info.h"
#include "lib/find_roll.h"
#include "lib/find_name.h"
#include "lib/input_codes.h"

struct StudentInfo st[55];

int main() {
    int num = 0;
    const char *input_codes[] = {"exit", "stuadd", "findroll", "findname"};
    char usr_input[50];

    while (true) {
        printf("What would you like to do? ('exit' to exit): ");
        
        if (scanf("%49s", usr_input) != 1) {
            break;
        }

        printf("\n");

        if (!strcasecmp(usr_input, input_codes[EXIT])) {
            break;
        } else if (!strcasecmp(usr_input, input_codes[STUADD])) {
            add_student(&num);
            printf("\n");
        } else if (!strcasecmp(usr_input, input_codes[FINDROLL])) {
            find_roll(num);
            printf("\n");
        } else if (!strcasecmp(usr_input, input_codes[FINDNAME])) {
            find_firstname(num);
            printf("\n");
        } 
    }

    return 0;
}