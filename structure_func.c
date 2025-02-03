/*
passing structure to function
1)pass structure to fucntion using call by value




*/

#include <stdio.h>
struct bank
{
    int id;
    char bank_name[20];
    float bank_branch;
};

void display(struct bank b)
{
    //b.id = 5;
    printf("bank id=%d\n", s.id);
    printf("bank name =%s\n", s.student_name);
    printf("bank branch=%f", s.);
}

int main()
{
    struct student s1 = {1, "john", 23.45};
    // passing the structure using call by value
    display(s1);
    printf("student id=%d\n", s1.id);
}
