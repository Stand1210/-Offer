//
//  offer3.cpp
//  offer
//
//  Created by 宋珂琦 on 2017/4/17.
//  Copyright © 2017年 stand. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    int argv[4][4] = {{1, 2, 8, 9}, {2, 4, 9, 12}, {4, 7, 10, 13}, {6, 8, 11, 15}};
    int rows = 4;
    int columns = 4;
    int number;
    cin >> number;
    //bool found = myClass.Find(array, 4, 4, 7);
    int found = 0;
    
    if (rows > 0 && columns > 0) {
        int row = 0;
        int column = columns - 1;
        
        while(row < rows && column >= 0) {
            if (argv[row][column] == number) {
                found = 1;      //1代表找到
                break;
            } else if (argv[row][column] > number) {
                column--;
            } else {
                row++;
            }
        }
    }
    
    cout << found << endl;
    
    return found;
}
