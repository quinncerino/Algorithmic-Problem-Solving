#include<iostream>
using namespace std;
int main()
{
    char player1, player2;
    //each of the two players input their moves
    cout << "Player 1: Enter corresponding letter for rock (R or r), paper (P or p), or scissors (S or s): ";
    cin >> player1;
    cout << "Player 2: Enter corresponding letter for rock (R or r), paper (P or p), or scissors (S or s): ";
    cin >> player2;

    if (player1 == 'R' || player1 == 'r') //executed if player 1 uses rock
    {
        if (player2 == 'P' || player2 == 'p')
        {
            cout << "Paper covers rock";
        }
        else if (player2 == 'S' || player2 == 's')
        {
            cout << "Rock breaks scissors";
        }
        else
        {
            cout << "Nobody wins";
        }
    }
    else if (player1 == 'P' || player1 == 'p') //executed if player 1 uses paper
    {
        if (player2 == 'R' || player2 == 'r')
        {
            cout << "Paper covers rock";
        }
        else if (player2 == 'S' || player2 == 's')
        {
            cout << "Scissors cut paper";
        }
        else
        {
            cout << "Nobody wins";
        }
    }
    else if (player1 == 'S' || player1 == 's') //executed if player 1 uses scissors
    {
        if (player2 == 'P' || player2 == 'p')
        {
            cout << "Scissors cut paper";
        }
        else if (player2 == 'R' || player2 == 'r')
        {
            cout << "Rock breaks scissors";
        }
        else
        {
            cout << "Nobody wins";
        }
    }
}