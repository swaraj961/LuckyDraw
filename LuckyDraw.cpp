#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<time.h>


using namespace std;
int main()
{
    system("color 0a");
    srand(time(0));
    int rd;
    char name[30];
    int n=100;
    char loc[20];

    int c;
    cout<<"\n";
    cout<<"\t   ~~~~WELCOME TO RANDOM LUCKY DRAW ~~~~\n\n ";

    cout<<"\t   *********WIN EXCITED $PRIZES ********\n\n\n";
    cout<<"~~1:> Apple Iphone 7 256GB  \n\n";
    cout<<"~~2:> HP i5-Laptop\n\n";
    cout<<"~~3:> amazon rs500 giftcard\n\n";

    cout<<"***** Total Number of Tickets Sold Are **** = "<<n;

    cout<<"\n\n";

    cout<<"**Enter your Name** =";
    gets(name);
    cout<<"\n";
    cout<<"**Enter your Location* =";
    gets(loc);
    cout<<"\n\n";

    cout<<"**Enter your (Two Digit) Ticket Number**= ";
    cin>>c;
    //rd=rand()%n+1;
    system("color 0a");
    cout<<"\n\n\n\t\t   Please wait while loading\n\n";
    char a=177, b=219;
    cout<<"\t\t\t";
    for (int i=0; i<=15; i++)
        cout<<a;
    cout<<"\r";
    cout<<"\t\t\t";
    for (int i=0; i<=15; i++)
    {
        cout<<b;
        for (int j=0; j<=1e8; j++);
    }
//for(int i=0;i<)
    int f[10],win=0;
    char names[10][40]= {"swaraj","balaji","manorit","rajat","vaisnav","sunny","neeraj","rudra","rahul","sandeep"};
    char loca[7][40]={"Delhi","odisha","Mumbai","Assam","j&k","M.P","Uttrakhand"};
    for(int i=0; i<10; i++)
    {
        f[i]=rand()%100;
        for(int j=0; j<i; j++)
        {
            if(f[i]==f[j])
            {
                i--;
                continue;
            }
        }
        cout<<"\nLucky winner is :";
        if(f[i]<10)cout<<"0";
        cout<<f[i];


        for (int j=0; j<=1e9; j++);
        if(c==f[i])
        {
            win=1;
            cout<<" named  "<<name<<" from  "<<loc;

        }
        else
            cout<<" named  "<<names[i]<<" from  "<<loca[i%7];

    }
    if(win==1)
        cout<<"\n\nYou are one of the lucky winner";
    else
    {
        cout<<"\t\n\n ~~~ Sorry "<<name<<" :( BadLuck must try next time !!\n";
        return 0;
    }
    //cout<<"\n";
    //cout<<"\t\n WOW ! Random lucky winner is ticket number="<<rd;
    cout<<"\n";
    //if (rd==c)
    cout<<"\t\n***~~~Great You WIn IPHONE 7 256 GB ~~~***";
    //
    cout<<"\t\t\t\n\n  ^_^ THANKS TO PARTICIPATE IN LUCKYDRAW ^_^ \n\n";
    system("pause");
    getch();
}


