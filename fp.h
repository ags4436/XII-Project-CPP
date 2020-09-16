#include<fstream.h>
#include<string.h>
#include<dos.h>
#include<stdio.h>
#include<iostream.h>
#include<ctype.h>
#include<conio.h>
#include<graphics.h>
void fp()
{

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 char a;


 float bal=0.0;
 lb:
 cleardevice();
 setbkcolor(9);
 setlinestyle(0,5,3);

//-------------------------------------------------------//
 rectangle(2,75,200,100);  // )
 rectangle(2,200,200,225);  //  )}-left
 rectangle(2,325,200,350);  // )
//-------------------------------------------------------//
 rectangle(435,75,637,100);  // )
 rectangle(435,200,637,225);  //  )}-right
 rectangle(435,325,637,350);  // )
//---------------------------------------------------------//
 outtextxy(80,87.5,"DEPOSITE"); // )
 outtextxy(80,212.5,"WITHDRAW"); //  )}-left word
 outtextxy(80,337.5,"CHANGE PIN"); // )
//---------------------------------------------------------//
 outtextxy(10,87.5,"1"); // )
 outtextxy(10,212.5,"2"); //  )}-left    no
 outtextxy(10,337.5,"3"); // )
//---------------------------------------------------------//
 outtextxy(517,87.5,"BALANCE CHECK"); // )
 outtextxy(517,212.5,"MINI STATEMENT"); //  )}-right word
 outtextxy(517,337.5,"EXIT"); // )
//---------------------------------------------------------//
 outtextxy(445,87.5,"4"); // )
 outtextxy(445,212.5,"5"); //  )}-right    no
 outtextxy(445,337.5,"6"); // )
 int choice;
 gotoxy(40,15);
 cin>>choice;
 gotoxy(0,0);
 cleardevice();
 switch(choice)
 {
  case 1: float dep,total;

	  ifstream de("AMT.txt",ios::in) ;
	  de>>bal;
	  cout<<"\n  ENTER THE AMOUNT TO BE DEPOSITED:";
	  cin>>dep;
	  total= dep+bal;
	  de.close();
	  cout<<"PLEASE WAIT!!";
	  delay(1000);
	  cout<<"\n SUCCESSFULL DEPOSITED!!!";
	  getch();
	  ofstream depo("AMT.txt",ios::out);
	   depo<<total;
	  depo.close();
	  goto lb;


  case 2: char ch;

	  int amt;
	  cout<<"ENTER THE AMOUNT TO WIDTHDRAW:";
	  cin>>amt;
	  ifstream fin("AMT.txt",ios::in) ;
	  fin>>bal;
	  if(amt>=bal)
	  {
	     cout<<"UN SUFFICEENT BALANCE:";
	     goto lb;
	  }
	  else
	  {
	   fin.get(ch);
	   fin.close();
	   int tran;
	   tran=bal-amt;
	   cout<<"TRANSACTION IN PROCESS......";
	    delay(1000);
	    cout<<"PREES ANY KEY TO CONTINUE....";
	    getch();
	   fin.get(ch);
	   ofstream fout("AMT.txt",ios::out);
	   fout<<tran;
	   fout.close();
	   getch();
	  }
	  goto lb;

case 4:ifstream in("AMT.txt",ios::in) ;
       in>>bal;
       cout<<"YOUR BALANCE IS:";
       cout<<bal;
       getch();
       goto lb;

 case 3:  char pin[4],user1[7],pswd2[7],pin1[5],tempu[6],tempp[6],temppin[4];
	  cout<<"ENTER YOUR CURRENT PIN:";
	  gets(pin);
	  ifstream us("user.txt",ios::in);
	  us.seekg(0);
	  cout<<"\n";
	  us.get(user1,7);
	  us.get(ch);
	  us.get(pswd2,7);
	  us.get(ch);
	  us.get(pin1,5);
	  us.get(ch);
	  if(strcmp(pin1,pin)==0)
	  {
	   cout<<" ENTER NEW PIN: ";
	   gets(pin);

	   cout<<" REENTER NEW PIN:";
	   gets(temppin);

	   if(strcmp(pin,temppin)==0)
	   {

	   strcpy(tempu,user1);
	   strcpy(tempp,pswd2);
	   strcpy(pin1,pin);
	   ofstream fout("user.txt",ios::out);
	   fout<<user1<<"\n"<<pswd2<<"\n"<<pin;
	   cout<<"PIN CHANGED SUCCESSFILLY:!";
		   getch();

	   }

	  }
	  goto lb;

	  case 6:
		  cout<<"THANKYOU:";
		  getch();
		  break;
  }
}
