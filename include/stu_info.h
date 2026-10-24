#ifndef STU_INFO_H
#define STU_INFO_H

struct StudentInfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[5];
};

extern struct StudentInfo st[55];

#endif