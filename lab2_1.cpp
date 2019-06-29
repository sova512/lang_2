#include <iostream>
using namespace std;
int main()
{
    int N,i;
    double sum=0;
    double x;
    cout<< "Enter N=";//на вход поступает число-количество чисел с плав. точкой в ряду
    cin>>N;
    for(i=1;i<=N;i++) {
        cin>>x;//вводится само число и прибавляется к сумме
        sum=sum+x;
        
    }
    cout<<"Average equals to "<<sum/N<<endl;//выводится среднее арифметическое этих чисел
    return 0;
}