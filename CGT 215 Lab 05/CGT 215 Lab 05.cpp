#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector <char> StringVector({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

    string sentence;
    cout << "Inout text to cypher: ";
    getline(cin, sentence);
    cout << "Encoded Message: \"";
    vector <char> Result;

    for (int n : sentence) {

        if (n >= 65 && n <= 90) {
            Result.push_back(StringVector[n - 65]);
        }
        else if (n >= 97 && n <= 122) {
            Result.push_back(tolower(StringVector[n - 97]));
        }
        else Result.push_back(n);
      
    }

    for (int n = 0; n < Result.size(); n++) {
        cout << Result[n];
    }

    cout << " \" ";

}