#include <stdio.h>
#include <conio.h>
char board[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void system();
void printboard()
{
    system("cls");
    printf("\n\n*** LETS START THE GAME ***\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
    printf("   |   |   \n\n");
}

int checkwin()
{
    if (board[1] == board[2] && board[2] == board[3])
    {
        return 1;
    }
    if (board[1] == board[4] && board[4] == board[7])
    {
        return 1;
    }
    if (board[7] == board[8] && board[8] == board[9])
    {
        return 1;
    }
    if (board[3] == board[6] && board[6] == board[9])
    {
        return 1;
    }
    if (board[3] == board[5] && board[5] == board[7])
    {
        return 1;
    }
    if (board[1] == board[5] && board[5] == board[9])
    {
        return 1;
    }
    if (board[2] == board[5] && board[5] == board[8])
    {
        return 1;
    }
    if (board[4] == board[5] && board[5] == board[6])
    {
        return 1;
    }
    int counter = 0;

    for (int i = 1; i <= 9; i++)
    {
        if (board[i] == 'x' || board[i] == 'o')
        {
            counter++;
        }
        if (counter == 9)
        {
            return 0;
        }
    }

    return -1;
}
int main()
{
    int player = 1, input, status = -1;
    printboard();

    while (status == -1)
    {
        player = (player % 2==0) ? 2 : 1;
        char mark = (player == 1) ? 'x' : 'o';
        printf("Please Enter Number For Player %d : ", player);
        scanf("%d", &input);
        if (input < 1 || input > 9)
        {
            printf("\nEnter valid position\n");
        }
            board[input] = mark;
        printboard();
        int result = checkwin();
        if (result == 1)
        {
            printf("\nPlayer %d is Winner....\n", player);
            return 0;
        }
        else if (result==0)
        {
            printf("\nDraw!!");
            return 0;
        }

        player++;
    }
    return 0;
}
// OUTPUT
/*

*** LETS START THE GAME ***

   |   |
 x | x | x
___|___|___
   |   |
 o | o | 6
___|___|___
   |   |
 o | 8 | x
   |   |


Player 1 is Winner....
*/