// TODO: implement romanToInteger in here
#include <string>
using std::string;

int romanCharToInt(const char & romanChar) {
	if (romanChar == 'M') return 1000;
	if (romanChar == 'D') return 500;
	if (romanChar == 'C') return 100;
	if (romanChar == 'L') return 50;
	if (romanChar == 'X') return 10;
	if (romanChar == 'V') return 5;
	if (romanChar == 'I') return 1;
}

int romanToInteger(const string & s) {
	int toReturn = 0; 

	for (int i = 0; i < s.size()-1; ++i) {
		if (romanCharToInt(s[i]) > romanCharToInt(s[i+1]))
			toReturn += romanCharToInt(s[i]);
		else toReturn -= romanCharToInt(s[i]);
	}

	return toReturn += romanCharToInt(s[s.size() - 1]);
}