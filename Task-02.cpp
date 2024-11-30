// Take 3x4 2D array as input and print its values
#include <iostream>
using namespace std;
int main() {
    int values;
    int arr[3][4] = {values};
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            cout << "Input value for " << "arr[" << i << "][" << j << "]: ";
            cin >> values;
            arr[i][j] = {values}; 
        }
        cout << endl;
    }
    return 0;
}