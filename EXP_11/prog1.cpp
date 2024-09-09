// 1. WAP to implement inheritance shown below figure. Assume suitable member function. (with different function names)
#include <iostream>

using namespace std;

class Furniture{
    public: 
        int price;
        string material;
        
        void putdata1(){
            cout<<"Price: "<< price <<endl;
            cout<<"Material: "<< material <<endl;
        }
};

class Table: public Furniture{
     public:
         int height,surface;
         
    void putdata2(){
            cout<<"Height: "<< height <<endl;
            cout<<"Surface Area: "<< surface <<endl;
    }     
};

int main(){
    Table obj;
    
    obj.price = 2000;
    obj.material = "wood";
    obj.height = 20;
    obj.surface = 200;
    obj.putdata1();
    obj.putdata2();

    return 0;
}
