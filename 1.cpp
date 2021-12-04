
#include<iostream>
#include<fstream>
using namespace std;


int main(){
    
    int a, count = 0;
    int prev = INT_MAX;
    
    std::ifstream infile("input.txt");

    while(infile >> a){
        
        if(a > prev) count ++;  


        prev = a;
    }

    cout<<count;

    return 0;
}
