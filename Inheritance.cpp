#include<iostream>
using namespace std;

class Chef {                                           //Super class
	public:
		void makeChicken(){
			cout<<"The chef makes chicken"<<endl;
		}
		void makeSalad(){
			cout<<"The chef makes salad"<<endl;
		}
		void makeSpecialDish(){
			cout<<"The chef makes shawarma plate"<<endl;
		}
};
class ItalianChef : public Chef{                  //Inherited Sub class
	public:
	void makePasta(){
		cout<<"The chef makes pasta"<<endl;
	}
	void makeSpecialDish(){                           //Overriding
			cout<<"The chef makes pizzaroni"<<endl;
		}
};

int main()
{
	
	Chef chef;
	chef.makeSpecialDish();
	
	ItalianChef italianchef;
	italianchef.makeSpecialDish();
	
	return 0;	
}
