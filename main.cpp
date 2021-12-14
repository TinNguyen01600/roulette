#include "roulette.hh"

int main(){
    system("cls");

    Number *number = new Number[36];
    initialize(number);
    print_roulette_table(number);
    
}