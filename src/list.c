#include <stdio.h>
#include "list.h"

void list_command() {
    printf("Full list of executable commands:\n\n"
           "stuadd\nAdd a new student to the structure.\n\n"
           "studel\nDelete a student from the structure.\n\n"
           "stutotal\nGet info on the current total # of students and the max limit.\n\n"
           "findroll\nFind a student by their roll number.\n\n"
           "findname\nFind a student by their first name.\n\n"
           "findreg\nFind all students in a given course using it's CID/Registration #.\n"
        );
}