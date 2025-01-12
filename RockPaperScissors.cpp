// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int playerWins = 0;
    int aiWins = 0;
    char playerChoice;
    srand(time(0));
    //introduce player to RPS
    //Outline the rules
    //make player give a name
    //Give the player an option to choice either rock paper or scissors
    //give ai a name and have ai randomly selct one of the choices
    //display to the player who won
    cout << "Welcome to Rock Paper Scissors!\n";
    cout << "In this game your goal is to beat the AI by choosing the choice that beats their choice.\n";
    cout << "The rules are: rock beats scissors, scissors beats paper, and paper beats rock.\n";
    cout << " \n";
    cout << "Please enter your name: ";
    string name;
    cin >> name;
    cout << " \n";
    cout << "Thank you " << name << ", now please choose either R (for rock), P (for paper), or S (for scissors).\n";
    while (playerWins < 2 && aiWins < 2)
    {

        cout << "Input your choice here: ";
        char aiChoice = "RPS"[rand() % 3];
        cin >> playerChoice;

        cout << "AI's choice: " << aiChoice << endl;

        playerChoice = toupper(playerChoice);
        

        if (playerChoice == aiChoice)
        {
            cout << "You tied, play again!" << endl;
        }
        else if ((playerChoice == 'R' && aiChoice == 'S') ||
            (playerChoice == 'S' && aiChoice == 'P') ||
            (playerChoice == 'P' && aiChoice == 'R'))
        {
            playerWins++;
            cout << "You win!" << endl;
        }

        else
        {
            cout << "You lose this round!" << endl;
            aiWins++;
        }
        if (playerWins == 1 && aiWins == 0)
        {
            return 0;
        }
        cout << "You: " << playerWins << " AI: " << aiWins << endl;
        
    }
    if (playerWins > 1) 
    {
    cout << "Congratulations! You win the best 2 out of 3!" << endl;
    }
    else 
    {
        cout << "AI wins the best 2 out of 3. Better luck next time!" << endl;
    }

    
}
// Random ai
// tie makes another game until someone wins
//if the ai wins, give the player the option to do best 2/3  