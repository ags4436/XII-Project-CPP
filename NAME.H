#include<iostream.h>
#include<conio.h>
#include<dos.h>

void name()
{

clrscr();


  for(int x=50;x>=20;x--)
{
normvideo();
textcolor(x+BLINK);
delay(260);
clrscr();
gotoxy(x,8);
cout<<"  P R O J E C T   ";
gotoxy(x,10);
cout<<"  D E V E L O P E D  B Y  :  ";
gotoxy(x,12);
cout<<"-- V AAKASH GOURI SHANKAR";
gotoxy(x,14);
cout<<"-- SRAVANTHI";
gotoxy(x,16);
cout<<"-- HARIRAM";
}
gotoxy(x,20);
cout<<"PRESS ANY KEY TO CONTINUE:";

getch();


}