#include <SFML/Graphics.hpp>
#include <string>

int main() {
    //CYcle COntrols
    //color change (F1>F9)
    //cycle movements (right arrow, left arrow)
    
    //declaration
    int h=0, page=0;
    int circle1x = 100, circle2x = 250;
    int poly_upperline=150, poly_lowerline=100;
    int poly_leftline=100, poly_rightline=225;
    int handle_1=150, handle_2=225, handle_3=200;
    int sheet_1=100, sheet_2=150;
    int speed=5;
    int name;
    int cycle_color=15;

    //executing Graphics window
    DWORD screen_width=GetSystemMetrics(SM_CXSCREEN);
    DWORD screen_height=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screen_width, screen_height, "Moving Cycle", -3);

    char s[30]="Loading...";
    while {

        if(o==0) {
            setcolor(WHITE);

            rectangle(550*25,120,screen_width,screen_height);

            for(int i=0; i<30; i++) {
                setcolor(GREEN);
                line(550*25+i,120,550*25+i,120+10);
                setcolor(WHITE);
                outtextxy(550*25+i,120,"*");
                delay(10);
            }
        }

        if(n!=1) {
            setactivepage(page);
            setvisualpage(1-page);
        }

        cleardevice();
        setcolor(WHITE);

        line(0,0,screen_width,screen_height);


        // Tires
        setcolor(cycle_color);
        circle(circle1x, 300, 25); //first circle left side
        circle(circle2x, 300, 25); //second circle right side

        

    }
}
