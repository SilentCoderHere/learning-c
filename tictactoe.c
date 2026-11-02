#include <stdio.h>

void printBoard(const int board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            char character;
            int number = board[i][j];
            if (number == -1)
            {
                int row = i * 3 + j + 1;
                printf("%d  ", row);
                continue;
            }
            else if (number == 1)
                character = 'O';
            else
                character = 'X';
            printf("%c  ", character);
        }
        printf("\n");
    }
}

void bestBoard(const int b[3][3])
{
    printf(" %d | %d | %d\n", b[0][0], b[0][1], b[0][2]);
    printf("————————\n");
    printf(" %d | %d | %d\n", b[1][0], b[1][1], b[2][2]);
    printf("————————\n");
    printf(" %d | %d | %d\n", b[2][0], b[2][1], b[2][2]);
}

int checkWinner(const int b[3][3]) {
    if (b[0][0] == b[0][1] == b[0][2] == 0) {
        return 1;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int board[3][3] = {
        {-1, -1, -1},
        {-1, -1, -1},
        {-1, -1, -1},
    };

    int position;

    while (1 == 1)
    {
        printBoard(board);
        printf("Enter your position: ");
        scanf("%d", &position);

        if (9 < position)
        {
            printf("Out of range\n");
            continue;
        }

        else if (1 > position)
        {
            printf("Out of range\n");
            continue;
        }

        int i = position / 3;
        int j = (position % 3) - 1;

        if (!board[i][j])
        {
            printf("The place is all ready filled\n");
        }

        board[i][j] = 0;
        
        if (checkWinner(board) == 1) {
            printf("Hello\n");
        }
    }
}