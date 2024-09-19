/* Q.No. 3
	Write a program create employee class with members variable as EmpId,Name of Employee and
             Salary. For 10 Employees 
	Print list of all employees.
	Print list of employee who got heights salary.
*/
#include<iostream>
using namespace std;
class Employee{
	private:
		int emp_id[10];
		string name[10];
		float salary[10];
	public:
		void set_details(){
			cout<<"Enter the 10 Employees Details: \n\n\n";
			for(int i = 0; i < 10; i++){
				cout<<"Enter the Details for "<<i<<" Emplyee."<<endl;
				cout<<"Enter the Emplyee Id: "<<endl;
				cin>>emp_id[i];
				cout<<"Enter the Employee Name: "<<endl;
				cin>>name[i];
				cout<<"Enter the Emplyee Salary: "<<endl;
				cin>>salary[i];	
				cout<<"\n\n";
				}
			}
		void list(){
			set_details();
			for(int i = 0; i < 10; i++){
				cout<<"All Emplyee List"<<endl;
				cout<<"\nEmplyee no "<<i<<endl;
				cout<<emp_id[i]<<endl;
				cout<<name[i]<<endl;
				cout<<salary[i]<<endl;
				cout<<"\n";
			}
		}
		
	 void max(){
			for(int i = 1; i < 10; i++){
				if(salary[0] > salary[i]){
					cout<<"\n\nMax Salary Emplyee: "<<endl;
					cout<<emp_id[i]<<endl;
					cout<<name[i]<<endl;
					cout<<salary[i]<<endl;
				}
				else{
					
				}
			}
		}
};
int main(){
	
	Employee e1;
	e1.list();
	e1.max();
	
	return 0;
}