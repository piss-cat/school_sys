#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "lib/stu_add.h"
#include "lib/stu_del.h"
#include "lib/stu_info.h"
#include "lib/stu_total.h"
#include "lib/find_roll.h"
#include "lib/find_name.h"
#include "lib/find_reg.h"
#include "lib/input_codes.h"

struct StudentInfo st[55];

int main() {
    int num = 0;
    const char *input_codes[] = {"exit", "stuadd", "findroll", "findname", "findreg", "stutotal", "studel"};
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
        } else if (!strcasecmp(usr_input, input_codes[FINDREGISTERED])) {
            find_reg(num);
            printf("\n");
        } else if (!strcasecmp(usr_input, input_codes[STUTOTAL])) {
            total_students(num);
            printf("\n");
        } else if (!strcasecmp(usr_input, input_codes[STUDEL])) {
            delete_student(&num);
            printf("\n");
        }
    }

    return 0;
}
