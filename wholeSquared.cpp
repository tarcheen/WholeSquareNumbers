#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int wholeSquared(int,int);

/*
 Hamed Mirlohi
 This code takes 2 numbers which specifies the ranges and outputs a number which represents the number of whole squares between the two ranges
 */

int main()
{
    unsigned int first;
    unsigned int last;
    cout<<"Specify two non-negative digit ranges which tells you how many whole squared numbers exists between them"<<endl;
    
    cin>>first;
    cout<<"Now enter second: ";
    cin>>last;
    
    cout<<"There are "<<wholeSquared(first,last)<<" whole squarred numbers between "<<first<<" and "<<last<<endl;
}

int wholeSquared(const int startRange,const int endRange)
{

    int i = 0;
    int temp;
    int count = 0;
    while(true)
    {
        temp = i * i;
        if(temp >= startRange && temp <= endRange)
        {
            ++count;
        }
        else if(temp > endRange)
        {
            return count;
        }
        ++i;
    }
    return count;
    
}
