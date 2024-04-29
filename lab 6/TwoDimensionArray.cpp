#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter the number of rows of the array: ";

    cin >> a;

    cout << "Enter the number of columns of the array: ";

    cin >> b;

    if (a < 3 && b < 3) {

        double** TwoDimension = new double*[a];
        
        for (int i = 0; i < a; i++) {

            TwoDimension[i] = new double[b];
            
        }

        for (int i = 0; i < a; i++) {

            for (int j = 0; j < b; j++) {

                cout << "Enter element [" << i << "][" << j << "]: ";

                cin >> TwoDimension[i][j];

            }

        }

        cout << "The elements of the array are :" << endl;

        for (int i = 0; i < a; i++) {

            for (int j = 0; j < b; j++) {

                cout << TwoDimension[i][j] << " ";

            }

            cout << endl;

        }

        for (int i = 0; i < a; i++) {

            delete[] TwoDimension[i];

        }

        delete[] TwoDimension;

    } else {

        cout << "Enter correct array sizes (both dimensions less than 3)." << endl;
        
    }

    return 0;
}
