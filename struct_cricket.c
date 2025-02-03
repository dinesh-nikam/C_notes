/*
Problem:
Create a structure to store the details of cricket players
(name, matches played, total runs). Write a program to accept
the details of 5 players and display the details of the player
with the highest runs.
Input:
Name, matches played, and total runs of 5 players.
Output:
Display the details of the player with the highest runs.
Example Input:
Enter details of player 1:  
Name: Virat  
Matches Played: 250  
Total Runs: 12000  


Enter details of player 2:  
Name: Rohit  
Matches Played: 230  
Total Runs: 9500  


Enter details of player 3:  
Name: Dhoni  
Matches Played: 350  
Total Runs: 10500  


Enter details of player 4:  
Name: Rahul  
Matches Played: 180  
Total Runs: 7800  


Enter details of player 5:  
Name: Hardik  
Matches Played: 150  
Total Runs: 5400  


Example Output:
Player with the highest runs:  
Name: Virat, Matches Played: 250, Total Runs: 12000
*/
#include<stdio.h>
struct players
{
    char name[20];
    int matches_played;
    int total_runs;
    /* data */
};

int main()
{
    struct players p1[5];//28*5
   printf("enter the player details");
   for(int i=0;i<5; i++){
    printf("enter the %d player name",i+1);
    scanf("%s",&p1[i].name);
    printf("enter %d player matches played count ", i+1);
    scanf("%d",&p1[i].matches_played);
    printf("enter the %d player runs\n",i+1);
    scanf("%d",&p1[i].total_runs);


   }

   int max_runs=0, index=0;
   for(int i=0; i<5;i++){
    if(p1[i].total_runs>max_runs){
        max_runs=p1[i].total_runs;
        index=i;
    }
   }

   printf("player with highest runs\n");
   printf("player name=%s\n",p1[index].name);
   printf("player maches count=%d\n",p1[index].matches_played);
   printf("player runs %d",p1[index].total_runs);
    

}