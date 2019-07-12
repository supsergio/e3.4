/*
 •• E3.4
 Write a program that reads three numbers and prints “all the same” if they are all the same, “all different” if they are all different, and “neither” otherwise.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter three numbers: ";
    int first, second, third;
    cin >> first >> second >> third;
    
    if (first == second && second == third)
    {
        cout << "all the same";
    }
    else if (first != second && second != third)
    {
        cout << "all different";
    }
    else
    {
        cout << "neither";
    }
    cout << endl;
    return 0;
}
