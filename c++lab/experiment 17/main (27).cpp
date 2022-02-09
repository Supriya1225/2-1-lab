/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <sstream>
#include<string>
using namespace std;

int countWords(string str)
{
	stringstream s(str);
	string word;

	int count = 0;
	while (s >> word){
		count++;
	}
	return count;

}
int main()
{
	string s = "geeks for geeks geeks "
			"contribution placements";
	cout << " Number of words are: " << countWords(s);
	return 0;
}

