// DS Test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!\n";
    int arr[5];
    int i=0, temp;
    for (i = 0; i < 5; i++) {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }
    for (i = 0; i < 4 / 2; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i - 1];//the error was here as it is written arr[4-i-1] and after fixing the output=54321 as correct
        arr[5 - i - 1] = temp;
    }
    for (i = 0; i < 5; i++) {
        cout << arr[i];
    }
    //arr[5]={1,2,3,4,5} the output=43215
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
