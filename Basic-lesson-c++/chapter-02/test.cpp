#include <iostream>
#include <vector>  // Include vector header
#include <string>

using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    for (const string& car : cars)  // Use a reference to avoid unnecessary copying
    {
        cout << car << "\n";
    }

    return 0;
}
