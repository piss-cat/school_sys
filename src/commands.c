#include <string.h>
#include <stdio.h>
#include <stdbool.h>

#include "commands.h"
#include "stu_add.h"
#include "stu_del.h"
#include "stu_info.h"
#include "stu_total.h"
#include "find_roll.h"
#include "find_name.h"
#include "find_reg.h"

static struct Command cmd_table[] = {
    {"stuadd",   add_student},
    {"findroll", find_roll},
    {"findname", find_firstname},
    {"findreg",  find_reg},
    {"stutotal", total_students},
    {"studel",   delete_student},
};

bool exec_command(const char *usr_input, int *num) {
    int num_cmds = sizeof(cmd_table) / sizeof(cmd_table[0]);

    for (int i = 0; i < num_cmds; i++) {
        if (!strcasecmp(usr_input, cmd_table[i].name)) {
            cmd_table[i].func(num);
            return true;
        }
    }
    return false;
}