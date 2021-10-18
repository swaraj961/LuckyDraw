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
    cout<<"\t   ~~~~BIENVENIDO AL DIBUJO ALEATORIO ALEATORIO ~~~~\n\n ";

    cout<<"\t   *********GANA PREMIOS EN $EMOCIONADOS ********\n\n\n";
    cout<<"~~1:> Apple Iphone 7 256GB  \n\n";
    cout<<"~~2:> HP i5-Laptop\n\n";
    cout<<"~~3:> amazon rs500 giftcard\n\n";

    cout<<"*****El número total de entradas vendidas es **** = "<<n;

    cout<<"\n\n";

    cout<<"**Tntroduzca Su Nombre** =";
    gets(name);
    cout<<"\n";
    cout<<"**Ingresa tu ubicación* =";
    gets(loc);
    cout<<"\n\n";

    cout<<"**Ingrese su número de boleto (dos dígitos)**= ";
    cin>>c;
    //rd=rand()%n+1;
    system("color 0a");
    cout<<"\n\n\n\t\t   Espere mientras carga\n\n";
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
        cout<<"\n El afortunado ganador es :";
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
        cout<<"\n\nEres uno de los afortunados ganadores";
    else
    {
        cout<<"\t\n\n ~~~ Perdón "<<name<<" :( BadLuck debe intentar la próxima vez !!\n";
        return 0;
    }
    //cout<<"\n";
    //cout<<"\t\n WOW ! Random lucky winner is ticket number="<<rd;
    cout<<"\n";
    //if (rd==c)
    cout<<"\t\n***~~~Genial tu ganas IPHONE 7 256 GB ~~~***";
    //
    cout<<"\t\t\t\n\n  ^_^ GRACIAS POR PARTICIPAR EN LUCKYDRAW ^_^ \n\n";
    system("pause");
    getch();
}


