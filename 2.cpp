#include<algorithm>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include <sstream>
#include <algorithm>
#include <iterator>

using namespace std;


int main(){
    
    //int a, count = 0;
    //int prev = INT_MAX;
    string a;
    int b;
    char c;
    int h=0,d=0,aim=0;
    std::string line;    
    std::ifstream infile("2.txt");

    while(std::getline(infile, line)){

//        cout<<line<<endl;
        
        std::istringstream iss(line);

        vector<string> arr;

        copy(
                std::istream_iterator<string>(iss),
                std::istream_iterator<string>(),
                std::back_inserter(arr)
            );

//        cout<<arr[0]<<" "<< arr[1]<< endl;
        
        string a = arr[0];
        int b = std::stoi(arr[1]);

        if(a == "forward") {
            h += b;
            d += aim * b;
        } else if(a == "up") {
            aim -= b; 
        } else {
            aim += b;
        }
 
       }

/**
    while(infile >> a >> c >> b && (c == ' ')){
        cout<<
        cout<<a<<" "<<b<<endl;

        if(a == "forward") {
            h += b;
        } else if(a == "up") {
            d -= b;
        } else {
            d += b;
        }
    }

    **/
    cout<< h * d;

    return 0;
}
