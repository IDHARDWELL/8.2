#include <iostream>
#include <string>
using namespace std;

size_t FindMaxConsecutiveSpaces(const string s)
{
    size_t start = 0;        
    size_t finish = 0;       
    size_t maxSpaces = 0;     
    size_t currentSpaces = 0; 

    while ((start = s.find_first_of(" ", start)) != string::npos)
    {
        
        finish = s.find_first_not_of(" ", start + 1);

        
        if (finish == string::npos)
            finish = s.length();

       
        currentSpaces = finish - start;

        
        if (currentSpaces > maxSpaces)
            maxSpaces = currentSpaces;

        
        start = finish + 1;
    }

    
    return maxSpaces;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    
    int maxConsecutiveSpaces = FindMaxConsecutiveSpaces(str);

    cout << "Maximum consecutive spaces: " << maxConsecutiveSpaces << endl;

    return 0;
}
