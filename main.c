#include <stdio.h>
#include "lib/stu_add.h"
#include "lib/stu_info.h"

struct StudentInfo st[55];

int main() {
    int num = 0;

    add_student(&num);
    printf("First name: %s\n", st[0].fname);
    printf("Last name: %s\n", st[0].lname);
    printf("Roll: %d\n", st[0].roll);
    printf("CGPA: %f\n", st[0].cgpa);

    int total_cids = sizeof(st[0].cid) / sizeof(st[0].cid[0]);

    for (int i = 0; i < total_cids; i++) {
        printf("CID %d: %d\n", i + 1, st[0].cid[i]);
    }

    return 0;
}