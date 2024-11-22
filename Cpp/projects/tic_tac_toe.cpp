/*
PROJECT: Make a tic tac toe game.

SPECIFICATION:
    - 3x3 board
    - user goes first then computer

TODO:
    - Build the structure of the program (any classes? any functions? what they do?)
    - Learn how to pick a random number

OUTCOMES:
    - Learn how to define global constant variables in C++ style
    - Learn to use arrays
    - Learn <cctype> tolower(), <random> mt19937 or whatever
    - Learn to comment in C++ style (flushed right)

TOOLS USED:
    - chatGPT
    - StackOverFlow

CODE FEEDBACK FROM CHATGPT:
    GOOD:
    - well-organized functions
    - nice visual
    NEED IMPROVING:
    - (@me) I couldn't handle string input (e.g., haha) properly. Still no solution yet. Maybe use something other than cin.
    - unnecessary NUM_CELL -> could be calculated dynamically or passed as a constant argument to functions
    - dumb bot
    - magic numbers (3 for number of rows, etc.)
    - repeated calculation of num_chosen_cell 

CURRENT LEVEL: Up to C++ classes.
*/

#include <iostream>
#include <cctype>
#include <random>
using namespace std;

// Global constants
const int NUM_CELL = 9;

// Function declarations
void draw_board(int chosen_cell[NUM_CELL], int player_cell[NUM_CELL], int bot_cell[NUM_CELL]);
int prompt_player_for_cell(int chosen_cell[NUM_CELL]);
bool is_winner(int cell[NUM_CELL]);

int main()
{
    // Game properties
    int chosen_cell[NUM_CELL] = {0};
    int player_cell[NUM_CELL] = {0};
    int bot_cell[NUM_CELL] = {0};

    // Randomizer properties
    int min = 0, max = 8;
    random_device rd;                         // generate seed
    mt19937 gen(rd());                        // create Mersenne Twister generator
    uniform_int_distribution<> dis(min, max); // Range from min to max (inclusive)

    while (1)
    {
        // Draw board every round
        draw_board(chosen_cell, player_cell, bot_cell);

        // Util variable
        int num_chosen_cell = 0;
        for (int i : chosen_cell)
        {
            num_chosen_cell += i;
        }

        // Check winner
        if (is_winner(player_cell))
        {
            cout << "Player wins the round." << endl;
            break;
        }
        else if (is_winner(bot_cell))
        {
            cout << "Bot wins the round." << endl;
            break;
        }
        else if (num_chosen_cell == NUM_CELL)
        {
            cout << "It is a draw." << endl;
            break;
        }

        // Get user input
        int user_input = prompt_player_for_cell(chosen_cell);

        // Handle user_input
        if (user_input == -1)
        {
            continue;
        }
        else if (user_input == -2)
        {
            break;
        }

        // Update chosen_cell
        int prompted_cell = user_input - 1;
        chosen_cell[prompted_cell] = 1;
        player_cell[prompted_cell] = 1;

        // Get bot input
        int generated_cell = dis(gen); // get random value
        while (chosen_cell[generated_cell] != 0)
        {
            generated_cell = dis(gen);
        }

        // Re-update chosen_cell
        chosen_cell[generated_cell] = 1;
        bot_cell[generated_cell] = 1;

        // Log info
        cout << "USER: " << user_input << "-----" << "BOT: " << generated_cell + 1 << endl;
    }

    cout << "Thank you for playing Tic Tac Toe." << endl;
    return 0;
}

void draw_board(int chosen_cell[NUM_CELL], int player_cell[NUM_CELL], int bot_cell[NUM_CELL])
{
    cout << "-------" << endl;
    for (int i = 0; i < NUM_CELL; i++)
    {
        cout << "|";
        if (chosen_cell[i] == 0)
        {
            cout << " ";
        }
        else if (player_cell[i] == 1)
        {
            cout << "X";
        }
        else if (bot_cell[i] == 1)
        {
            cout << "O";
        }

        if (i == 2 || i == 5 || i == 8)
        {
            cout << "|" << endl;
            cout << "-------" << endl;
        }
    }
}

int prompt_player_for_cell(int chosen_cell[NUM_CELL])
{
    char user_input;
    cout << "Which cell would you want to take (1 - 9 or 'q' to quit): ";
    cin >> user_input;

    // Validate user_input
    if (!((user_input >= '1' && user_input <= '9') || tolower(user_input) == 'q'))
    {
        cout << "Invalid input. Out of range." << endl;
        return -1;
    }

    // Listening for quit command
    if (tolower(user_input) == 'q')
    {
        return -2;
    }

    // Check if cell is taken
    int cell = user_input - '0';

    if (chosen_cell[cell - 1] != 0)
    {
        cout << "Invalid input. Cell is taken." << endl;
        return -1;
    }

    return user_input - '0';
}

bool is_winner(int cell[NUM_CELL])
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (cell[i * 3] == 1 && cell[i * 3 + 1] == 1 && cell[i * 3 + 2] == 1)
        {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (cell[i] == 1 && cell[i + 3] == 1 && cell[i + 6] == 1)
        {
            return true;
        }
    }

    // Check diagonals
    if (cell[0] == 1 && cell[4] == 1 && cell[8] == 1) // top-left to bottom-right
    {
        return true;
    }
    if (cell[2] == 1 && cell[4] == 1 && cell[6] == 1) // top-right to bottom-left
    {
        return true;
    }

    return false;
}