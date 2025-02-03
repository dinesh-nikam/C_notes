// #include <stdio.h>

// int main()
// {
//     // switch case not work with constant  because folat value not constant
//     int a, b;
//     char ch;
    // printf("enter the character ");
    // scancf("%c",&ch);
    // printf("*****************menu******************\n");
    // printf("+. addition -. substraction *. multiplication /. division\n");
//     printf(" enter our choice\n");
//     scanf("%c", &ch);

//     switch (ch)
//         {
//         case '+':
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("addition is %d", (a + b));
//             break;

//         case '-':
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("substraction is %d", (a - b));
//             break;

//         case '*':
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("multiplication is %d", (a * b));
//             break;

//         case '/':
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("division is %d", (a / b));
//             break;

//         default:
//             printf("you entered wrong choice");
//             break;
//         }
// }
// printf("*****************menu******************\n");
//     printf("10. addition 20. substraction 30. multiplication 40. division\n");

// printf(" enter our choice\n");
//     scanf("%d", &ch);

//     switch (ch)
//         {
//         case 5+5:
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("addition is %d", (a + b));
//             break;

//         case 15+5:
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("substraction is %d", (a - b));
//             break;

//         case 15+15:
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("multiplication is %d", (a * b));
//             break;

//         case 30+10:
//             printf("enter the value a & b");
//             scanf("%d %d", &a, &b);
//             printf("division is %d", (a / b));
//             break;

//         default:
//             printf("you entered wrong choice");
//             break;
//         }
// }
/*switch case:- check multiple condition
synatx:
switch (expresion)
{
case case_name:
  //case body
  break;
  . 
  .  
  default:
  }*/
 #include<stdio.h>
 #include<math.h>
 int main()
 {
  int ch,r,l,b,s,area;
  char ans;
  const float pi=3.14;
  do{
  printf("______________MENU_____________\n");
  printf("1. circle area \n 2. rectangle area \n 3. square area\n");
  printf("Enter your choice\n");
  scanf("%d",&ch);
  
  switch(ch)
  {
    case 1:
    printf("Enter the value of radius\n");
    scanf("%d",&r);
    area=pi*pow(r,2);
    printf("area of circle =%d",area);
    break;

    case 2:
    printf("enter the length and bredth \n");
    scanf("%d %d", &l,&b);
    area=l*b;
    printf("area of rectangle is %d",area );
    break;

    case 3:
    printf("enter the sides value \n");
    scanf("%d", &s);
    area= s*s;
    printf("squrae  area is %d");
    break;


    default:
    printf("you provide wrong choice");


  }
  printf("do you want to perform operation ...?(Y|N)");
  scanf(" %c", &ans);
  }while(ans == 'Y');

 }