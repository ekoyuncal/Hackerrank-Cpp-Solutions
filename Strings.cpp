#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a;
    string b;
    
    string yeniA;
    string yeniB;
    
    cin>> a;
    cin>> b;
    
    
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a<<b<<endl;
    
    yeniA=a;
    yeniA[0]=b[0];
    
    yeniB=b;
    yeniB[0]=a[0];
    
    cout<<yeniA<<" "<<yeniB<<endl;
  
    return 0;
}
