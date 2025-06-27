#include <stdio.h>

int main()
{
    // int marks[2][4];
    // marks[0][0] = 90;
    // marks[0][1] = 93;
    // marks[0][2] = 83;
    // marks[0][3] = 88;

    // marks[1][0] = 38;
    // marks[1][1] = 63;
    // marks[1][2] = 43;
    // marks[1][3] = 68;

    int marks[2][4] = { 
                        {90, 93, 83, 88},
                        {38, 63, 43, 68}
                      };

    for (int i = 0; i < 2; i++) // for rows
    {
        for (int j = 0; j < 4; j++) // for columns
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}