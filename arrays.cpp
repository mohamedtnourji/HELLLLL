#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int arr[3][2];
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j< 2; j++)
        {
            cout << "enter mark of student #" << i+1 << ": " << endl;
            cin >> arr[i][j];
        }
        
    }
    double sum = 0;
    double avg[3];
    for (size_t i = 0; i < 3; i++)
    {
        sum = 0;
        for (size_t j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        avg[i] = sum/5;
        cout << "the average of student #" << i+1 << "is: " << avg[i] << endl;
    }
    
    return 0;
}
