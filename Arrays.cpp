#include <iostream>
using namespace::std;

int main(){
    int s;
    cout << "how many items in your list?" << endl;
    cin >> s;
    int Numlist[s];

    cout << "Enter" << " " << s << " " << "elements" << endl;
    for (int f = 0; f < s; f++){
        cin >> Numlist[f];
        
    }
    cout << "the elements are: ";
    for(int j = 0; j < s; j++){
        cout << Numlist[j] << " ";
    }
    // sizeof counts the number of bits in an arry
    // this gets the number of bits in whole array divided by one number in the lists bits to find the number of items in the array.
    int NumberOfElements = sizeof(Numlist) / sizeof(Numlist[0]);
    int largestnum = Numlist[0];

    for (int i; i < NumberOfElements; i++){
        if(Numlist[i] > largestnum) {
            largestnum = Numlist[i];
        }
    }
    // the for loop searches through each element in the array
    // then the if statement inside checks if the number is smaller than the first number
    // if the second number is smaller than the first number, it becomes smallestnum
    int smallestnum = Numlist[0];
    for(int i; i < NumberOfElements; i++){
        if (Numlist[i] < smallestnum)
        {
            smallestnum = Numlist[i];
        }
        
    }

    cout << endl << "The Largest Number is " << largestnum << endl;
    cout << endl << "The Smallest Number is " << smallestnum << endl;
return 0;
}