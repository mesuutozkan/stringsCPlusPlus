#include <iostream>
#include <string>		//use this for another IDEs.

using namespace std;

int main()
{
	char name[] = "John";	//C type string
	cout << name << endl;

	int length = 0;

	while (name[length] != '\0')		// \0 -> null character
	{
		length++;
	}

	cout << "length: " << length << endl;

	string myStr = "Hello";		//modern C++ string class 
	cout << myStr.append(" John") << endl;		//append method to add new string to end of the mystr. 

	// name.append is not possible. Because it is C string.

	char newName[] = "Jack";
	string newStr = string(newName);
	cout << "new name that is converted to C++ string: " << newStr << endl;		//typecast C str to C++ str.
	
	newStr.append(" Hello");
	cout << "appended and now it is : " << newStr << endl; //newStr is now: Jack Hello.


}