#include <stdio.h>
#include <stdbool.h>
#include "../lib/find_rl.h"
#include "../lib/stu_info.h"

void find_roll(int num) {
    int roll;
    bool found = false;

    printf("Enter the roll number of the student: ");
    scanf("%d", &roll);

    for (int i = 0; i < num; i++) {
        if (roll == st[i].roll) {
            printf("Student Details:\n");
            printf("First name: %s\n", st[i].fname);
            printf("Last name: %s\n", st[i].lname);
            printf("CGPA: %.1f\n", st[i].cgpa);

            int total_cids = sizeof(st[i].cid) / sizeof(st[i].cid[0]);
            for (int j = 0; j < total_cids; j++) {
                printf("CID %d: %d\n", j + 1, st[0].cid[j]);
            }
            
            found = true;
            break;
        }
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", roll);
    }
}