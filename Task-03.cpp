// Take 2D array of 3x3 with input values and take sum of all values
#include <iostream>
using namespace std;
int main() {
    int values, sum;
    int ar[3][3] = {values};
    for (int i = 0; i < 3; i ++)
    {
        for (int j = 0; j < 3; j ++)
        {
            cout << "Input value for " << "ar[" << i << "][" << j << "]: ";
            cin >> values;
            sum += values;
            ar[i][j] = {values};
        }
        cout << endl;
    }
    cout << "The sum of all values in the array is: " << sum;
    return 0;
}