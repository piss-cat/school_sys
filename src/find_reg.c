#include <stdio.h>
#include <stdbool.h>
#include "find_reg.h"
#include "stu_info.h"

void find_reg(int num) {
    int cid;
    bool found = false;

    printf("Enter CID: ");
    scanf("%d", &cid);

    printf("\n");

    for (int i = 0; i < num; i++) {
        int total_cids = sizeof(st[i].cid) / sizeof(st[i].cid[0]);
        for (int j = 0; j < total_cids; j++) {
            if (cid == st[i].cid[j]) {
                printf("Student Details:\n");
                printf("First name: %s\n", st[i].fname);
                printf("Last name: %s\n", st[i].lname);
                printf("Roll number: %d\n", st[i].roll);
                printf("CGPA: %.1f\n", st[i].cgpa);
                printf("\n");

                found = true;
                break;
            }
        }
    }

    if (!found) {
        printf("CID %d not found.\n", cid);
    }
}