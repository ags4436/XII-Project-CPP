#include<fp.h>
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<graphics.h>
void pin1()
{
char ch,pin[4],pin1[5],user1[7],pswd2[7];
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
cleardevice();
setbkcolor(14);
setcolor(RED);
setlinestyle(0,0,3);
rectangle(20,300,200,370);//last

rectangle(20,100,200,300);
//-------------------------------------------------------------------//
line(20,166.6,200,166.6); // )
line(20,233.2,200,233.2);  // )}-rows
//-------------------------------------------------------------------//
line(80,100,80,370);  // )
line(140,100,140,370); //}-columns
//-----------------------------------------------------------------//
setcolor(1);
outtextxy(45,130,"1"); // )
outtextxy(45,196,"4"); // )    1,4,7
outtextxy(45,263,"7"); // )
//----------------------------------------------------------------------//
outtextxy(105,130,"2"); // )
outtextxy(105,196,"5"); // ) 2,5,8
outtextxy(105,263,"8"); // )
//---------------------------------------------------------------------------//
outtextxy(165,130,"3"); // )
outtextxy(165,196,"6"); // )    3,6,9
outtextxy(165,263,"9"); // )
//-----------------------------------------------------------------------------//
outtextxy(105,330,"0");
outtextxy(45,330,"<-");//last
outtextxy(150,330,"ENTER");
//-----------------------------------------------------------------------------//
outtextxy(250,196," ENTER YOUR PIN: ");
//closegraph();
gotoxy(50,13);
//clrscr();
gets(pin);
ifstream us("user.txt",ios::in);
us.seekg(0);
cout<<"\n";
us.get(user1,7);
us.get(ch);
us.get(pswd2,7);
us.get(ch);
us.get(pin1,5);
if(strcmp(pin1,pin)==0)
{
fp();
closegraph();
}
else
{
cout<<"WRONG PIN";
getch();
closegraph();
}
}
