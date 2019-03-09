#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main()
{int i=0,j[100]={0},tree[100][100];
 int height=0,breadth=0;
 for(int a=0;a<100;a++)
 	{for(int b=0;b<100;b++)
 		tree[a][b]=0;
 	}	
 string str;
 cout<<"Enter the string : ";
 cin>>str;

 for(int x=0;x<sizeof(str);x++)
 {
 	if(str[x]=='[')
 	  {i++;
 	   j[i]=j[i-1]*2;
 	  }
 	else if(str[x]==',')
 	      j[i]++;
         else if(str[x]==']')
         		i--;
         	  else if(isdigit(str[x]))
         	        {if(isdigit(str[x+1]))
         	        	{tree[i][j[i]]= ((int)str[x]-48)*10 + (int)str[x+1]-48;
         	        	 x++;
         	        	}
         	         else	
         	           tree[i][j[i]]= (int)str[x]-48;
         	        }
    if(i>height)
       height=i;
    if(j[i]>breadth)
       breadth=j[i];        	        	
 }
 int n=0;
 for(int a=height;a>=0;a--)
 	n=(2*n)+1;
 cout<<"The binary tree is :\n";
 for(int a=0;a<=height;a++)
 	{for(int b=0;b<=j[a];b++)
 		{if(tree[a][b]!=0)
 		   {cout<<tree[a][b];
 		   	for(i=0;i<n;i++)
 		   		cout<<" ";
 		   }   	
 		 else
 		   {for(i=0;i<=n;i++)
 		   	  cout<<" ";
 		   }  
 		}	  
     n=(n-1)/2;  
 	 cout<<'\n';
 	}
 int rightview[height+1];
 cout<<"\nThe right view is : ";
 for(i=0;i<=height;i++)
     {rightview[i]=tree[i][j[i]];
      cout<<rightview[i]<<" ";
     }

 return 0;		
}

