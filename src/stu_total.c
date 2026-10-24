#include <stdio.h>
#include "stu_total.h"

void total_students(int *num) {
    printf("The total number of students is: %d.\n", *num);
    printf("The max number of students you can have is: 50.\n");
    printf("You are currently %d students away from max!\n", 50 - *num);
}