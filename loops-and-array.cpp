#include <iostream>
#include <vector>

using namespace std;

int main (){
    cout << "Enter two numbers between 0-100: \n";
    int numb, numb2;
    cin >> numb >> numb2;

    int sum = 0;
    int temp = numb;
    while( temp <= numb2){
        sum = sum + temp; 
        temp++;
    }
    cout << "Sum from " << numb << " to " << numb2 << " is " << sum << endl; 
    return 0;    
}