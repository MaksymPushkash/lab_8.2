#include <iostream>
#include <string>
using namespace std;

string FindFirstWordStartingWithA(const string s) 
{
    size_t start = 0, end;
    
    while ((start = s.find_first_not_of(" ", start)) != string::npos) 
    {
        end = s.find_first_of(" ", start);
        string word = s.substr(start, end - start);
        
        if (!word.empty() && word[0] == 'a') 
        {
            return word;
        }
        
        start = end;
    }
    
    return ""; 
}

int main() 
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    
    string result = FindFirstWordStartingWithA(str);
    if (!result.empty()) 
    {
        cout << "First word starting with 'a': " << result << endl;
    } 
    else 
    {
        cout << "No word starting with 'a' found." << endl;
    }
    
    return 0;
}
