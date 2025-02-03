#include <stdio.h>
#include <string.h>
 struct student_details
// {
//     char student_name[12];
//     int roll_no;
//     int marks;

// } s1;
// int main()
// {
//     struct student_details s2;
//     printf("%d\n", sizeof(s1));
//     printf("%d\n", sizeof(s2));
// }
{
    char student_name[12];
    int roll_no;
    int marks;

}s1, s2;
int main()
{
printf("enter student name\n");
scanf("%s", &s1.student_name);
printf("enter student roll no\n");
scanf("%d", &s1.roll_no);
printf("enter student marks\n");
scanf("%d", &s1.marks);

printf("enter student name\n");
scanf("%s", &s2.student_name);
printf("enter student roll no\n");
scanf("%d", &s2.roll_no);
printf("enter student marks\n");
scanf("%d", &s2.marks);

printf("first student details\n");
printf("student name=%s\n",s1.student_name);
printf("student marks=%d\n", s1.marks);
printf("student roll no=%d\n", s1.roll_no);

printf("second student details\n");
printf("student name=%s\n",s2.student_name);
printf("student marks=%d\n", s2.marks);
printf("student roll no=%d\n", s2.roll_no);
}
