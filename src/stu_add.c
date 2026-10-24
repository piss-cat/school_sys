#include <stdio.h>
#include "stu_add.h"
#include "stu_info.h"

void add_student(int *num) {
    // Tell user what to expect
    printf("Add student details\n");
    printf("----------------------\n");
    
    // Take in student first name
    printf("Enter student first name: ");
    scanf("%s", st[*num].fname);

    // Take in student last name
    printf("Enter student last name: ");
    scanf("%s", st[*num].lname);

    // Take in roll number
    printf("Enter roll number: ");
    scanf("%d", &st[*num].roll);

    // Take in CGPA number
    printf("Enter CGPA obtained: ");
    scanf("%f", &st[*num].cgpa);

    // Tell user what to expect
    printf("Enter course ID for each course:\n");

    // Use loop to take in course ID for 5 courses
    for (int i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%d", &st[*num].cid[i]);
    }

    // Increment num students
    (*num)++;
}