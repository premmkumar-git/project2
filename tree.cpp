#include<iostream>
using namespace std;


struct node
{
	int data;
	node *next;
};
node *head;
int main()
{
	//creating a new head pointer
	head=NULL;
	int c=0;
	cout<<"how many numbers you want to enter the numbers in stak\n";
	int n;
	cin>>n;
	//cerating new node to add the eliments 
		node *temp1;
		
		for(int i=0;i<n;i++)
		{
		node temp;
		cout<<"enter the eliment:\n";
		int a;
		cin>>a;
		temp.data=a;
		temp.next=NULL;
		head=&temp;
	//	if(c==0){
	//		temp1=head;
	//		c++;
	//	}
		cout<<head->data<<endl<<endl;
		cout<<temp1->data<<endl;
	//	if(temp1->next==NULL)
		 //		cout<<"eror";
		temp1=temp1->next;
		
	}
	 /*for(int j=0;j<n;j++)
	{   cout<<"be cool";
		cout<<temp1->data<<endl;
		temp1=temp1->next;
		cout<<endl<<"hiiiii"<<endl;
    }*/
    return 0;
}
