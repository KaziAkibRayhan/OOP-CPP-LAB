#include <windows.h>
#include <iostream>

using namespace std;

class Student
{

	string name;
	int id;
	string course;
        string section;

	public:
		void TakeStudentDetails();
		void ShowStudentDetails();
};

void Student :: TakeStudentDetails()
{
	cout<<"\nEnter Student name: ";
	cin>>name;
	cout<<"\nEnter Student id: ";
	cin>>id;
	cout<<"\nEnter Student course: ";
	cin>>course;
	cout<<"\nEnter Student section: ";
	cin>>section;
}


void Student :: ShowStudentDetails()
{
	cout<<"\n\n**** Details of  Student ****";
	cout<<"\nStudent Name      :  "<<name;
	cout<<"\nStudent id        :  "<<id;
	cout<<"\nStudent course      :  "<<course;
	cout<<"\nStudent section    :  "<<section;
	cout<<"\n-------------------------------\n\n";
}


int main()
{
    Student sdt1;

    sdt1.TakeStudentDetails();
    sdt1.ShowStudentDetails();

    return 0;
}
