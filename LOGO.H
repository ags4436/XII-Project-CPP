#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void logo()
{
int x,y;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
x=getmaxx()/2;
y=getmaxy()/2;

cleardevice();
setlinestyle(0,0,3);
setcolor(15);
circle(x,y-150,66);
setcolor(14);
setfillstyle(SOLID_FILL,YELLOW);
circle(x,y-150,65);
floodfill(x, y-150, YELLOW);
setlinestyle(0,0,3);
setcolor(4);
line(x,89,x-50,89);
line(x-30,79,x+10,49);
line(x+10,49,x+50,79);
settextstyle(0,0,2);
setcolor(4);
outtextxy(x-30,y-140,"SHA");
settextstyle(0,0,0);
outtextxy(x-60,y-120,"Think Different");
}