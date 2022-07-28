#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
bool gameover;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
// Directions using a  w  d s;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};

eDirection dir;

// For tail
int tailX[100], tailY[100];
int nTail;

void setup()
{
    gameover = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;           //  will start from centre;
    fruitX = rand() % width;  // generate random no within the width;
    fruitY = rand() % height; // generate random no within the height;
    score = 0;
}

void draw()
{
    system("cls");
    for (int i = 0; i < width + 2; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            if (i == y and j == x)
            {
                cout << "O"; // snake head
            }
            else if (i == fruitY and j == fruitX)
            {
                cout << "F"; // fruit
            }
            else
            {
                bool print = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j and tailY[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                {
                    cout << " ";
                }
            }

            if (j == width - 1)
                cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
    {

        cout << "*";
    }
    cout << endl;
    cout << "Score : " << score << endl;
}

void input()
{
    if (_kbhit()) // check if any key is pressed on keyboard or not.
    {
        switch (_getch()) // give ascii value of character pressed on keyboard.
        {
        case 'a':
            dir = LEFT;
            break;
        case 's':
            dir = DOWN;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 'q':
            gameover = true;
            break;
        }
    }
}

void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
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
    }

    if (x >= width)
        x = 0;
    else if (x < 0)
        x = width - 1;
    if (y >= height)
        y = 0;
    else if (y < 0)
        y = height - 1;

    {
        /* code */
    }

    for (int i = 0; i < nTail; i++) // when snake eat himself.
    {
        if (tailX[i] == x and tailY[i] == y)
        {
            gameover = true;
            cout << "\n!!!!! Game over !!!!\n\n\n";
        }
    }

    if (x == fruitX && y == fruitY)
    {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main()
{
    setup();
    while (!gameover)
    {
        draw();
        input();
        logic();
        Sleep(100); // to slow down snake moment
    }

    return 0;
}
