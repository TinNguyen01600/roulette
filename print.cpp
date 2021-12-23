#include "roulette.hh"

void welcome()
{   
    gotoxy(34,1);
    set_color(light_blue); cout << "****************";

    gotoxy(30,2);
    set_color(cyan); cout << "------ ";
    set_color(yellow); cout<< "Welcome to ";
    set_color(cyan); cout << "-------";
    
    gotoxy(25,3);
    set_color(light_blue);  cout << "******** ";
    set_color(yellow); cout << "RED ROCK CASINO ";
    set_color(light_blue); cout << "**********";

    gotoxy(28,4);
    set_color(cyan); cout << "-----------------------------";

    gotoxy(30,5);
    set_color(light_blue); cout << "*************************" ;

    gotoxy(33,6);
    set_color(cyan); cout << "*******************" ;

    gotoxy(20,8);
    set_color(13); cout << "~~~~~~~~~~~~~~~ Roulette Table ~~~~~~~~~~~~~~~" << endl << endl;
    set_color(white);
}


void print_roulette_table(Number *number)
{
    int i, j, k;
    cout << " ";
    for (i = 0; i<85; i++){
        cout << "_";
    }
    cout << endl << "|";
    for (i = 0; i<85; i++){
        cout << " ";
    }
    cout << "|" << endl;
//----------------------------------------------------------------------------------
    for (i = 0; i<3; i++){
        cout << "|    ";
        for (j  = 0; j<12; j++){
            k = i+3*j;
            number[k].print_data();
            cout << "     ";
        }
        cout << "|" << endl << "|";
        for (k = 0; k<85; k++){
            cout << " ";
        }
        cout << "|" << endl;
    }
//----------------------------------------------------------------------------------
    // for (i = 0; i<3; i++){
    //     cout << "|";
    //     for (j = 0; j<31; j++){
    //         cout << "_";
    //     }
    // }
    // cout << "___|" << endl;
//----------------------------------------------------------------------------------
    // for (i = 0; i<3; i++){
    //     cout << "|";
    //     for (j = 0; j<31; j++){
    //         cout << " ";
    //     }
    // }
    // cout << "   |" << endl;
//----------------------------------------------------------------------------------
    // 
}
