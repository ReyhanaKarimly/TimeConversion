#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string timeConversion(string s) {
	
	
	char q[3];
	for (size_t i = 0; i <3; i++)
	{
		q[i] = s[i];

	}
	int time = atoi(q) + 12;
	string s_time = to_string(time);
	
	
	
	if (s[s.length()-2]=='A' && time==24)
	{
		s.replace(s.begin(), s.begin() + 2,"00");
		
	}
	else if (s[s.length() - 2] == 'P' && time!=24)
	{

		s.replace(s.begin(), s.begin() + 2, s_time);

	}
	s.erase(s.length() - 2, s.length());
	return s;
	
}

int main() {
	string s;
	cin >> s;
	string result = timeConversion(s);
	cout << result << endl;
	
	system("pause");
	return 0;
}