#include <stdio.h>
#include <stdbool.h>
#include "../lib/stu_del.h"
#include "../lib/stu_info.h"

void delete_student(int *num) {
    int roll;
    bool deleted = false;

    printf("Enter the roll number of the student you'd like to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < *num; i++) {
        if (roll == st[i].roll) {
            for (int j = i; j < 49; j++) {
                st[j] = st[j + 1];
            }
            (*num)--;
            deleted = true;
        }
    }

    if (deleted) {
        printf("The roll number/student has been deleted successfully!\n");
    } else {
        printf("There was a problem deleting the roll number/student. Please try again later..\n");
    }
}