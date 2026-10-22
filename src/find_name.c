#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../lib/find_name.h"
#include "../lib/stu_info.h"

void find_firstname(int num) {
    char fname[50];
    bool found = false;

    printf("Enter the first name of the student: ");
    if (scanf("%49s", fname) != 1) {
        return;
    }

    for (int i = 0; i < num; i++) {
        if (!strcasecmp(st[i].fname, fname)) {
            printf("Student Details:\n");
            printf("First name: %s\n", st[i].fname);
            printf("Last name: %s\n", st[i].lname);
            printf("Roll number: %d\n", st[i].roll);
            printf("CGPA: %.1f\n", st[i].cgpa);

            int total_cids = sizeof(st[i].cid) / sizeof(st[i].cid[0]);
            for (int j = 0; j < total_cids; j++) {
                printf("CID %d: %d\n", j + 1, st[i].cid[j]);
            }
            
            found = true;
            break;
        }
    }

    if (!found) {
        printf("Student with first name %s not found.\n", fname);
    }
}