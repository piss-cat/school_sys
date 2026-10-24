#include <stdio.h>
#include "stu_add.h"
#include "stu_info.h"

void add_student(int *num) {
    printf("Add student details\n");
    printf("----------------------\n");
    
    printf("Enter student first name: ");
    scanf("%s", st[*num].fname);

    printf("Enter student last name: ");
    scanf("%s", st[*num].lname);

    printf("Enter roll number: ");
    scanf("%d", &st[*num].roll);

    printf("Enter CGPA obtained: ");
    scanf("%f", &st[*num].cgpa);

    printf("Enter course ID for each course:\n");

    for (int i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%d", &st[*num].cid[i]);
    }

    (*num)++;
}