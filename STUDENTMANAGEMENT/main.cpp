#include<iostream>
#include<vector>
#include<string>
using namespace std;
				// STUDENT MANAGEMENT SYSTEM
				// 1. Add New Student
				// 2. Display All Student
				// 3. Search Student
				// 4. Update Student
				// 5. Delete Student
				// 6. Exit
class Student{
private:
	int rollno, age;
	string name;
public:
	Student(int rollno, int age, string name) {
		this->rollno = rollno;
		this->age = age;
		this->name = name;
	}
	void setRollno(int rollno)
	{
		this->rollno = rollno;
	}
	int getRollno()
	{
		return rollno;
	}
	void setAge(int age) {
		this->age = age;
	}
	int getAge() {
		return age;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return name;
	}
	void displayStudent()
	{
		cout << "\t\tRollno No:" << rollno << endl;
		cout << "\t\tName: " << name << endl;
		cout << "\t\tAge: " << age << endl;
	}
};
//5. Delete student 
void deleteStudent(vector<Student> & students) {
	string name;
	cout << "\t\tEnter Name to delete: ";
	cin.ignore();
	getline(cin, name);
	for (int i = 0; i < students.size(); i++) {
		if (students[i].getName() == name) {
			students.erase((students.begin() + i));
				cout << "\t\tstudent remove successfully " << endl;
		}
	}

}
// 4.Update student
void updateStudent(vector<Student> &students)
{
	string sname;
	bool found = false;
	int choice;
	cout << "\t\tEnter name to update record: ";
	cin.ignore();// xoa 1 ki tu trong bo nho dem
	// nhap ki tu
	getline(cin,sname);
	for (int i = 0; i < students.size(); i++) {
		if (students[i].getName() == sname) {
			found = true;
			cout << "\t\t-------Student found-------- " << endl;
			cout << "\t\t 1.Upate rollno: " << endl;
			cout << "\t\t 2.Upadte Name: " << endl;
			cout << "\t\t 3.Update age: " << endl;
			cout << "\t\t Enter Your choice: ";
			cin >> choice;
			switch (choice)
			{
			case 1: {
				int rno;
				cout << "\t\tEnter new rollno: ";
				cin >> rno;
				students[i].setRollno(rno);
				break;
			}
			case 2: {
				string name;
				cout << "\t\tEnter new name: ";
				cin.ignore();
				getline(cin,name);
				students[i].setName(name); 
				break;				
			}
			case 3: {
				int age;
				cout << "\t\tEnter new Age: ";
				cin >> age;
				students[i].setAge(age);
				break;
			}
			default:
				cout << "\t\t Invalid number " << endl;

			}
		}
		else {
			cout << "\t\t Record Not found Here" << endl;
		}
	}
}
//3.Search student
void searchStudent(vector<Student>& students)
{
	int rollno;
	cout << "\t\tEnter rollno: ";
	cin >> rollno;
	// duyet tat ca hs trong vector
	for (int i = 0; i < students.size(); i++)
	{
		if (students[i].getRollno() == rollno)
		{
			cout << "\t\t--------STUDENT FOUND---------" << endl;
			students[i].displayStudent();
			return;
		}
	}
}
//2.DisplayAllStudent
void DisplayAllStudent(vector<Student>& students) {
	//1 kiem tra hoc sinh ton tai khong
	if (students.empty())
	{
		cout << "\t\t No Student Found....! " << endl;
	}
	//2 duyet tat ca hs
	for (int i = 0; i < students.size(); i++) {
		students[i].displayStudent();
		cout << endl;
	}
}
//1. ADD Student 
void addNewStudent(vector <Student>& students)
{
	int rollno, age;
	string name;
	cout << "\t\tEnter rollno: ";
	cin >> rollno;
	cout << "\t\tEnter name: ";
	cin >> name;
	cout << "\t\tEnter Age: ";
	cin >> age;
	// check if student already exit
	for (int i = 0; i < students.size(); i++) {
		if(students[i].getRollno() == rollno)
		{ 
			cout << "\t\tStudent Already Exit.....! " << endl;
			return;
		}
	}
	Student newStudent(rollno, age, name);
	students.push_back(newStudent);
	cout << "\t\tStudent Add Successfully.....!";
}
int main() {
	vector<Student> students;
	char choice;
	do
	{
		system("cls");
		int op;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t\tStudent Management System" << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "\t\t1.Add New Student" << endl;
		cout << "\t\t2.Display All Student" << endl;
		cout << "\t\t3.Search Student " << endl;
		cout << "\t\t4.Update Student " << endl;
		cout << "\t\t5.Delete Student " << endl;
		cout << "\t\t6.Exixt " << endl;
		cout << "\t\tEnter Your Choice: ";
		cin >> op;
		switch (op)
		{
		case 1: {
			addNewStudent(students);
			break;
		}
		case 2: {
			DisplayAllStudent(students);
			break;
		}
		case 3: {
			searchStudent(students);
			break;
		}
		case 4: {
			updateStudent(students);
			break;
		}
		case 5: {
			deleteStudent(students);
			break;
		}
		default:
			cout << "\t\tInvalid Number......!" << endl;
			break;
		}
		cout << "Do you want continue [YES/NO] ? :";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

return 0;
}	