#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{  
	int tube[100]={0};
	int c=1,opt,i=-1,temp=0,j;
	while(c)
	{   
		cout<<"\n\n1.New people\n2.Kick out\n3.Exit\n";
		cout<<"\nEnter the opton :";
		cin>>opt;
		switch(opt)
		{
			case 1: cout<<"Enter the no. of persons to be added : ";
					cin>>temp;
					for(j=0;j<temp;j++)
					{if(i==99)
				        {cout<<"\nWait, the Tube is full.";
				        break;}
				     else
				        tube[++i]=1;
					}
					cout<<"\n"<<j<<" person is added.";
				    cout<<"\nNo. of people inside = "<<i+1; 	
				    break;
			case 2: if(i<0)
				      cout<<"\nThe Tube is empty.";
				    else
				    {tube[i--]=0;
				     cout<<"\nOne person is kicked out.";
				     cout<<"\nNo. of people inside = "<<i+1;
				    }
				    break;
			case 3: exit(0);

			default : cout<<"\nEnter a valid option.";         
		}

	}
	return 0;
}