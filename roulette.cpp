#include "roulette.hh"

void Number::set_data(int value, int color)
{   
    this -> value = value;
    this -> color = color;
}

void Number::print_data() 
{
    set_color(this -> color);
    cout << this -> value;
    set_color(white);
}

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

void initialize(Number *number)
{
    int color = white, i;
    for (i = 0; i<36; i++){
        if((i+1) < 11){
            if((i+1) % 2 != 0) color = red;
            else color  = white;
        }
        else if (i+1 < 19){
            if((i+1) % 2 == 0) color = red;
            else color  = white;
        }
        else if (i+1 < 29){
            if((i+1) % 2 != 0) color = red;
            else color  = white;
        }
        else {
            if((i+1) % 2 == 0) color = red;
            else color  = white;
        }
        number[i].set_data(i+1, color);
    }
}

void print_roulette_table(Number *number)
{
    int i, j, k;
    for (i = 0; i<3; i++){
        for (j  = 0; j<12; j++){
            k = i+3*j;
            number[k].print_data();
            cout << "   ";
        }
        cout << endl;
    }


    set_color(white);
}