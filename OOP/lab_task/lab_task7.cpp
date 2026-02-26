#include <iostream>
#include <string>
using namespace std;

// ==================multiple inheritance=================

// class Academic{
//	float academicMarks;
//	public:
//		Academic(float academicMarks) : academicMarks((academicMarks > 0 && academicMarks <= 100) ? academicMarks : 0.0)  {
//			if(!(academicMarks > 0 && academicMarks <= 100)){
//				cout << "Please Enter Between 1-100\n";
//			}
//		};
//		void show(){
//			cout << "Academic Marks: " << academicMarks << endl;
//		}
// };
//
// class Sports{
//	float sportScore;
//	public:
//	Sports(float sportScore) : sportScore((sportScore>0 && sportScore <= 10) ? sportScore : 0.0 ) {
//		if(!(sportScore > 0 && sportScore <= 10)){
//			cout << "Please Enter Between 1-10\n";
//		}
//	};
//
//	void show(){
//		cout << "Sport Score: " << sportScore << endl;
//	}
// };
//
// class StudentPerformance : public Academic, public Sports {
//	string name;
//	public:
//		StudentPerformance(float academicMarks, float sportScore, string name) :
//		Academic(academicMarks), Sports(sportScore), name(name) {};
//
//		void studentDetail(){
//			cout << "Name: " << name << endl;
//		}
// };
//
// int main(){
//	StudentPerformance st1(90, 10, "Ali");
//	st1.studentDetail();
//	st1.Academic::show();
//	st1.Sports::show();
// }

// ==================multilevel inheritance=================
// class Person
// {
//     string name;
//     int age;

// public:
//     Person(string name, int age) : name(name), age(age) {
//                                    };
//     string getName() const
//     {
//         return name;
//     }
//     int getAge() const
//     {
//         return age;
//     }

//     void personDetail()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };

// class Student : public Person
// {
//     string studentID;
//     float m1, m2, m3;

// public:
//     Student(string name, int age, string studentID, float m1, float m2, float m3) : Person(name, age), studentID(studentID), m1(m1), m2(m2), m3(m3) {

//                                                                                     };

//     string getID()
//     {
//         return studentID;
//     }
//     float getM1()
//     {
//         return m1;
//     }

//     float getM2()
//     {
//         return m2;
//     }

//     float getM3()
//     {
//         return m3;
//     }

//     void studentDetail()
//     {
//         cout << "Roll Number: " << studentID << endl;
//         cout << "Marks : " << endl;
//         cout << m1 << " " << m2 << " " << m3 << endl;
//     }
// };

// class Result : public Student
// {
//     float total, average;

// public:
//     Result(string name, int age, string studentID, float m1, float m2, float m3) : Student(name, age, studentID, m1, m2, m3), total(0), average(0) {
//                                                                                    };

//     float getTotal()
//     {
//         total = getM1() + getM2() + getM3();
//         return total;
//     }
//     float getAverage()
//     {
//         average = getTotal() / 3;
//         return average;
//     }

//     void display()
//     {
//         cout << "Total: " << total << endl;
//         cout << "Average: " << average << endl;
//     }
// };

// int main()
// {
//     Result student("Ali", 18, "Su92-052", 89, 90, 80);
//     student.getTotal();
//     student.getAverage();
//     student.personDetail();
//     student.studentDetail();
//     student.display();
// }

// ==================Diamon Problem=================
class Person
{
    int id;

public:
    void setID(int id)
    {
        this->id = id;
    }
    int getID()
    {
        return id;
    }

    void display()
    {
        cout << "Id: " << id << endl;
    }
};

class Student : virtual public Person
{
};
class Employee : virtual public Person
{
};
class TeachingAssistant : public Student, public Employee
{
public:
};

int main()
{
    TeachingAssistant obj;
    obj.setID(89);
    obj.display();
}