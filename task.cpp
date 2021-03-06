#include "roulette.hh"

//This is method used to set data for class Number
void Number::set_data(int value, int color)
{   
    this -> value = value;
    this -> color = color;
}

//This is the method used to print value and color of a number 
//in class Number because property 'color' and 'value'
//cannot be accessed outside of class
void Number::print_data() 
{
    set_color(this -> color);
    cout << this -> value;
    set_color(white);
}

void initialize(Number *number)
{
    int color, i;
    for (i = 0; i<36; i++){
        if((i+1) < 11){
            if((i+1) % 2 != 0) color = red;
            else color  = green;
        }
        else if (i+1 < 19){
            if((i+1) % 2 == 0) color = red;
            else color  = green;
        }
        else if (i+1 < 29){
            if((i+1) % 2 != 0) color = red;
            else color  = green;
        }
        else {
            if((i+1) % 2 == 0) color = red;
            else color  = green;
        }
        number[i].set_data(i+1, color);
    }
}

void keyboard_hit(Number *number)
{
    int ch;
    cout << "Press ENTER to start new game" << endl;
    cout << "Press ESC to exit";
    while(1){
        if ( kbhit() ) {
            // Stores the pressed key in ch
            ch = getch();
            // when escape is pressed
            if (int(ch) == 27)
                exit(0);
            // when enter is pressed
            if (int(ch) == 13)
                break;
        }
    }
    loop(number);
}