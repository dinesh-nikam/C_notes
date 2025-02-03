
//character array vs string

//string without string functin revision

//string:- collections of caharcters but its terminate with \0
//character array:- collections on multiple character




#include<stdio.h>
#include<string.h>
int main()
{
  /*char name[30]="C Programming Lnaguage";//string initialise


  /*for(int i=0;name[i]!='\0';i++)
  {
    printf("%c",name[i]);
  }*/


 char name[50];//string declare
 
 printf("Enter the string\n");
 scanf("%s",&name); //-- access the string without space
 scanf("%[^\n]%*c",&name);//accept the string with space
 printf("%s",name);//%s:---special format specifier for string
 printf("%c",name[0]);
}


/*
string fucntions
*/


//access the string fucntions
void main(int )
{
  char str1[]="hello";
  char str2[]="welcome";
  /*printf("Enter the string\n");
  scanf("%[^\n]%*c",&str1);*/
  //printf("%s",str1);
  //printf("length =%d\n",strlen(str1));//retrun length of string
  //printf("String reverse =%s\n",strrev(str1));
  //printf("%s\n",strcat(str2,str1));
  //printf("%d",strcmp(str1,str2));//same==-1  notsame=1
  strcpy(str1,str2);
  printf("%s\n",str1);
 
  printf("%s\n",strupr(str1));
  printf("%s\n",strlwr(str1));
 
}
