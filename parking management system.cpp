#include<iostream.h>
#include<conio.h>
#include<string.h>
main()
{
int bike=0;
int car=0;
int bus=0;
int n,a,g,h;
clrscr();
cout<<"********PARKING MANAGEMENT SYSTEM******* \n\n\n";
cout<<"* Enter 1 to add vehicles:"<<endl;
cout<<"* Enter 2 to check total fair:"<<endl;
cout<<"* Enter 3 to check total no. of bikes:"<<endl;
cout<<"* Enter 4 to check total no. of cars:"<<endl;
cout<<"* Enter 5 to check total no. of bus:"<<endl;
cout<<"* Enter 6 to check total no. of vechiles:"<<endl;
cout<<"* Enter 7 to exit:"<<endl;
while(n!=7)
{
cout<<endl<<endl;
cout<<"                              _     _"<<endl;
cout<<"                             ( ----- )"<<endl;
cout<<"                              ) . . ("<<endl;
cout<<"________,--.(_Y_),--._________"<<endl;
cout<<"                        `--'           `--'"<<endl<<endl;
cout<<"**CHOOSE WHAT YOU WISH TO DO:**"<<endl;
cin>>n;
if(n==1)
{
cout<<"enter 1 to add bike"<<endl;
cout<<"enter 2 to add car"<<endl;
cout<<"enter 3 to add bus"<<endl;
cin>>a;
if(a==1)
{bike++;
cout<<"bike successfully added"<<endl;
}
else if(a==2)
{car++;
cout<<"car successfully added "<<endl;
}
else if(a==3)
{bus++;
cout<<"bus successfully added"<<endl;
}
}
g=bike*20+car*40+bus*60;
if(n==2)
{cout<<endl<<g;}
if(n==3)
cout<<endl<<bike;
if(n==4)
cout<<endl<<car;
if(n==5)
cout<<endl<<bus;
h=bike+car+bus;
if(n==6)
cout<<endl<<h;
}
if(n==7)
cout<<"press any key to exit";
getch();
}
