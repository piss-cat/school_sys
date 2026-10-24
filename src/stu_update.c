#include <stdio.h>
#include <stdbool.h>
#include <strings.h>
#include "stu_info.h"
#include "stu_update.h"

void update_student(int *num) {
    int roll;
    char update[10];
    bool found = false;

    printf("Enter roll number: ");
    if (scanf("%d", &roll) != 1) {
        printf("Invalid roll number.\n");
        return;
    }

    for (int i = 0; i < *num; i++) {
        if (st[i].roll != roll) {
            continue;
        }

        found = true;

        printf(
            "What would you like to update?\n\n"
            "fname - Update first name\n"
            "lname - Update last name\n"
            "roll  - Update roll number\n"
            "cgpa  - Update CGPA\n"
            "cid   - Update course IDs\n\n"
            "@>>> "
        );

        if (scanf("%9s", update) != 1) {
            printf("Failed to read choice.\n");
            return;
        }

        if (!strcasecmp(update, "fname")) {
            printf("Enter new first name: ");
            if (scanf("%49s", st[i].fname) != 1) {
                printf("Failed to read first name.\n");
                return;
            }
        } else if (!strcasecmp(update, "lname")) {
            printf("Enter new last name: ");
            if (scanf("%49s", st[i].lname) != 1) {
                printf("Failed to read last name.\n");
                return;
            }
        } else if (!strcasecmp(update, "roll")) {
            printf("Enter new roll number: ");
            if (scanf("%d", &st[i].roll) != 1) {
                printf("Invalid roll number.\n");
                return;
            }
        } else if (!strcasecmp(update, "cgpa")) {
            printf("Enter new CGPA value: ");
            if (scanf("%f", &st[i].cgpa) != 1) {
                printf("Invalid CGPA value.\n");
                return;
            }
        } else if (!strcasecmp(update, "cid")) {
            int total_cids =
                sizeof(st[i].cid) / sizeof(st[i].cid[0]);

            printf("Enter new CID values:\n");

            for (int j = 0; j < total_cids; j++) {
                printf("CID %d: ", j + 1);
                if (scanf("%d", &st[i].cid[j]) != 1) {
                    printf("Invalid course ID.\n");
                    return;
                }
            }
        } else {
            printf("Unknown update option.\n");
            return;
        }

        printf("Student updated successfully.\n");
        break;
    }

    if (!found) {
        printf("Student with roll number %d not found.\n", roll);
    }
}