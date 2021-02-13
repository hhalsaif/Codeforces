#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	int n;
	cin >> n;
	cin >> word;
	if(word.size() > n)
		cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
	else
		cout << word << endl;
	return 0;
}
