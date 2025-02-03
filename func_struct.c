
//call by value
// #include<stdio.h>
// struct student
// {
//     int marks;
//     char student_name[10];
//     int roll_no;

// }s1;

// void function( struct student s1 ){


// printf("student name=%s\n",s1.student_name);
// printf("stdent marks=%d\n",s1.marks);
// printf("student roll no =%d\n",s1.roll_no);

// }
// int main(){
//     printf(" student details\n");
//     printf("enter the stdent name\n");
// scanf("%s",&s1.student_name);
// printf("enter the student makrs\n");
// scanf("%d",&s1.marks);
// printf("enter the student roll no \n");
// scanf("%d",&s1.roll_no);
// function(s1);



// }


//call by reference
#include<stdio.h>
struct student
{
    int marks;
    char student_name[10];
    int roll_no;

}s1;

void function( struct student *s1 ){


printf("student name=%s\n",s1->student_name);
printf("stdent marks=%d\n",s1->marks);
printf("student roll no =%d\n",s1->roll_no);

}
int main(){
    printf("***************************student details**********************************\n");
    printf("enter the student name\n");
scanf("%s",&s1.student_name);
printf("enter the student makrs\n");
scanf("%d",&s1.marks);
printf("enter the student roll no \n");
scanf("%d",&s1.roll_no);
function(&s1);



}