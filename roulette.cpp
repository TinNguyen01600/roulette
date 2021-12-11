#include "roulette.hh"

void welcome()
{   
    gotoxy(38,0);
    set_color(light_blue); cout << "****************";

    gotoxy(34,1);
    set_color(cyan); cout << "------ ";
    set_color(yellow); cout<< "Welcome to ";
    set_color(cyan); cout << "-------";
    
    gotoxy(29,2);
    set_color(light_blue);  cout << "******** ";
    set_color(yellow); cout << "RED ROCK CASINO ";
    set_color(light_blue); cout << "**********";

    gotoxy(32,3);
    set_color(cyan); cout << "-----------------------------";

    gotoxy(34,4);
    set_color(light_blue); cout << "*************************" ;

    gotoxy(37,5);
    set_color(cyan); cout << "*******************" ;

    gotoxy(24,7);
    set_color(13); cout << "~~~~~~~~~~~~~~~ Roulette Table ~~~~~~~~~~~~~~~" << endl << endl;
    set_color(white);

    set_color(white);
}

void print_roulette_table()
{
    int i, j, k;
    for (i = 0; i<3; i++){
        for (j  = 0; j<12; j++){
            k = i+3*j+1;
            cout << k <<"   |   ";
        }
        cout << endl;
    }


    set_color(white);
}