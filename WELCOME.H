#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void welcome()
{
int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 cleardevice();
setcolor(YELLOW);
for (int i=0;i<7;i++)
  {
  delay(100);
  cleardevice();
  settextstyle(3,0,i);
  outtextxy(10,75,"    WELCOME");
  outtextxy(10,150,"     TO");
  outtextxy(10,225," SHA BANK OF INDIA");
  }


  for ( i=7;i>0;i--)
  {
  delay(100);
  cleardevice();
  settextstyle(3,0,i);
  outtextxy(230,75,"    WELCOME");
  outtextxy(250,150,"     TO");
  outtextxy(225,225," SHA BANK OF INDIA");
  }

	getch();
closegraph();
}