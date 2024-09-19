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
		int empid;
		string name;
		float salary;
	public:
		void set_details(int empid, string name, float salary){
			this->empid=empid;
			this->name=name;
			this->salary=salary;
		}
		void print(){
			cout<<"Employee ID: "<<empid<<"\nEmployee Name: "<<name<<"\nEmployee Salary: "<<salary;
			cout<<"\n"<<endl;
		}
};
int main(){
	int id;
	string nam;
	float sal;
	
	cout<<"Enter the Emplyee Id, Name and Salary";
	cin>>id>>nam>>sal;
	
	Employee e1;
	e1.set_details(id, nam, sal);
	e1.print();
	
	return 0;
}