#include "roulette.hh"

int main(){
    system("cls");
    welcome();
    Number *number = new Number[36];
    initialize(number);
    print_roulette_table(number);
    print_instruction();
}