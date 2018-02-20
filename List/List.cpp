// Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class List
{
public:
	char key;
	List* Next;
	List* Prev;
	List(List *pr);
	~List();
};

List::List(List *pr)
{
	Next=NULL;
	Prev=pr;
	key=NULL;
};

List::~List()
{

};

int main()
{
	List *Lst,*temp,*temp1;
	Lst= new List(NULL);
	char k;
	int length=0;


	temp=Lst;
	do
	{
		k = cin.get();
		temp->key=k;
		temp->Next=new List(temp);
		temp=temp->Next;
		
	} while (k!='.');

	temp=Lst;
	cout << endl << "List in -> direction: ";
	while (temp!=NULL)
	{
		cout << temp->key;
		if (temp->Next==NULL) temp1=temp;
		temp=temp->Next;
	};

	cout << endl << "Rezultat: ";
	temp=Lst;
	while (temp->Next!=NULL)
	{
		while ((temp->key != ' ') && (temp->key != '.'))
		{
			length += 1;
			temp = temp->Next;
		}
		temp1=temp;
		if (length%2==1)
		{
			for(int i=1; i<length; i++) temp=temp->Prev;
			for(int i=0; i<length-2; i++)
			{
				cout << temp->key;
				temp = temp->Next;
			}
			if(length!=1) cout << " ";
		}
		if ((length == 3) || (length == 4) || (length == 5))
		{                                                       
			temp=temp1->Next;                                   
			while (temp->key != ' ' && temp->key != '.')
			{
				temp=temp->Next;				
			}
		}
		temp = temp->Next;
		length=0;
	};

	while (Lst!=NULL)
	{
		temp=Lst;
		Lst=Lst->Next;
		delete temp;
	};
	
	cin.get();
	cin.get();
	return 0;
};

//comment for GitLab
//comment fot newBranch
//comment for master

//comment for commit 1
//comment for commit 2
//comment for commit 3

//comment for remote git
//comment for local commit

//comment for local commit2

