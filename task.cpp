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
