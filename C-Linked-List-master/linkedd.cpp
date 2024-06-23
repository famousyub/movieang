#include<iostream>
#include<fstream> 
#include <cstdlib> 

using namespace std;  

struct user 
{
	
	string f_name, l_name, address, gender, id, age, phone;
		
};
struct unode
{
	user data;
	unode *next;
	unode *prev;
};
struct ulist
{
	int size;
	unode *head;
	unode *tail;
}; 

void userfile(ulist &list)
{ 

	//user_size = 0;
	ifstream infile;
	infile.open("users.txt");
		while(infile.good())
		{
			unode *node = new unode;
			if (list.head == NULL)
			{
				node->prev = NULL;
				node->next = NULL;
				list.head = node;
				list.tail = node;	
			}
			else
			{
				list.tail->next = node;
				node->prev = list.head;
				node->next = NULL;
				list.tail = node;
			}
			
			getline(infile, node->data.f_name);
			getline(infile, node->data.l_name);
			getline(infile, node->data.address);
			getline(infile, node->data.gender);
			getline(infile, node->data.id);
			getline(infile, node->data.age);
			getline(infile, node->data.phone);
			list.size++;
			
			string blankline;
			if(!getline(infile, blankline))
			break;
		}
	infile.close();
}

//function to print all users
void printusers(ulist &list)
{ 

	cout << "\t------------------------------------------------------------" << endl;
	cout << "\tUserID\tFname\tLname\tGender\tAge\tPhone\tAddress " << endl;
	cout << "\t------------------------------------------------------------" << endl;
	
		unode *node = list.head;
		for(int i = 0; i < list.size ;i++)
		{
				cout << node->data.f_name << endl;
				cout << node->data.l_name << endl;
				cout << node->data.address << endl;
				cout << node->data.gender << endl;
				cout << node->data.id << endl;
				cout << node->data.age << endl;
				cout << node->data.phone << endl;
		} 
	cout << "\tTotal users: "<< list.size <<endl;
	cout << "\t------------------------------------------------------------" << endl;

}
int main() 
{ 
	int opt;
	//Deaclare and initialize the list
	ulist list;
	list.head = NULL;
	list.tail = NULL;
	list.size = 0;
	
	userfile (list);
		//print startup message
		cout<<"\n\n\t\t*************************************************"<<endl; 
		cout<<"\n\t\tMinistry of health contact tracing analyser:"<<endl;
		cout<<"\n\t\t*************************************************"<<endl;
	
	system ("pause");
	system ("CLS"); 
	
	do{
		//print menu options
		cout<< "\n\tWhat would you like to do?"<< endl;
		cout<< "\n\t1. Exit the program "<< endl;
		cout<< "\t2. Print the users "<< endl;
	
		cout<< "\n\tEnter your option : ";
		
		//validating user input using a while loop
		while (!(cin>>opt) || opt > 2 || opt < 1)
		{
			cout<<"\n\tINVALID OPTION\n"<<endl;
			cin.clear();
			cin.ignore(20, '\n');
			break;
		}
		
		switch (opt)
			{       
				case 1:          
					exit(1);          
					break;       
				case 2:          
					printusers(list);          
					break;
			}
			
			system ("pause");
			system ("CLS");
	}while( opt != 1 );			 				

	
return 0; 
}