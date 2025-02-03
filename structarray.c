#include <stdio.h>
#include <string.h>
struct student_details
{
    char student_name[12];
    int roll_no;
    int marks;
};

int main()
{
    struct student_details s1[3]; // 60
    // printf("%d", sizeof(s1));
    printf("enter the student details\n");
    for (int i = 0; i < 3; i++)
    {
        printf("enter the %d student name\n", i + 1);
        scanf("%s", &s1[i].student_name);
        printf("enter the %d student roll no\n ", i + 1);
        scanf("%d", &s1[i].roll_no);
        printf("enter %d student marks\n", i + 1);
        scanf("%d", &s1[i].marks);
    }
    printf("******************studnet detils*************************\n");
    for (int i = 0; i < 3; i++)
    {
        printf("student name=%s\n", s1[i].student_name);
        printf("student marks=%d\n", s1[i].marks);
        printf("student roll no =%d\n", s1[i].roll_no);
        printf("**********************************************\n");
    }
}