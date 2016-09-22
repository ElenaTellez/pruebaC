#include <stdio.h>
#include <ncurses.h>

int main(){

initscr(); 
start_color();

assume_default_colors(COLOR_BLUE, COLOR_WHITE);

init_pair(1,COLOR_RED, COLOR_WHITE);
attron(COLOR_PAIR(1));
printw ("Hola mundo ");
getch();
ednwin();
return 0;
}
