#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int n;
    for(int i=1; i<=15; i++) {
        cin>>n;
        if((n>=1)&&(n<=11)&&(n%2!=0)) { //каждый нечетный элемент в диапазоне [1..11]  возводится в квадрат 
            cout<<"квадрат числа "<<n<<"=";//и выводится
            n=n*n;
            cout<<n<<endl;

        }

        if(n%2==0) { //считается  количество четных элементов 
            count++;
        }
     
    }
    cout<<"четных= "<<count<<endl;//и так же выводится

    return 0;
}
