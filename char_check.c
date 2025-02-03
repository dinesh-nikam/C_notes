#include<stdio.h>
int main(){
//     4. Check if a Character is a Vowel or Consonant
// Use logical operators and if-else to classify the character.
char word  ;
printf("enter any character");
scanf("%c", &word);
if (word=='a' || word== 'e' || word =='i' || word== 'o'|| word =='u'||
word=='A' || word== 'E' || word =='I' || word== 'O'|| word =='U'){
    printf("the character is vowel");

}
else
{
printf("the character is Consonant");
}


}