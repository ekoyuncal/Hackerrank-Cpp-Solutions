#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int anumber{};
    int que{};
    int size{};
    int tempValue{};
    vector<vector<int>>dArray;
    
    cin>>anumber>>que;
    
    for(int i = 0; i<anumber; i++)
    {
        vector<int>tempVector;
        
        cin>>size;
        
        for(int j = 0; j<size; j++)
        {
            cin>>tempValue;
            tempVector.push_back(tempValue);
        }
        dArray.push_back(tempVector);
    }
    int row{};
    int col{};
    for(int h = 0; h<que; h++)
    {
        cin>>row>>col;
        cout<<dArray[row][col]<<endl;
    }
    
    
    
    return 0;
}
