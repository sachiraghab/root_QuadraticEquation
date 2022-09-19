
//quadratic equation
#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    int root1, root2;
    cout<<"Ax2 + Bx + C = 0"<<endl;
    cout<<"Enter A, B, C"<<endl;
    cin>>a>>b>>c;
    int D = (b*b) - (4*a*c);
    int Sqrt = sqrt(D);
    root1 = (-b - Sqrt)/(2*a);
    root2 = (-b + Sqrt)/(2*a);
    cout<<"First root is "<<root1<<endl;
    cout<<"Second root is "<<root2<<endl;
    return 0;
}
