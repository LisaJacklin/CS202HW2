// LowerCaseLetter.cpp 
//Lisa Jacklin
//Cs 202 Hw 2
//2/17/2022

#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <string>

/*
Requirements:
1. include void to_lower(char* s) ( replaces all upper case to lower case

note: don't use any standard library functions
- if you find a char w value 0 you are at the end

*/

void to_lower(char* s) {
	cout << "function to_lower called" << endl;
	//now, I need to take ascii values and convert all uppercase to lower case...	
	//note ASCII A = 65 Z= 90
	int i = 0;
	//note that \0 is the end functionality of char ( and in ASCII)
	while (s[i] != '\0')
	{
		//so long as the value is equal or between capital a and z
		//it will convert to lower case knowing that the difference from 
		//capital A to lowercase a is 32
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] + 32;


			cout << "adjusted to lower case: " << s[i];
		}
		else  cout << s[i];
		
		++i;
	}
	cout << endl;
	cout << "function to_lower ended" << endl;
}

int main()
{
	cout << "start of main" << endl;

	//this is the code that will be turned to lower case
	//only the H and the W sould be messed with at all.	
	string textToLower = " Hello World";
	cout << "Original Text called" << endl;

	//this should turn the string into constant chars 
	//from here it should be ready to use in the function.
	char* str = const_cast<char*>(textToLower.c_str());
	cout << "string converted to char" << endl;
	
	to_lower(str);

	cout << "end of main " << endl;
}

