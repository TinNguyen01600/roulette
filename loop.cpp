#include "roulette.hh"

/*This file contains only 1 function loop(), which is the back bone
of the whole program and resposible for most of the tasks
*/

void loop(Number *number)
{
    system("cls");
    print_roulette_table(number);

    long int money;
    cout << endl << endl << "How much betting money you dare to cash-in ?  ";

    // error checking loop. Only positive integer allowed
    while(1) {
        cin >> money;
        // input valid
        if(!cin.fail() && (cin.peek() == EOF || cin.peek() == '\n') && money > 0) {
            break; // break from while loop
        }
        // input invalid
        else {
            cin.clear();
            cin.ignore(256, '\n');
            cout << "Invalid input!!! PLease try again:  "; 
        }
    }
    
    cout << endl << "You have " << money << "$ in your account. Good luck !!!" << endl;
}