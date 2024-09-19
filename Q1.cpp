/*
Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations
•	Add Record:
•	Show/List Data:
•	Search Record:
•	Edit Record:
•	Delete Record:
*/

#include<iostream>
#include<fstream>
using namespace std;

void add_records(){
	
}

void show_data(){
		
}

void search_data(){
	 
}

void edit_record(){
	
}

void delete_record(){
	
	
}
int main(){
	
	ifstream fin;
	ofstream fout;
	int ch;
	cout<<"Enter the Choise "<<endl;
	cin>>ch;
		
	do{
		cout<<"--------------------------------"<<endl;
		cout<<"--------- Dena Bank ------------"<<endl;
		cout<<"--------------------------------"<<endl;
		cout<<"Enter the choise to Perform Operations"<<endl;
		cout<<"Welcome to our Banking System\n"<<endl;
		cout<<"1.Add Records"<<endl;
		cout<<"2.Show List Data"<<endl;
		cout<<"3.Search Record"<<endl;
		cout<<"4.Edit Record"<<endl;
		cout<<"5.Detete Record"<<endl;
		cout<<"0.Exit"<<endl;
		
		switch(ch){
			case 1: 
				add_records();
				break;
			case 2: 
				show_data();
				break;
			case 3:
				search_data();
				break;
			case 4: 
				edit_record();
				break;
			case 5:
				delete_record();
				break;
			case 0:
				cout<<"\nThank you for Banking"<<endl;
				break;
			default:
				cout<<"\nPlease Enter the valid choice\n";
		}
	}while(false);
	
	
	
	return 0;
}