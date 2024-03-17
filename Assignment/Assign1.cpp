/*1. Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
Input: */
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private :
		int roll_no;
		char name[12];
		public :
			
                         void set(int rollno,char n[])
			{
				roll_no=rollno;
				strcpy(name,n);
			}
			void show()
			{
				cout<<"\nRoll_no:"<<roll_no;
				cout<<"\nNAme:"<<name;
			}
	
};
int main()
{
	Student s;
	 s.set(2,"John");
	 s.show();
	return 0;
}

