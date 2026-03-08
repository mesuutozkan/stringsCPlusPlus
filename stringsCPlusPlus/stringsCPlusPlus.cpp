#include <iostream>
#include <string>		//use this for another IDEs.

using namespace std;

int main()
{
	string fruit = "Apple";

	cout << fruit << endl << fruit.length() << endl;

	cout << fruit.append(" juice") << endl;

	string neu = fruit + " is nice";
	cout << neu << endl;

	cout << neu.substr(0, 5) << endl;		//Apple
	cout << neu.substr(15, 4) << endl;		//nice

	size_t pos = neu.find("nice");		//dont use int. use size_t which takes unsigned integers.
	if (pos != string::npos)		//npos is a value that if boolean is false, pos = neu.find() is equal to npos.
	{
		cout << "word is found. Position: " << pos << endl;		//15
	}

	pos = neu.find("bice");
	if (pos == string::npos)
	{
		cout << "word is not found. npos: " << pos << endl;		//random unsigned integer
	}

	neu.erase(5, 6);
	cout <<	"After erase method: " << neu << endl;		//Apple is nice

	neu.replace(0, 5, "Banana");
	cout << "After replace method: " << neu << endl;	//Banana is nice

	neu.insert(6, " juice");
	cout << "After insert method: " << neu << endl;

	cout << "charachter at index 13: " << neu.at(13) << endl; //i

	return 0;
}