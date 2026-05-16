#include <iostream>
#include <string>
using namespace std;

class Student
{
	string name;
	int rollNo;
	float marks[3];

public:
	Student(string n, int r, float m[3])
	{
		name = n;
		rollNo = r;
		for (int i = 0; i < 3; i++)
		{
			marks[i] = m[i];
		}
	}

	float getTotal()
	{
		float total = 0;
		for (int i = 0; i < 3; i++)
		{
			total += marks[i];
		}
		return total;
	}

	float getAvg()
	{
		float average = getTotal() / 3;
		return average;
	}

	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Roll No: " << rollNo << endl;
		for (int i = 0; i < 3; i++)
		{
			cout << "Subject " << i + 1 << ": " << marks[i] << endl;
		}

		cout << "Total are: " << getTotal() << endl;
		cout << "Average is: " << getAvg() << endl;
	}
};

int main()
{
	string name;
	float marks[3];
	int rollNo;

	cout << "Enter Your Name: ";
	getline(cin, name);
	cout << "Enter Your Roll No: ";
	cin >> rollNo;

	cout << "Enter the marks of three Subjects" << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> marks[i];
	}

	cout << "================Display Result=====================" << endl;

	Student st1(name, rollNo, marks);
	st1.display();
}