#include <iostream>
using namespace std;

int main()
{
    int A,m,c=0;

    cout<<"Enter m:";//вводится число, которое необходимо найти
    cin>>m;
    A=1;
    while(A!=0) {//вводится последовательность чисел
        cin>>A;
        if(A==m) //проверяется соответствие
            c=A;
            else cout<<"not found "<<endl;
            }
            
                 if (c!=0) cout<<"Found: "<<c<<endl;
    return 0;
}
