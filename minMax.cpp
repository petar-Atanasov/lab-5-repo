#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>

using namespace std;

int main (){
    // declare an integer for only 10 digits and put it in array
    const int ranNum = 10;
    int randomINT[ranNum];

    // get random generate number
    srand(time(0));
    cout << "Enter a random digit: ";
    // get the random number between 100
    for(int i = 0; i < ranNum; i++){
        randomINT[i] = rand() % 101;
        //cout << randomINT << " "; 
        // printf display a decimal numbers
        printf("%d ", randomINT[i]);

    }
    int min = randomINT[0];
    int max = randomINT[0];
    // a for loop generates the minumin and maximum number 
    for (int i = 1; i < ranNum; i++) {
        if ( randomINT[i] < min) {
            min = randomINT[i];
        }if ( randomINT[i] > max){
            max = randomINT[i];

        }
    }
    cout << endl;
    cout << " The minimum is " << min 
    << " and the maximum is " << max << endl;
    return 0;


}