#include "roulette.hh"

void welcome()
{   
    gotoxy(40,1);
    set_color(light_blue); cout << "****************";

    gotoxy(36,2);
    set_color(cyan); cout << "------ ";
    set_color(yellow); cout<< "Welcome to ";
    set_color(cyan); cout << "-------";
    
    gotoxy(31,3);
    set_color(light_blue);  cout << "******** ";
    set_color(yellow); cout << "RED ROCK CASINO ";
    set_color(light_blue); cout << "**********";

    gotoxy(34,4);
    set_color(cyan); cout << "-----------------------------";

    gotoxy(36,5);
    set_color(light_blue); cout << "*************************" ;

    gotoxy(39,6);
    set_color(cyan); cout << "*******************" ;

    gotoxy(26,8);
    set_color(13); cout << "~~~~~~~~~~~~~~~ Roulette Table ~~~~~~~~~~~~~~~" << endl << endl;
    set_color(white);
}


void print_roulette_table(Number *number)
{
    int i, j, k;
    cout << " ";
    for (i = 0; i<98; i++){
        cout << "_";
    }
    cout << endl << "|";
    for (i = 0; i<98; i++){
        cout << " ";
    }
    cout << "|" << endl;
//----------------------------------------------------------------------------------
    for (i = 0; i<3; i++){
        cout << "|     ";
        for (j  = 0; j<12; j++){
            k = i+3*j;
            number[k].print_data();
            cout << "      ";
        }
        cout << "|" << endl;
    }
//----------------------------------------------------------------------------------
    for (i = 0; i<3; i++){
        cout << "|";
        for (j = 0; j<31; j++){
            cout << "_";
        }
    }
    cout << "___|" << endl;
//----------------------------------------------------------------------------------
    for (i = 0; i<3; i++){
        cout << "|";
        for (j = 0; j<31; j++){
            cout << " ";
        }
    }
    cout << "   |" << endl;
//----------------------------------------------------------------------------------
    cout << "|\t     1 - 12\t\t|";
}
