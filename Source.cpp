#include<iostream>
#include<conio.h>
#include<string>


using namespace std;
class atm
{
private:
	int code;
	int amount;
	char name[20];
public:
	void read();
	void display();
	void withdraw();
	void menu();
	
};

void atm::menu()
{
	string ch;
cout<<"\n welcome to ist atm \n\n";
cout<<"1.Press R to read data\n";
cout<<"2.press D to display data\n";
cout<<"3.press W to withdraw amount\n";
cout<<"4.press S to stop system \n\n";
cin>>ch;
if(ch =="R")
{
	read();
}
if(ch=="D")
{
	display();
}
if(ch=="W")
{
	withdraw();
}
if(ch=="S")
{
	exit;
}

}

void atm::read()
{int go;
	cout<<"\nenter code\n";
	cin>>code;
	cout<<"\nenter name\n";
	cin>>name;
	cout<<"\namount\n";
	cin>>amount;
cout<<"\n Hit \'0\' for GoTo MainMenu ";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}

void atm::display()
{
	int go;
cout<<"**********Display*******\n\n";
cout<<"\nCode::: "<<code;
cout<<"\nName:: "<<name;
cout<<"\nAmount "<<amount;
cout<<"\n\n Hit \'0\' for GoTo MainMenu ";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}

void atm::withdraw()
{int go;
	cout<<"Enter code of account\n";
	cin>>code;
	cout<<" Enter Amount";
	cin>>amount;
	cout<<"Amount withdraw successful\n ";
	cout<<"Now amoount in account:: "<<amount-amount;
cout<<"\n\n Hit \'0\' for GoTo MainMenu ";
	cin>>go;
	if(go==0)
	{
		menu();
	}
}

int main()
{
	atm obj;
	obj.menu();
	
getch();
}