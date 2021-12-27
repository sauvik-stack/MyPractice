/*
The fibonacci series is a very common program which is taught to the beginners in various programming courses. Generally as a beginner, the student's usual goal is to print a number from the fibonacci series using recursive function. But there are also some insights which are generally missed out by the students as they are just beginners. And those insights are huge, not at ll ignorable if one wants to grab a very strong foundation.
1. Recursive function can only get you a single number, not a whole series.
2. That's why, the main function have to call the fuction multiple time, then each time the fuction calls itself multiple times, in short, the recursive function works in two loops, one loop in the main function and the other is the loop of recursions.
3. On the other hand iterative method can be called once, and inside that function a loop can print all the numbers from the series.
4. In real world scenario, user and do a bunch of errors, while giving the input, as students, we usually ignore that section of the program where the program encouters an unexpected input value. In real world exception handling is much more needed than we anticipate.
*/
//declaration of header files

#include<stdio.h>
#include<conio.h>

// functions declaration
// without definition
int inputIndex();   //index input function declation
int inputChoice();  //method choice input function declaration
int fibRec(int);    //recursive method function declaration
int fibItr(int);    //iterative method function declaration
// with definition
int retry()     //user option for repeating the whole program, function declaration with definition
{
    char ch;
    printf("\n\nDo you want to try again???\n"); //asking the user to repeat
    printf("Y/N: \n");
    scanf(" %c", &ch);
    if ((ch=='y') || (ch=='Y'))         //check for user input for repetition
    {
        return 0;
    }
    else if ((ch=='n')|| (ch=='N'))
    {
        printf("..... Exiting Now.....");
        return 1;
    }
    else
    {
        printf("\nInvalid Choice");
        return 1;
    }
}

int main()      //main function starts
{
    int choice, loop, index;        //main variables declarations
    while(1)        //looping the whole program
    {
        index= inputIndex();        //calls a function to take index input


        if(index==0)        //cancel out 0 numbers print
        {
            printf("\n0 numbers printed.\n");
            printf("..... Exiting Now.....");
            return 0;
        }

        choice= inputChoice();      //calls a function to take method choice input

//checking for method choice by user
        if (choice==1)
        {
            printf("Printing using recursive method:\n");
            for(loop=1; loop<=index; loop++)    //looping the recursive method to print the whole series
            {
                printf("%d", fibRec(loop));     //calls for recursive function
                if (loop<index)     //check to put a comma(",") after each print except the last number
                {
                    printf(", ");
                }

            }
        }
        else if (choice==2)
        {
            printf("Printing using Iterative method:\n");
            fibItr(index);      //calls out the iterative method
        }
        else
        {
            printf(".....Exiting Now.....");    //exits the program if the user opts for, from given choices or too many failed attempts
            return 0;
        }
        if(retry())         //checks if the user want to repeat the program in the loop by calling the retry function
        {
            break;          //if user refuse to repeat break the loop and exit the program
        }
        else
        {
            continue;       //if user wants to repeat, continue the loop from the beggining
        }

    }
    getch();
}

int inputIndex()        //index input function definition
{
    //function variable declarations
    float n;
    int check, count=0;
    char ch;
    while(1)        //loop for trying to take appropriate input upto a limited times
    {
        printf("\nEnter the index number to print the series upto:\n");
        scanf("%f", &n);
        count++;    //counter increment to limit number of attempts to input proper index
        check=(int)n;   //converting the float to int for future checking
        if (count<6)    //checking the number of attempts and providing a limit to that
        {
            if (check!=n)   //checking if the index input was float or integer
            {
                //runs if the input was a float or anything other than an integer
                printf("Sorry, we can't take that as an Index, the Index should be whole integer.\n");
                printf("Retry??\nY/N: \n");   //asking user for retrying
                scanf(" %c", &ch);
                if ((ch=='y') || (ch=='Y'))     //checking user input
                {
                    continue;       //if users wants to retry, repeat the loop if the limit permits
                }
                else if ((ch=='n')|| (ch=='N'))
                {
                    return 0;       //if the user declines, the index becomes 0, which is already cancelled out.
                }
                else
                {
                    printf("\ninvalid choice"); // exception handling as invalid choice, index also becomes 0 as previous case
                    return 0;
                }
            }
            if (n<0)   //checking if the index input is a negative integer
            {
                //runs if the index is a negative number
                printf("\nSorry, we can't print the series upto a negative index (%d)", ((int)n));
                printf("\nRetry??\nY/N: \n");       //asking for retry in case of wrong input, same as previous checks
                scanf(" %c", &ch);
                if ((ch=='y') || (ch=='Y'))
                {
                    continue;       //if users wants to retry, repeat the loop if the limit permits
                }
                else if ((ch=='n')|| (ch=='N'))
                {
                    return 0;       //if the user declines, the index becomes 0, which is already cancelled out.
                }
                else
                {
                    printf("\ninvalid choice"); // exception handling as invalid choice, index also becomes 0 as previous case
                    return 0;
                }
            }
            else            //runs if user inputs a positive integer
            {
                return check;   //index becomes user input taken successfully
            }

        }
        else        //runs if the limit of failed attempts crosses the limit, index becomes 0
        {
            printf("!!Too many failed attempts!!");
            return 0;
        }

    }
}

int inputChoice()           //function definition for users' choice of method
{
    int n,c=0;  //local variables declarations
    while(1)        //loop to attempt to take proper choice from the available list, of course a limited number of times
    {
    printf("\tChoices:\n\t1.\tRecursive Method\n\t2.\tIterative Method\n\t3.\tExit\n"); //giving the user choices
    scanf("%d", &n);
    c++;        // counter to limit the number of attempts to put right choice
    if(n!=1 && n!=2 && n!=3)        //checking the user input
    {
        if(c<=5)        //putting the limit to number of attempts
        {
            printf("Invalid Choice. Try again from the choice list below.\n(1/2/3)\n"); // telling the user to try again
            continue;
        }
        else    // runs when attempts limit crossed
        {
            printf("!!Too many failed attempts!!");
            return 3;   //choice becomes 3 which exits the program
        }
    }
    else    //runs if correct choice is given from the list
    {
        return n;  //choice becomes the user input
    }
    }

}

int fibRec(int n)   //recursive function definition
{
    if (n==1 || n==2)   //declaring the base case to prevent infinite recursions
    {
        return (n-1);   //n-1 because 0 is the 1st number and 1 is the second, 0 should be cancelled out
    }
    else
    {
        return (fibRec(n-1) + fibRec(n-2)); //recursion of the function
    }
}

int fibItr(int n)       //Iterative method function definition
{
    int a=0,b=1,c,i;    //local variables declarations
    for (i=1;i<=n;i++)  //loop to print the whole series
    {
        printf("%d", a);    //printing the current index value
        c=a+b;              //prepare the next upcoming value
        a=b;                //take the next print value in to the variable which gets printed
        b=c;                //take the upcoming value for next iteration
        if (i<n)            //check to put a comma(",") after each print except the last number
        {
            printf(", ");
        }

    }
}
