#include <iostream> 
#include <stdlib.h>
#include <windows.h>

using namespace std;

#define red 12
#define white 7
#define light_blue 9
#define cyan 11
#define yellow 14

void welcome();
void print_roulette_table();
void set_color( int code );
void gotoxy(int x, int y);