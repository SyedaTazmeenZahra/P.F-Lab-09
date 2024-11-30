// Take 4x4 2D array and print its values
#include <iostream>
using namespace std;
int main() {
    int Ar[4][4] = {
                        {1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 8, 7, 6},
                        {5, 4, 3, 2}
                    };
    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4; j ++)
        {
            cout << "The value of Ar[" << i << "][" << j << "]: " << Ar[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}