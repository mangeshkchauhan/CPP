#include<iostream>
using namespace std;

class Book{                           //Class
	public:
		string title;
		string author;
		int pages;
		Book(){
			title="No Title";
			author="No Author";
			pages=0;
		}
		Book(string aTtile, string aAuthor, int aPages){  //Constraints
			title=aTtile;
			author=aAuthor;
			pages=aPages;
		}
};

int main()
{
	Book book1("Harry Potter","JK Rowlings",500);   //Object
	Book book2("Atomic Habits","James Clear",290);
	Book book3;
	
	cout<<book3.title;
	
	
	return 0;
	
	
}
