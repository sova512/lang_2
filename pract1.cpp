#include <iostream>
using namespace std;

int main()
{
double x,y;
cout<<"enter x and y: ";
cin>>x,y;//вводятся два числа- координаты точки
if((x>(-0.7))&&((x*x)+(y*y)<1)) //осущ.проверка принадлежности точки данной области
    cout<<"prinadlezhit oblasti"<<endl;
else {
    if((x<(-0.7))||(x*x+y*y>1)) 
        cout<<"ne prinadlezhit"<<endl;
        else 
            cout<<"na granice"<<endl;
}
	
	return 0;
}
