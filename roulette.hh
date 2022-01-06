#include <iostream> 
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

using namespace std;

#define red 12
#define white 7
#define light_blue 9
#define cyan 11
#define yellow 14
#define green 10

class Number
{   
    int value;
    int color;
public:
    void set_data(int, int);
    void print_data() ;
};

/*-----------------Printt functions------------------------------*/
void welcome();
void print_roulette_table(Number *number);
void print_instruction();

/*-------------------Task functions-----------------------------*/
void initialize(Number *number);
void keyboard_hit();  // This function is used to start a new game 
                      // or exit the program using kbhit()

/*---------------Configuration functions------------------------*/
void set_color( int code );
void gotoxy(int x, int y);