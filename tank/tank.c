#include <ncurses.h>



int main()
{
	int i = 0;
	const char *cannon_FORWARD_BACK = "|";
    const char *cannon_LEFT_RIGHT = "-";
    const char *cannon_CORNER_RIGHT = "/";
    const char *cannon_CORNER_LEFT = "\\";
	int ch, ch_memory_move, ch_memory_cannon;
	int x = 0;
	int y = 0;
	int x1, y1;
    initscr(); 
    keypad(stdscr, true);

    mvaddch(y, x, '*');
    x1=x+1;
    mvaddch(y, x1, '*');
    x1=x1+1;
    mvaddch(y, x1, '*');
    y1=y+1;
    mvaddch(y1, x, '*');
    x1=x+1;
    mvaddch(y1, x1, '*');
    x1=x1+1;
    mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
    y1=y1+1;
    mvaddch(y1, x, '*');
    x1=x+1;
    mvaddch(y1, x1, '*');
    x1=x1+1;
    mvaddch(y1, x1, '*');




   	while((ch = getch()) != '0'){
    	if(ch == KEY_UP){
            if(ch_memory_cannon == 69 || ch_memory_cannon == 101){
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_RIGHT);
                y=y-1;
            }
            else{
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 87 || ch_memory_cannon == 119){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 81 || ch_memory_cannon == 113){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 65 || ch_memory_cannon == 97){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 90 || ch_memory_cannon == 122){
                clear();
                y=y+1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 88 || ch_memory_cannon == 120){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 67 || ch_memory_cannon == 99){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_LEFT);
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            if(ch_memory_cannon == 68 || ch_memory_cannon == 100){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
            }
            ch_memory_move = KEY_UP;
    	}
    	if(ch == KEY_DOWN){
            if(ch_memory_cannon == 69 || ch_memory_cannon == 101){
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_RIGHT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            else{
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 87 || ch_memory_cannon == 119){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 81 || ch_memory_cannon == 113){
                clear();
                y=y-1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 65 || ch_memory_cannon == 97){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 90 || ch_memory_cannon == 122){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 88 || ch_memory_cannon == 120){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            if(ch_memory_cannon == 67 || ch_memory_cannon == 99){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_LEFT);
                y=y+1;
            }
            if(ch_memory_cannon == 68 || ch_memory_cannon == 100){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
            }
            ch_memory_move = KEY_DOWN;

    	}
    	if(ch == KEY_LEFT){
            if(ch_memory_cannon == 69 || ch_memory_cannon == 101){
                clear();
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_RIGHT);
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            else{
                clear();
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            if(ch_memory_cannon == 87 || ch_memory_cannon == 119){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            if(ch_memory_cannon == 81 || ch_memory_cannon == 113){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;                
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_LEFT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            if(ch_memory_cannon == 65 || ch_memory_cannon == 97){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 90 || ch_memory_cannon == 122){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_RIGHT);
                x=x-1;
            }
            if(ch_memory_cannon == 88 || ch_memory_cannon == 120){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            if(ch_memory_cannon == 67 || ch_memory_cannon == 99){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_LEFT);
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;

            }
            if(ch_memory_cannon == 68 || ch_memory_cannon == 100){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
            }
            ch_memory_move = KEY_LEFT;
    	}
    	if(ch == KEY_RIGHT){
            if(ch_memory_cannon == 69 || ch_memory_cannon == 101){
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_RIGHT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            else{
                clear();
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 87 || ch_memory_cannon == 119){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 81 || ch_memory_cannon == 113){
                clear();
                x=x-1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;                
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 65 || ch_memory_cannon == 97){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 90 || ch_memory_cannon == 122){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 88 || ch_memory_cannon == 120){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            if(ch_memory_cannon == 67 || ch_memory_cannon == 99){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_LEFT);
                x=x+1;

            }
            if(ch_memory_cannon == 68 || ch_memory_cannon == 100){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                x=x+1;
            }
            ch_memory_move = KEY_RIGHT;

    	}
        if(ch == 101 || ch == 69){
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_RIGHT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 101;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_RIGHT);
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 101;
                x=x-1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_RIGHT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 101;
                y=y+1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_RIGHT);
                ch_memory_cannon = 101;
                y=y-1;
            }

        }
        if(ch == 119 || ch == 87){
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 119;
                y=y-1;
            }
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 119;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 119;
                x=x-1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 119;
                y=y+1;
            }
            
        }
        if(ch == 113 || ch == 81){
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 113;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;                
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_LEFT);
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 113;
                x=x-1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 113;
                y=y+1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_LEFT);
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 113;
                y=y-1;
            }
            
        }
        if(ch == 97 || ch == 65){
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 65;
                x=x-1;
            }
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 97;
                x=x+1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 97;
                y=y+1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 97;
                y=y-1;
            }
            
        }
        if(ch == 90 || ch == 122){
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 90;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_RIGHT);
                ch_memory_cannon = 90;
                x=x-1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 90;
                y=y+1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvwprintw(stdscr, y, x, "%s", cannon_CORNER_RIGHT);
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 90;
                y=y-1;
            }

        }
        if(ch == 88 || ch == 120){
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x1, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_RIGHT);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 120;
                y=y+1;
            }
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 88;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_FORWARD_BACK);
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 88;
                x=x-1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_FORWARD_BACK);
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 88;
                y=y-1;
            }

        }
        if(ch == 67 || ch == 99){
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_LEFT);
                ch_memory_cannon = 99;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_CORNER_LEFT);
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 99;
                x=x-1;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_CORNER_LEFT);
                ch_memory_cannon = 99;
                y=y+1;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y, x1, "%s", cannon_CORNER_LEFT);
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 99;
                y=y-1;
            }

        }
        if(ch == 68 || ch == 100){
            if(ch_memory_move == KEY_RIGHT){
                clear();
                x=x-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                ch_memory_cannon = 100;
                x=x+1;
            }
            if(ch_memory_move == KEY_LEFT){
                clear();
                x=x+1;
                mvaddch(y, x, '*');
                x1=x-1;
                mvaddch(y, x1, '*');
                x1=x1-1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvwprintw(stdscr, y1, x, "%s", cannon_LEFT_RIGHT);
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, ' ');
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x-1;
                mvaddch(y1, x1, '*');
                x1=x1-1;
                mvaddch(y1, x1, '*');
                x=x-1;
                ch_memory_cannon = 100;
            }
            if(ch_memory_move == KEY_DOWN){
                clear();
                y=y-1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1+1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y+1;
                ch_memory_cannon = 100;
            }
            if(ch_memory_move == KEY_UP){
                clear();
                y=y+1;
                mvaddch(y, x, '*');
                x1=x+1;
                mvaddch(y, x1, '*');
                x1=x1+1;
                mvaddch(y, x1, '*');
                y1=y-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, '*');
                x1=x1+1;
                mvwprintw(stdscr, y1, x1, "%s", cannon_LEFT_RIGHT);
                y1=y1-1;
                mvaddch(y1, x, '*');
                x1=x+1;
                mvaddch(y1, x1, ' ');
                x1=x1+1;
                mvaddch(y1, x1, '*');
                y=y-1;
                ch_memory_cannon = 100;
            }

        }

    }                        
    refresh();                   
    getch();                     
    endwin();                   
    return 0;
}