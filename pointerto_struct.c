#include<stdio.h>
struct student
{
    int id;
    char student_name[20];
    float marks;

    /* data */
};


int main(){
struct student s1;
struct student *ptr=&s1;
printf("enter the student id\n");
scanf("%d",&ptr->id);
printf("enter the student name\n");
scanf("%s",&ptr->student_name);
printf("enter the student marks\n");
scanf("%d",&ptr->marks);

printf("student id =%d\n",ptr->id);
printf("student name=%s\n",ptr->student_name);
printf("student marks=%d\n",ptr->marks);
printf("%d",s1.id);



}