#include <iostream>
using namespace std;
//faresmedhat //202106381
int main()
{ 
    int x,y,z;
    cin>>x>>y>>z;
    /*
   x>>=y>>z
   x<=y<=z
   x<=z<=y
   y<=x<=z
   z<=x<=y
   z<=y<=
   */
   if(x<=y&&y<=z)cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
   else if
   (x<=z&&z<=y)cout<<x<<"\n"<<z<<"\n"<<y<<"\n";
   else if
   (y<=z&&z<=x)cout<<y<<"\n"<<z<<"\n"<<x<<"\n";
   else if
   (y<=x&&x<=z)cout<<y<<"\n"<<x<<"\n"<<z<<"\n";
   else if
   (z<=x&&x<=y)cout<<z<<"\n"<<x<<"\n"<<y<<"\n";
    else if
    (z<=y&&y<=x)cout<<z<<"\n"<<y<<"\n"<<x<<"\n";
    cout<<"\n";
    cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
    
return 0 ;
}