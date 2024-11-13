#include "surface.h"

using namespace std;

float rectangle::surface(){
return a*b;
}

rectangle::rectangle(float a , float b){
this->a=a;
this->b=b;
}

void rectangle::afficher(){
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}

int main(){
//rectangle r1(4,2);
int a;
int b;
cout<<"entrer a:"<<endl;
cin>>a;
cout<<"entrer b:"<<endl;
cin>>b;
rectangle r1(a,b);
r1.afficher();
cout<<"surface = "<<r1.surface()<<endl;
return 0;
}
