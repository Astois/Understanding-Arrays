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
    int n = sizeof(Numlist) / sizeof(Numlist[0]);
    int largestnum = Numlist[0];

    for (int i; i < n; i++){
        if(Numlist[i] > largestnum) {
            largestnum = Numlist[i];
        }
    }
    cout << endl << "The Largest Number is " << largestnum << endl;
return 0;
}