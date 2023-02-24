#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    int commaNumber{};
    int size=str.length();
    stringstream ss(str);
    vector<int>intVector;
    int temp{};
    char ch{};//Comma
    
    for(int i=0;i<size; i++)
    {
        if(str[i] == ',')
        {
            commaNumber+=1;
        }
    }
    for(int j=0;j<(commaNumber+1); j++)
    {
        ss >> temp;
        intVector.push_back(temp);
        ss >> ch;
    }
    
    return intVector;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
