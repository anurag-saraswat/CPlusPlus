#include <iostream>
using namespace std;

int division(int x, int y){
    
      if(y==0) 
            throw 1;
      else 
            return x/y;
    }


int main() {
    int a = 20,b=0,c;
    try{
        c = division(a,b);
        cout<<c<<endl;
    }
    catch(int e){
        cout<<"Division By Zero";
    }

    
}
