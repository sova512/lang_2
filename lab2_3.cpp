#include <iostream>
using namespace std;

int main()
{
    int m=2;
    int sum = 0;

    while(m!=0) {
        cin>>m;//вводятся числа 
        if (m>0) {
            sum=sum + m;//суммируются все положительные
    }
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}
