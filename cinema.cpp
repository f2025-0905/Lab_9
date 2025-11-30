#include <iostream>
using namespace std;

int main() {
    
    int rows, coloumns;
    
    cout << "Enter the number of rows: ";
    cin >> rows;
    
    cout << "Enter the number of coloumns: ";
    cin >> coloumns;
    
    int sz = rows*10+coloumns;
        
    char arr [sz];
    
    for (int a = 11; a <= sz; a++){
    arr [a] = 'F';
    }
        
    int reservedSeat;
    
    while (reservedSeat != 0){
        
        for (int i = 1; i <= rows; i++){
        for (int j = 1; j <= coloumns; j++){
           
            cout << "(" << i << "-" << j <<"  " << arr[i*10+j]<< ")    ";
        }
        cout << "\n";
        }
    
    cout << "Enter seat no. to reserve: ";
    cin >> reservedSeat;
    
    while (reservedSeat%10 > coloumns or reservedSeat/10 > rows or reservedSeat < 11 || arr[reservedSeat] == 'R'){
        
        if (arr[reservedSeat] == 'R'){
           cout << "Already reserved\n";
           cout << "Enter another seat: ";
           cin >> reservedSeat;
        }else{
           cout << "Invalid Seat number\n";
           cout << "Enter another seat: ";
           cin >> reservedSeat;
        }
    }
    
   
    
    arr[reservedSeat] = 'R';
    }
    
    // cout << arr;
    

    return 0;
}