#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
char r = 'y';
int user_score = 0, comp_score = 0;
char user_name[34];
int rand_choice(int n) // Generate Random Number from 0 upto 3
{
    srand(time(NULL));
    return rand() % n;
}
int user_ch(char user_name[])
{
    int choice;
    printf("Hi ");
    puts(user_name);
    printf("Please choose one:\n\n");
    scanf("%d", &choice);
    if (choice < 1 || choice > 3)
    {
        printf("\nWrong choice input, Taking Random...");
        choice = rand_choice(3);
    }
    if (choice == 1)
    {
        printf("\nYou choose Rock.");
    }
    if (choice == 2)
    {
        printf("\nYou choose Paper.");
    }
    if (choice == 3)
    {
        printf("\nYou choose Scissors.");
    }
    return choice;
}
int game(int user, int comp, int i)
{
    extern int user_score, comp_score;
    extern char user_name[34];
    if (user == comp)
    {
        printf("\n\nIts a tie\n");
    }
    else if ((comp == 1 && user == 2) || (comp == 2 && user == 3) || (comp == 3 && user == 1))
    {
        user_score++;
        printf("\n\n%s Wins.\n", user_name);
    }
    else if ((user == 1 && comp == 2) || (user == 2 && comp == 3) || (user == 3 && comp == 1))
    {
        comp_score++;
        printf("\n\nComputer Wins.\n");
    }
    printf("\nYour Score= %d\nComputer's score= %d\n", user_score, comp_score);
    if (i < 2)
    {
        printf("\n.....Press any key to continue....\n\n");
        getch();
    }
}
int main()
{
    while (r == 'Y' || r == 'y')
    {
        int user_choice, comp_choice, i = 0;
        int rule;
        printf("Enter you name\n");
        gets(user_name);
        printf("\nHello %s! Welcome to Rock Paper Scissors Game.", user_name);
        printf("\n\nWe shall Play 3 rounds to get the Final Results.");
        printf("\nDo you want to know the rules of the game??\n1.Yes\n2.No\n");
        scanf("%d", &rule);
        if (rule == 1)
        {
            printf("\n:=RULES=:\nRock vs Paper => Paper wins"); // 1 vs 2 = 2 wins
            printf("\nPaper vs Scissors => Scissors wins");     // 2 vs 3 = 3 wins
            printf("\nScissors vs Rock => Rock wins\n");        // 3 vs 1 = 1 wins
            printf("\n.....Press any key to continue....\n\n");
            getch();
        }
        while (i < 3)
        {
            printf("\nRound %d", i + 1);
            printf("\nChoices are given in the list below:\n");
            printf("1. Rock\n");
            printf("2. Paper\n");
            printf("3. Scissors\n\n");
            user_choice = user_ch(user_name);
            comp_choice = rand_choice(3) + 1;
            if (comp_choice == 1)
            {
                printf("\nComputer choose Rock.");
            }
            if (comp_choice == 2)
            {
                printf("\nComputer choose Paper.");
            }
            if (comp_choice == 3)
            {
                printf("\nComputer choose Scissors.");
            }
            game(user_choice, comp_choice, i);
            i++;
        }
        if (comp_score > user_score)
        {
            printf("\nComputer Wins the Match");
        }
        else if (comp_score < user_score)
        {
            printf("\n%s Wins the Match");
        }
        else if (comp_score == user_score)
        {
            printf("\nMatch ends with a Draw");
        }
        user_score = 0;
        comp_score = 0;
        printf("\n\nDo you want to play the game again??\n(Y/N)\n");
        scanf(" %c", &r);
    }
    printf(".... Exiting.... Press any key to Exit");
    getch();
    return 0;
}