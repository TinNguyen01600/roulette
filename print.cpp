#include "roulette.hh"

void welcome()
{   
    gotoxy(18,1);
    set_color(light_blue); cout << "****************";

    gotoxy(14,2);
    set_color(cyan); cout << "------ ";
    set_color(yellow); cout<< "Welcome to ";
    set_color(cyan); cout << "-------";
    
    gotoxy(9,3);
    set_color(light_blue);  cout << "******** ";
    set_color(yellow); cout << "RED ROCK CASINO ";
    set_color(light_blue); cout << "**********";

    gotoxy(12,4);
    set_color(cyan); cout << "-----------------------------";

    gotoxy(14,5);
    set_color(light_blue); cout << "*************************" ;

    gotoxy(17,6);
    set_color(cyan); cout << "*******************" ;

    gotoxy(4,8);
    set_color(13); cout << "~~~~~~~~~~~~~~~ Roulette Table ~~~~~~~~~~~~~~~" << endl << endl;
    set_color(white);
}

void print_roulette_table(Number *number)
{
    int i, j, k;
    cout << " ________________________" << endl;
    cout << "|" << endl;
    for (i = 0; i<3; i++){
        cout << "|     ";
        for (j  = 0; j<12; j++){
            k = i+3*j;
            number[k].print_data();
            cout << "      ";
        }
        cout << "|" << endl;
    }
    //cout << "|________________|___________________|___________________|" << endl;

    // cout << "|                |                   |                   |" << endl;
    // cout << "|    1 - 12      |      13 - 24      |      25 - 36      |" << endl;
    // cout << "|   (Area 1)     |      (Area 2)     |      (Area 3)     |" << endl;
    // cout << "|________________|___________________|___________________|";
}
