#ifndef COMMANDS_H
#define COMMANDS_H

#include <stdbool.h>

typedef void (*CommandFunc)(int *num);

struct Command {
    const char *name;
    CommandFunc func;
};

bool exec_command(const char *usr_input, int *num);

#endif