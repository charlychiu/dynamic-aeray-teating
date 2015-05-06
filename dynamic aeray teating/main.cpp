//
//  main.cpp
//  dynamic aeray teating
//
//  Created by charlychiu on 2015/5/4.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    int **array;
    array =new int *[5];
    
    for(int i=0;i<5;i++)
        array[i]=new int[5];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            array[i][j]=(i+1)*(j+1);
            cout<<setw(5)<<array[i][j];
        }
        cout<<endl;
    }
    
    
    
    return 0;
}
