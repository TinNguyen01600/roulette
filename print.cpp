#include "roulette.hh"

void welcome()
{   
    gotoxy(30,4);
    set_color(cyan); cout << "------ ";
    set_color(yellow); cout<< "Welcome to ";
    set_color(cyan); cout << "-------";
    
    gotoxy(25,5);
    set_color(light_blue);  cout << "******** ";
    set_color(yellow); cout << "RED ROCK CASINO ";
    set_color(light_blue); cout << "**********";

    gotoxy(28,6);
    set_color(cyan); cout << "-----------------------------";

    gotoxy(30,7);
    set_color(light_blue); cout << "*************************" ;

    gotoxy(33,8);
    set_color(cyan); cout << "*******************" ;

    gotoxy(20,10);
    set_color(13); cout << "~~~~~~~~~~~~~~~ Roulette Table ~~~~~~~~~~~~~~~" << endl << endl;
    set_color(white);
}


void print_roulette_table(Number *number)
{
    int i, j, k;
    cout << " ";
    for (i = 0; i<85; i++){ cout << "_"; }
//----------------------------------------------------------------------------------
    for (i = 0; i<3; i++){
        cout << endl << "|";
        for (k = 0; k<85; k++){ cout << " "; }
        cout << "|" << endl;
        cout << "|    ";
        for (j  = 0; j<12; j++){
            k = i+3*j;
            number[k].print_data();
            cout << "     ";
        }
        cout << "|";
    }
//----------------------------------------------------------------------------------
    cout << endl << "|";
    for (i = 0; i<85; i++){ cout << "_"; }
    cout << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    for(i = 0; i<26; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<27; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<30; i++){ cout << " "; }
    cout << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    cout << "          1 - 12          " << "|";
    cout << "          13 - 24          " << "|";
    cout << "            25 - 36           " << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    cout << "         (Area 1)         " << "|";
    cout << "          (Area 2)         " << "|";
    cout << "            (Area 3)          " << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    for(i = 0; i<26; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<27; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<30; i++){ cout << "_"; }
    cout << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    for(i = 0; i<12; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<15; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<14; i++){ cout << " "; }
    cout << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    cout << "   1 - 18   " << "|";
    cout << "    EVEN     " << "|";
    set_color(red); cout << "     RED     "; 
    set_color(white); cout << "|";
    set_color(green); cout << "    GREEN    "; 
    set_color(white); cout << "|";
    cout << "      ODD      " << "|";
    cout << "   19 - 36    " << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    cout << "  (Area 4)  " << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << " "; }
    cout << "|";
    for(i = 0; i<15; i++){ cout << " "; }
    cout << "|";
    cout << "   (Area 5)   " << "|";
//----------------------------------------------------------------------------------
    cout << endl << "|";
    for(i = 0; i<12; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<13; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<15; i++){ cout << "_"; }
    cout << "|";
    for(i = 0; i<14; i++){ cout << "_"; }
    cout << "|";
}
