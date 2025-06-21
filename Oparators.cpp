// basic arithmatic operators

#include <iostream>
using namespace std;

int main() 
{ int a=20 , b=10;
    
    cout << "sum: " << a+b << endl; 
    cout << "diffrence : " << a-b << endl; 
    cout << "product : " << a*b << endl; 
    cout << "division : " << a/b << endl;
    cout << "modulo : " << a%b << endl;
    cout << (5/(double)2) << endl; // get answer in point do typecaste
    
    // Relationl oparator 

   cout << (3<5) << endl; 
   cout << (3>5) << endl;
   cout << (3<=5) << endl;
   cout << (3==3) << endl;
   cout << (3!=5) << endl;

   // Logical oparator 

   cout << ( (3>1) || (3>5)) << endl; // OR
   cout << ( (3>1) && (3>2)) << endl; // AND
   
    

    return 0;
}