#include "roulette.hh"

int main(){
    system("cls");
    //welcome();

    Number *number = new Number[36];
    initialize(number);
    print_roulette_table(number);

    //number[33].print_data();
    
}