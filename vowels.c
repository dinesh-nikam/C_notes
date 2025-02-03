//  Print All Letters Except Vowels (using continue)
// Write a program to print all letters from the string except vowels using the continue statement.
#include<stdio.h>
int main(){
    int word;
    
    for( char ch= 'A'; ch>='A'; ch++){
        if (word=='a' || word== 'e' || word =='i' || word== 'o'|| word =='u'||
word=='A' || word== 'E' || word =='I' || word== 'O'|| word =='U'){
    continue;
}
printf(" %c ", ch);
}

}