#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
void loading()
{
int gd=DETECT,gm;
int i;
clrscr();
gotoxy(25,10);
cout<<"SRI KANCHI MAHASWAMI VIDYA MANDIR";
gotoxy(22,12);
cout<<"COMPUTER SCIENCE INVESTIGATORY PROJECT";
getch();

initgraph(&gd,&gm,"C:\\TC\\BGI");
settextstyle(4,0,5);

rectangle(230,250,370,280);

for(i=0;i<140;i++)
{
setcolor(15);
outtextxy(200,140,"LOADING");
 setcolor(RED);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(230,250,370,280);
rectangle(230,250,230+i,280);
//line(230+i,250,230+i,270);
floodfill(231,251,RED);
delay(150);
cleardevice();
}
closegraph();
}