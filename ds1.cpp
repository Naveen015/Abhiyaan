#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct node
{ string url;
  struct node *next;	
}*p,*rear = NULL;

void enterurl()
{
	string url;
	cout<<"\nEnter the url : ";
	cin>>url;
	p = new node;
	p->url = url;
	if(rear == NULL)
	   p->next =  NULL;
	else
	   p->next = rear;
	rear = p;		
}

void goback()
{
	if(rear==NULL)
		cout<<"\n\nCan't Go Back!!!";
	else
	   {p=rear; 
        rear=rear->next;
        delete p;
       }
}

int main()
{ 
	int opt;
	while(1)
	{
		cout<<"\n\n\n\"FOO Browser\"!";
        if(rear!=NULL)
			cout<<"\n\nWelcome to "<<rear->url;
		cout<<"\n\n1.Enter a Url\n2.Go back\n3.Exit\n";
		cout<<"Enter the option:";
		cin>>opt;

		switch(opt)
		{ case 1: enterurl();
				  break;
		  case 2: goback();
				  break;
	  	  case 3: exit(0);

	  	  default: cout<<"\nEnter a valid option!";
	    }
    }	
return 0;
}