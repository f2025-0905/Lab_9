#include <iostream>
using namespace std;

int main() {
    int sz;
    cout << "Enter size of array: ";
    cin >> sz;
    
    int arr [sz];
    
    for (int i = 0; i < sz; i++){
        cout << "Enter number for index " << i << ": ";
        cin >> arr[i];
    }
    
    int start = 0, end = sz-1;
    
    for (int j = 0; j < sz/2; j++){
        swap (arr[start], arr[end]);
        start ++;
        end--;
    }
    
    for (int k = 0; k < sz; k++){
        
        cout << arr[k] << ", ";
    }
    return 0;
}