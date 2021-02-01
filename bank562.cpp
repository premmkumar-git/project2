#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class bank
{	
 
	int balance;
	public :
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};

void bank::open_account()
{
	cout<<"\t\t\tenter ur full name ::\n";


	cin>>name;
	cout<<"\t\t\tenter ur address ::\n";
	

	cin>>addres;
	cout<<"\t\t\ttype of account (saving s, current c)::\n";
	cin>>y;
	cout<<"\t\t\tenter amount for deposite::\n";
	cin>>balance;
	
	cout<<"\t\t\tur account has been created succes fully\n"<<endl<<endl;
}

void bank::deposite_money()
{	 int a;
	cout<<"\t\t\tenter how much u deposite::\n";
	cin>>a;
	balance+=a;
	cout<<"\t\t\ttotal ammount y deposite::\t"<<balance<<endl<<endl;
}

void bank::display_account()
{
	cout<<"\t\t\tyour full name::\t"<<name<<endl;
	cout<<"\t\t\tyour address::\t\t"<<addres<<endl;
	cout<<"\t\t\ttipe of account::\t"<<y<<endl;
	cout<<"\t\t\tamount u deposited::\t"<<balance<<endl<<endl;
}

void bank::withdraw_money()
{
	cout<<"\t\t\tenter amount ::\n";
	int a;
	cin>>a;
	balance-=a;
	cout<<"\t\t\tur current amount::\t"<<balance<<endl<<endl;
}

vector<string>arr(10);
int k=0;
int index=0;
int main()
{
 
	int n=0;
	cout<<"\t\t\tWELCOME TO BANKOF B A N O T H"<<endl;
	
	cout<<"DETAILS ENTERED\n BY CUSTOMER\n";
	vector<bank>b(10);
	while(n!=5)
	{
	cout<<"\t\t\tenter ur name"<<endl;
	string str;
	cin>>str;
	
	int count=0;
	
	for(int i=0;i<arr.size();i++)
	{
		if(str==arr[i])
		{	count++;
			index=i;
			cout<<"\t\t\tFetcud ur account deails"<<endl;
		}
	}
	if(!count)
	{
	
	cout<<"\t\t\tu dont have a account plz creat"<<endl;
	b[k].open_account();
	index=k;
	arr[k++]=str;
	}
	
	
	
	cout<<"\t\t\t1) open account\n";
	cout<<"\t\t\t2) deposite money\n";
	cout<<"\t\t\t3) withdraw money\n";
	cout<<"\t\t\t4) bisplay account\n";
	cout<<"\t\t\t5) exit\n\n";
	cin>>n;
	if(n!=1&&n!=2&&n!=3&&n!=4&&n!=5)
	{
		cout<<"\t\t\tINVALID OPERATION"<<endl;
		n=0;
	}
	else
	{
	
	if(n==1)
	b[index].open_account();
	
	if(n==2)
	b[index].deposite_money();
	
	if(n==3)
	b[index].withdraw_money();
	
	if(n==4)
	b[index].display_account();
	}
	}
	return 0;
}
