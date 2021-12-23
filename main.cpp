#include "roulette.hh"

int main(){
    system("cls");
    system("MODE 90,25");
    welcome();
    Number *number = new Number[36];
    initialize(number);
    print_roulette_table(number);
}