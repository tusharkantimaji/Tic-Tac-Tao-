#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
char first_player[50], second_player[50];
int choice_1, choice_2, finalchoice, load;
char num_1='a';
char num_2='b';
char num_3='c';
char num_4='d';
char num_5='e';
char num_6='f';
char num_7='g';
char num_8='h';
char num_9='i';
int count = 1;
int count_2 = 1;
void welcome_detailsofuser ();
void formate ();
void decetion ();
void win_loss_decetion ();
int main ()
{
    welcome_detailsofuser ();
    formate();
    while (count!=9+1)
    {
        decetion ();
        formate ();
        win_loss_decetion();
    }
    return 0;
}
void welcome_detailsofuser ()
{
    int i;
    printf ("\n\n\n\t\tWelcome you to this small TIC TAO TAO game...");
    printf ("\n\n\t\t\tEnter any key to continue.......");
    getch ();
    printf  ("\n\n\n\t\t\t\t\t         \tLoading...\n\n\t\t\t\t");
    for (load=0; load<=50; load++)
    {
        for (i=0; i<10000000;i++)
            continue;
        printf ("%c", 177);
    }
    getch ();
    system ("cls");
    printf ("\n\n\n\tEnter the name of the first player >> ");
    scanf("%s", &first_player);
    printf ("\n\t\t\t1. *\n\t\t\t2. #\n\t\t\t3. @\n\t\t\t4. &\n\t\tEnter your favourite sign >> ");
    level1:
    scanf ("%d", &choice_1);
    if (choice_1!=1 && choice_1!=2 && choice_1!=3 && choice_1!=4 )
    {
        printf ("\n\t\tWrong Input.\n\t\tenter again >> ");
        goto level1;
    }
    printf ("\n\n\tEnter the name of the second player >> ");
    scanf ("%s", &second_player);
    if (choice_1==1)
    {
        printf ("\n\t\t\t1. *(already selected).\n\t\t\t2. #\n\t\t\t3. @\n\t\t\t4. &\n\t\tEnter your Favourite  sign >> ");
        level2:
        scanf ("%d", &choice_2);
        if (choice_2!=2 && choice_2!=3 && choice_2!=4 )
        {
           printf ("\n\t\tWrong Input.\n\t\tenter again >> ");
           goto level2;
        }
    }
    else if (choice_1==2)
    {
        printf ("\n\t\t\t1. *\n\t\t\t2. #(already selected).\n\t\t\t3. @\n\t\t\t4. &\n\t\tEnter your Favourite  sign >> ");
        level3:
        scanf ("%d", &choice_2);
        if (choice_2!=1 && choice_2!=3 && choice_2!=4 )
        {
           printf ("\n\t\tWrong Input.\n\t\tenter again >> ");
           goto level3;
        }
    }
    else if (choice_1==3)
    {
        printf ("\n\t\t\t1. *\n\t\t\t2. #\n\t\t\t3. @(already selected).\n\t\t\t4. &\n\t\tEnter your Favourite  sign >> ");
        level4:
        scanf ("%d", &choice_2);
        if (choice_2!=1 && choice_2!=2 && choice_2!=4 )
        {
           printf ("\n\t\tWrong Input.\n\t\tenter again >> ");
           goto level4;
        }
    }
    else if (choice_1==4)
    {
        printf ("\n\t\t\t1. *\n\t\t\t2. #\n\t\t\t3. @\n\t\t\t4. &(already selected).\n\t\tEnter your Favourite  sign >> ");
        level5:
        scanf ("%d", &choice_2);
        if (choice_2!=1 && choice_2!=2 && choice_2!=3 )
        {
           printf ("\n\t\tWrong Input.\n\t\tenter again >> ");
           goto level5;
        }
    }
}
void formate ()
{
    system ("cls");
    printf ("\n\n\t\t\t\t\tTIC TAC TAO\n\t\t\t\t------------------------------\n\n\t\t\t\tFirst Player =   ");
    puts(first_player);
    printf ("\n\t\t\t\tSecond Player =   ");
    puts(second_player);
    printf ("\n\n\n\t\t\t\t  \t|\t \t|\t \t\t\t\n\t\t\t    -------------------------------------------\n\n");
    {
    if (num_1 == 'a' && num_2 == 'b' && num_3 =='c')
        printf ("\t\t\t\t 1\t|\t2\t|\t3\n\t\t\t    -------------------------------------------\n\n");
    else if (num_1 != 'a' && num_2 == 'b' && num_3 =='c')
        printf ("\t\t\t\t %c\t|\t2\t|\t3\n\t\t\t    -------------------------------------------\n\n", num_1);
    else if (num_1 == 'a' && num_2 != 'b' && num_3 =='c')
        printf ("\t\t\t\t 1\t|\t%c\t|\t3\n\t\t\t    -------------------------------------------\n\n", num_2);
    else if (num_1 == 'a' && num_2 == 'b' && num_3 !='c')
        printf ("\t\t\t\t 1\t|\t2\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_3);
    else if (num_1 != 'a' && num_2 != 'b' && num_3 =='c')
        printf ("\t\t\t\t %c\t|\t%c\t|\t3\n\t\t\t    -------------------------------------------\n\n", num_1, num_2);
    else if (num_1 == 'a' && num_2 != 'b' && num_3 !='c')
        printf ("\t\t\t\t 1\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_2, num_3);
    else if (num_1 != 'a' && num_2 == 'b' && num_3 !='c')
        printf ("\t\t\t\t %c\t|\t2\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_1, num_3);
    else if (num_1 != 'a' && num_2 != 'b' && num_3 !='c')
        printf ("\t\t\t\t %c\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_1, num_2, num_3);
    }
    {
    if (num_4 == 'd' && num_5 == 'e' && num_6 =='f')
        printf ("\t\t\t\t 4\t|\t5\t|\t6\n\t\t\t    -------------------------------------------\n\n");
    else if (num_4 != 'd' && num_5 == 'e' && num_6 =='f')
        printf ("\t\t\t\t %c\t|\t5\t|\t6\n\t\t\t    -------------------------------------------\n\n", num_4);
    else if (num_4 == 'd' && num_5 != 'e' && num_6 =='f')
        printf ("\t\t\t\t 4\t|\t%c\t|\t6\n\t\t\t    -------------------------------------------\n\n", num_5);
    else if (num_4 == 'd' && num_5 == 'e' && num_6 !='f')
        printf ("\t\t\t\t 4\t|\t5\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_6);
    else if (num_4 != 'd' && num_5 != 'e' && num_6 =='f')
        printf ("\t\t\t\t %c\t|\t%c\t|\t6\n\t\t\t    -------------------------------------------\n\n", num_4, num_5);
    else if (num_4 == 'd' && num_5 != 'e' && num_6 !='f')
        printf ("\t\t\t\t 4\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_5, num_6);
    else if (num_4 != 'd' && num_5 == 'e' && num_6 !='f')
        printf ("\t\t\t\t %c\t|\t5\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_4, num_6);
    else if (num_4 != 'd' && num_5 != 'e' && num_6 !='f')
        printf ("\t\t\t\t %c\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n\n", num_4, num_5, num_6);
    }
    {
    if (num_7 == 'g' && num_8 == 'h' && num_9 =='i')
        printf ("\t\t\t\t 7\t|\t8\t|\t9\n\t\t\t    -------------------------------------------\n");
    else if (num_7 != 'g' && num_8 == 'h' && num_9 =='i')
        printf ("\t\t\t\t %c\t|\t8\t|\t9\n\t\t\t    -------------------------------------------\n", num_7);
    else if (num_7 == 'g' && num_8 != 'h' && num_9 =='i')
        printf ("\t\t\t\t 7\t|\t%c\t|\t9\n\t\t\t    -------------------------------------------\n", num_8);
    else if (num_7 == 'g' && num_8 == 'h' && num_9 !='i')
        printf ("\t\t\t\t 7\t|\t8\t|\t%c\n\t\t\t    -------------------------------------------\n", num_9);
    else if (num_7 != 'g' && num_8 != 'h' && num_9 =='i')
        printf ("\t\t\t\t %c\t|\t%c\t|\t9\n\t\t\t    -------------------------------------------\n", num_7, num_8);
    else if (num_7 == 'g' && num_8 != 'h' && num_9 !='i')
        printf ("\t\t\t\t 7\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n", num_8, num_9);
    else if (num_7 != 'g' && num_8 == 'h' && num_9 !='i')
        printf ("\t\t\t\t %c\t|\t8\t|\t%c\n\t\t\t    -------------------------------------------\n", num_7, num_9);
    else if (num_7 != 'g' && num_8 != 'h' && num_9 !='i')
        printf ("\t\t\t\t %c\t|\t%c\t|\t%c\n\t\t\t    -------------------------------------------\n", num_7, num_8, num_9);
    }
    printf ("\t\t\t\t  \t|\t \t|\t \t\t\t\n");
}
void decetion ()
{
    if (count%2==1)
    {
    printf ("\n %s, please enter the choice >> ", first_player);
    scanf ("%d", &finalchoice);
    if (finalchoice == 1)
    {
        if (choice_1 == 1)
        num_1 = '*';
    else if (choice_1 == 2)
        num_1 = '#';
    else if (choice_1 == 3)
        num_1 = '@';
    else if (choice_1 == 4)
        num_1 = '&';
    }
    else if (finalchoice == 2)
    {
        if (choice_1 == 1)
        num_2 = '*';
    else if (choice_1 == 2)
        num_2 = '#';
    else if (choice_1 == 3)
        num_2 = '@';
    else if (choice_1 == 4)
        num_2 = '&';
    }
    else if (finalchoice == 3)
    {
        if (choice_1 == 1)
        num_3 = '*';
    else if (choice_1 == 2)
        num_3 = '#';
    else if (choice_1 == 3)
        num_3 = '@';
    else if (choice_1 == 4)
        num_3 = '&';
    }
    else if (finalchoice == 4)
    {
        if (choice_1 == 1)
        num_4 = '*';
    else if (choice_1 == 2)
        num_4 = '#';
    else if (choice_1 == 3)
        num_4 = '@';
    else if (choice_1 == 4)
        num_4 = '&';
    }
    else if (finalchoice == 5)
    {
        if (choice_1 == 1)
        num_5 = '*';
    else if (choice_1 == 2)
        num_5 = '#';
    else if (choice_1 == 3)
        num_5 = '@';
    else if (choice_1 == 4)
        num_5 = '&';
    }
    else if (finalchoice == 6)
     {
         if (choice_1 == 1)
        num_6 = '*';
    else if (choice_1 == 2)
        num_6 = '#';
    else if (choice_1 == 3)
        num_6 = '@';
    else if (choice_1 == 4)
        num_6 = '&';
     }
    else if (finalchoice == 7)
    {
        if (choice_1 == 1)
        num_7 = '*';
    else if (choice_1 == 2)
        num_7 = '#';
    else if (choice_1 == 3)
        num_7 = '@';
    else if (choice_1 == 4)
        num_7 = '&';
    }
    else if (finalchoice == 8)
    {
        if (choice_1 == 1)
        num_8 = '*';
    else if (choice_1 == 2)
        num_8 = '#';
    else if (choice_1 == 3)
        num_8 = '@';
    else if (choice_1 == 4)
        num_8 = '&';
    }
    else if (finalchoice == 9)
    {
        if (choice_1 == 1)
        num_9 = '*';
    else if (choice_1 == 2)
        num_9 = '#';
    else if (choice_1 == 3)
        num_9 = '@';
    else if (choice_1 == 4)
        num_9 = '&';
    }
    }
    else if (count%2==0)
    {
    printf ("\n %s, please enter the choice >> ", second_player);
    scanf ("%d", &finalchoice);
    if (finalchoice == 1)
    {
    if (choice_2 == 1)
        num_1 = '*';
    else if (choice_2 == 2)
        num_1 = '#';
    else if (choice_2 == 3)
        num_1 = '@';
    else if (choice_2 == 4)
        num_1 = '&';
    }
    else if (finalchoice == 2)
    {
        if (choice_2 == 1)
        num_2 = '*';
    else if (choice_2 == 2)
        num_2 = '#';
    else if (choice_2 == 3)
        num_2 = '@';
    else if (choice_2 == 4)
        num_2 = '&';
    }
    else if (finalchoice == 3)
    {
        if (choice_2 == 1)
        num_3 = '*';
    else if (choice_2 == 2)
        num_3 = '#';
    else if (choice_2 == 3)
        num_3 = '@';
    else if (choice_2 == 4)
        num_3 = '&';
    }
    else if (finalchoice == 4)
    {
        if (choice_2 == 1)
        num_4 = '*';
    else if (choice_2 == 2)
        num_4 = '#';
    else if (choice_2 == 3)
        num_4 = '@';
    else if (choice_2 == 4)
        num_4 = '&';
    }
    else if (finalchoice == 5)
    {
        if (choice_2 == 1)
        num_5 = '*';
    else if (choice_2 == 2)
        num_5 = '#';
    else if (choice_2 == 3)
        num_5 = '@';
    else if (choice_2 == 4)
        num_5 = '&';
    }
    else if (finalchoice == 6)
    {
        if (choice_2 == 1)
        num_6 = '*';
    else if (choice_2 == 2)
        num_6 = '#';
    else if (choice_2 == 3)
        num_6 = '@';
    else if (choice_2 == 4)
        num_6 = '&';
    }
    else if (finalchoice == 7)
    {
        if (choice_2 == 1)
        num_7 = '*';
    else if (choice_2 == 2)
        num_7 = '#';
    else if (choice_2 == 3)
        num_7 = '@';
    else if (choice_2 == 4)
        num_7 = '&';
    }
    else if (finalchoice == 8)
    {
        if (choice_2 == 1)
        num_8 = '*';
    else if (choice_2 == 2)
        num_8 = '#';
    else if (choice_2 == 3)
        num_8 = '@';
    else if (choice_2 == 4)
        num_8 = '&';
    }
    else if (finalchoice == 9)
    {
        if (choice_2 == 1)
        num_9 = '*';
    else if (choice_2 == 2)
        num_9 = '#';
    else if (choice_2 == 3)
        num_9 = '@';
    else if (choice_2 == 4)
        num_9 = '&';
    }
    }
    count+=1;
}
void win_loss_decetion ()
{
    if ((num_1==num_2)&&(num_2==num_3))
    {
        if (((num_1=='*')&&(choice_1==1))||((num_1=='#')&&(choice_1==2))||((num_1=='@')&&(choice_1==3))||((num_1=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_1=='*')&&(choice_2==1))||((num_1=='#')&&(choice_2==2))||((num_1=='@')&&(choice_2==3))||((num_1=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_4==num_5)&&(num_5==num_6))
    {
        if (((num_4=='*')&&(choice_1==1))||((num_4=='#')&&(choice_1==2))||((num_4=='@')&&(choice_1==3))||((num_4=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_4=='*')&&(choice_2==1))||((num_4=='#')&&(choice_2==2))||((num_4=='@')&&(choice_2==3))||((num_4=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_7==num_8)&&(num_8==num_9))
    {
        if (((num_7=='*')&&(choice_1==1))||((num_7=='#')&&(choice_1==2))||((num_7=='@')&&(choice_1==3))||((num_7=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_7=='*')&&(choice_2==1))||((num_7=='#')&&(choice_2==2))||((num_7=='@')&&(choice_2==3))||((num_7=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_1==num_4)&&(num_4==num_7))
    {
        if (((num_1=='*')&&(choice_1==1))||((num_1=='#')&&(choice_1==2))||((num_1=='@')&&(choice_1==3))||((num_1=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_1=='*')&&(choice_2==1))||((num_1=='#')&&(choice_2==2))||((num_1=='@')&&(choice_2==3))||((num_1=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_2==num_5)&&(num_5==num_8))
    {
        if (((num_2=='*')&&(choice_1==1))||((num_2=='#')&&(choice_1==2))||((num_2=='@')&&(choice_1==3))||((num_2=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_2=='*')&&(choice_2==1))||((num_2=='#')&&(choice_2==2))||((num_2=='@')&&(choice_2==3))||((num_2=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_3==num_6)&&(num_6==num_9))
    {
        if (((num_3=='*')&&(choice_1==1))||((num_3=='#')&&(choice_1==2))||((num_3=='@')&&(choice_1==3))||((num_3=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_3=='*')&&(choice_2==1))||((num_3=='#')&&(choice_2==2))||((num_3=='@')&&(choice_2==3))||((num_3=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_1==num_5)&&(num_5==num_9))
    {
        if (((num_1=='*')&&(choice_1==1))||((num_1=='#')&&(choice_1==2))||((num_1=='@')&&(choice_1==3))||((num_1=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_1=='*')&&(choice_2==1))||((num_1=='#')&&(choice_2==2))||((num_1=='@')&&(choice_2==3))||((num_1=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((num_3==num_5)&&(num_5==num_7))
    {
        if (((num_3=='*')&&(choice_1==1))||((num_3=='#')&&(choice_1==2))||((num_3=='@')&&(choice_1==3))||((num_3=='&')&&(choice_1==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", first_player);
        else if (((num_3=='*')&&(choice_2==1))||((num_3=='#')&&(choice_2==2))||((num_3=='@')&&(choice_2==3))||((num_3=='&')&&(choice_2==4)))
            printf ("\n\n\t\t\tCONGRATULATION  %s  !! You have won the match\n\n\t\t\t\tTHANKING YOU\n\n\n\n", second_player);
        count_2 = 2;
        exit (0);
    }
    if ((count==10) && (count_2 !=2))
    {
        printf ("\n\n\t\t\tSORRY !! Match Draw\n\n\t\t\tBest Luck For The Next Opportunities.\n\n\t\t\t\tTHANKKING YOU\n\n\n\n");
        exit (0);
    }
}
