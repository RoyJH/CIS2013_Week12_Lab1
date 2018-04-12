#include <iostream>
#include <cstring>
using namespace std;

class Human {
	private:
		int legs;
		int arms;
	public:
		string name;
		string hair;
		
		Human(){
			setName();
			setHair();
			legs=2;
			arms=2;
		}
	int getLegs(){
		return legs;
	}
	int getArms(){
		return arms;
	}
	
	int setLegs(){
		cout << "How many legs does this person have? ";
		cin >> legs;
		return legs;
	}
	void setName(){
	cout << "What do you want to name your person? ";
	cin >> name;
	}
	void setHair(){
	cout << "What color is their hair? ";
	cin >> hair;
	}
};
class Man: public Human{
	public:
	bool hasEgo = true;
	string pee = " standing ";
};
class Woman: public Human{
	public:
	bool hasEgo = false;
	string pee = " sitting down.";
};

int main(){
	
	Man bob;
	Woman sue;	
	cout<< "Our " << bob.name <<" has " << bob.getLegs()<< " legs & "<< bob.getArms()<< " arms and their hair color is "<< bob.hair<<endl;
	cout << bob.name <<" has an ego? " <<bob.hasEgo<< endl <<" and pees " << bob.pee << endl;
	cout<< "Our "<< sue.name<<" has " << sue.getLegs()<< " legs & "<< sue.getArms()<< " arms and their hair color is "<< sue.hair<<endl;
	cout << sue.name <<" has an ego? " <<sue.hasEgo<< endl <<" and pees " << sue.pee << endl;
	return 0;
}