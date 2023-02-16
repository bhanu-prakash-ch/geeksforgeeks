#include <iostream>
using namespace std;

int printwithoutloop (int n)
{
    if(n >= 1)
    {
        //printf("%d ",n);
        printwithoutloop(n-1);
        printf("%d ",n);
        //n = n-1;
        //printwithoutloop(n-1);
    }
    return 0;
}

int main()
{
    int N;
    cout << "Enter the number for printing the values from 1 to N" << endl;
    cin >> N;

    //int output = printwithoutloop(N);
    printwithoutloop(N);
    //cout << "The output is " << output << endl;

}