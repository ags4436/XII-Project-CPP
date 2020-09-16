
#include<pin1.h>
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<fstream.h>
#include<graphics.h>
#include<stdio.h>
#include<string.h>
#include<logo.h>
#include<welcome.h>
#include<name.h>
#include<ctype.h>
#include<loading.h>
class user
{   private:
	char user1[7],pswd2[7],pin[5],c;
 char username[6],password[6];
 char pswd[4],ch;
 int i;
 char user[6],pswd1[6];
 public:
 user();
}   ;
 user::user()
{
 loading();
 name();
 lb:
 welcome();
 int gd=DETECT,gm;

 initgraph(&gd,&gm,"C:\\TC\\BGI");

 cleardevice();
 logo();
 setbkcolor(6);
 setcolor(1);
 settextstyle(6,0,1);
  outtextxy(100,195," USERNAME :");
 outtextxy(100,245," PASSWORD :");
 gotoxy(28,14);//username
 gets(username);
 gotoxy(28,17); //password
 gets(password);
 ifstream us("user.txt",ios::in);
 us.seekg(0);
 cout<<"\n";
 us.get(user1,7);
 us.get(ch);
 us.get(pswd2,7);
 us.get(ch);
 if((strcmp(password,pswd2)==0))
 {
  pin1();
  goto lb;

 }
 else if(strcmp("exit",password)==0)
 {
 exit(0);
closegraph();
 }

 else
 {
  cout<<"WRONG USER NAME OR PASSWORD....";
  getch();
  closegraph();
  goto lb;

 }
 us.close();
}

