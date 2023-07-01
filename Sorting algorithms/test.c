// #include<stdio.h>
// int main() {
//     float A = 0, B = 0;
//     float i, j;
//     int k;
//     float z[1760];
//     char b[1760];
//     printf("\x1b[2J");
//     for(;;) {
//         memset(b,32,1760);
//         memset(z,0,7040);
//         for(j=0; j < 6.28; j += 0.07) {
//             for(i=0; i < 6.28; i += 0.02) {
//                 float c = sin(i);
//                 float d = cos(j);
//                 float e = sin(A);
//                 float f = sin(j);
//                 float g = cos(A);
//                 float h = d + 2;
//                 float D = 1 / (c * h * e + f * g + 5);
//                 float l = cos(i);
//                 float m = cos(B);
//                 float n = sin(B);
//                 float t = c * h * g - f * e;
//                 int x = 40 + 30 * D * (l * h * m - t * n);
//                 int y= 12 + 15 * D * (l * h * n + t * m);
//                 int o = x + 80 * y;
//                 int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
//                 if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
//                     z[o] = D;
//                     b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
//                 }
//             }
//         }
//         printf("\x1b[H");
//         for(k = 0; k < 1761; k++) {
//             putchar(k % 80 ? b[k] : 10);
//             A += 0.00004;
//             B += 0.00002;
//         }
//         usleep(30000);
//     }
//     return 0;
// }

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int width = 20, height = 20;
int gameOver;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int tailLength;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

{
    gameOver = 0;
void Setup()
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    system("cls");
    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                printf("#");
            if (i == y && j == x)
                printf("O");
            else if (i == fruitY && j == fruitX)
                printf("F");
            else
            {
                int printTail = 0;
                for (int k = 0; k < tailLength; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        printf("o");
                        printTail = 1;
                    }
                }
                if (!printTail)
                    printf(" ");
            }
            if (j == width - 1)
                printf("#");
        }
        printf("\n");
    }

    for (int i = 0; i < width + 2; i++)
        printf("#");
    printf("\n");
    printf("Score: %d\n", score);
}

void Input()
{
    if (_kbhit())
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'x':
            gameOver = 1;
            break;
        }
    }
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < tailLength; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;

    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;

    for (int i = 0; i < tailLength; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = 1;
    }

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        tailLength++;
    }
}

int main()
{
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(10); // Platform-specific sleep function
    }
    return 0;
}
