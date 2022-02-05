#include<iostream>
using namespace std;

class Student{
	public:
		string name;
		string major;
		double gpa;
		Student(){
			name="No name ";
			major="No Major";
			gpa=0;
		}
		Student(string name, string aMajor, double aGpa){
			this->name=name;
			major=aMajor;
			gpa=aGpa;
		}
		
		bool hasHonors(){                      //Object Fucntions
			if(gpa>=3.5){
				return true;
			}
			return false;
		}
};

int main()
{
	Student student1("Jim","Business",2.4);
	Student student2("Pam","Art",3.6);
	Student student3;
	student3.name="Hari";
	cout<<student2.name<<endl;
		
	cout <<student2.hasHonors();	   //Calling object Function
	return 0;
	
	
}
