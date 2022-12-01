// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1. Вияснити, чи є в цій послідовності такі елементи s[i–1] , s[i+1]
// що s[i–1] – це знак плюс ('+'), а s[i+1] – знак мінус ('-'),
// та обчислити їх кількість.
// 2. Замінити кожну групу символів s[i–1] , s[i] , s[i+1] – таких, що
// s[i–1] – це знак плюс ('+'), а s[i+1] – знак мінус ('-')
// четвіркою зірочок "****".
#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
	{
		pos++;
		if (s[pos + 1] == '-')
			k++;
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find(',', pos)) != -1)
		if (s[pos + 1] == '-')
			s.replace(pos, 2, "**");
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
	getline(cin, str);
	cout << "String contained " << Count(str) << " groups of ', -'" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	
		return 0;
}