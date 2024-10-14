#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
int main()
{
    int score;
    cout << "\nEnter score: " << endl;
    cin >> score;
    system("cls");
    cout << "Stone Paper Scissor Game" << endl;
    const int num = 3;
    int computer_score = 0;
    int user_score = 0;
    int user_input;
    int computer_input;
    while (computer_score < score && user_score < score)
    {
        cout << "\nEnter input number for user:";
        cin >> user_input;
        srand(time(0));
        computer_input = rand();
        computer_input = (computer_input % num) + 1;
        cout << "Computer input is: " << computer_input << endl;
        if (user_input == computer_input)
        {
            cout << "Draw" << endl;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 1 && computer_input == 2)
        {
            computer_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 1 && computer_input == 3)
        {
            user_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 2 && computer_input == 1)
        {
            user_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 2 && computer_input == 3)
        {
            computer_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 3 && computer_input == 1)
        {
            computer_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        else if (user_input == 3 && computer_input == 2)
        {
            user_score++;
            cout << "Computer Score is: " << computer_score << endl;
            cout << "User Score is: " << user_score << endl;
        }
        Sleep(1500);
        system("cls");
    }
    Sleep(2000);
    system("cls");
    cout << "The winner is: " << endl;

    if (computer_score == score)
    {
        cout << "Computer is winner" << endl;
    }
    else
    {
        cout << "User is winner" << endl;
    }
    return 0;
}