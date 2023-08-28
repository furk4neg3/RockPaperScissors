// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

void showInputs(int userInput, int compInput);
void showWinner(int userInput, int compInput);

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    srand(time(0));

    cout << "************************\n";
    cout << "Rock Paper Scissors Game\n";
    bool isPlaying = true;
    int userInput = 0;

    do {
        cout << "************************\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Exit\n";
        cout << "Pick one: ";

        int compInput = rand() % 3 + 1;
        cin >> userInput;

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        
        if (userInput <= 3 && userInput >= 1) {
            showInputs(userInput, compInput);
            showWinner(userInput, compInput);
        }
        else if(userInput == 4){
            cout << "Exiting game. Have a nice day!";
            isPlaying = false;
        }
        else {
            cout << "Invalid input. Please try again.\n";
        }

    } while (isPlaying);
    
    return 0;
}

void showInputs(int userInput, int compInput){
    std::string userString;
    std::string compString;
    
    switch (userInput) {
        case 1:
            userString = "Rock";
            break;
        case 2:
            userString = "Paper";
            break;
        case 3:
            userString = "Scissors";
            break;
        default:
            userString = "Invalid Entry!";
            break;
    }
    switch (compInput) {
    case 1:
        compString = "Rock";
        break;
    case 2:
        compString = "Paper";
        break;
    case 3:
        compString = "Scissors";
        break;
    default:
        compString = "Invalid Entry!";
        break;
    }

    std::cout << "User: " << userString << '\n';
    std::cout << "Computer: " << compString << '\n';
    
}

void showWinner(int userInput, int compInput) {

    switch (userInput) {
        case 1:
            switch (compInput) {
                case 1:
                    std::cout << "Draw!\n";
                    break;
                case 2:
                    std::cout << "Winner: Computer!\n";
                    break;
                case 3:
                    std::cout << "Winner: Player!\n";
                    break;
                default:
                    std::cout << "Invalid input\n";
                    break;
            }
            break;
        case 2:
            switch (compInput) {
            case 1:
                std::cout << "Winner: Player!\n";
                break;
            case 2:
                std::cout << "Draw!\n";
                break;
            case 3:
                std::cout << "Winner: Computer!\n";
                break;
            default:
                std::cout << "Invalid input\n";
                break;
            }
            break;
        case 3:
            switch (compInput) {
            case 1:
                std::cout << "Winner: Computer!\n";
                break;
            case 2:
                std::cout << "Winner: Player!\n";
                break;
            case 3:
                std::cout << "Draw!\n";
                break;
            default:
                std::cout << "Invalid input\n";
                break;
            }
            break;
        default:
            std::cout << "Your input was invalid!\n";
            break;
    }
}

