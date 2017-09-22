//
//  main.cpp
//  select sort
//
//  Created by Victor Chiliquinga on 6/9/15.
//  Copyright (c) 2015 Victor Chiliquinga. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int I, index, smallIndex, minIndex, temp, count, avg, sum=0, students[25];
    
    cout << "How many students\n";
    cin >> count;
    
    cout << "Enter grade for " << count << " students\n";
    
    for (int j=0; j< count;j++ )
    {
        cin >> students [j];
        sum = sum + students[j];
    }
    
    avg = sum/count;
    
    for (int j=0; j < count; j++)
    {
        cout << "Score of student "<< j+1 << " is " << students [j] << endl;
    }
    
    cout << "Sum is " << sum << endl;
    cout << "Average is " << avg << endl;
    
    // start of select sort
    cout << "Grades sorted in ascending order are as follows:\n";
    for (index = 0; index < count-1;index++)
    {
        smallIndex = index;
        
        for (minIndex = index+1; minIndex <count; minIndex++)
        {
            if (students [minIndex] < students [smallIndex])
                smallIndex = minIndex;
            // < ASCEDNING.......
            // > DESCENDING
        }
        
        temp = students[smallIndex];
        students [smallIndex] = students [index];
        students [index] = temp;
    }
    
    for ( I = 0; I<count;I++)
    {
        cout << students [I] << " ";
    }
    
    
    return 0;
}
