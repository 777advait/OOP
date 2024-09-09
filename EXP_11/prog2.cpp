// 1. WAP to implement inheritance shown below figure. Assume suitable member function. (with same function name)
#include <iostream>

using namespace std;

class Furniture{
    public: 
        int price;
        string material;
        
        void putdata(){
            cout<<"Price: "<< price <<endl;
            cout<<"Material: "<< material <<endl;
        }
};

class Table: public Furniture{
     public:
         int height,surface;
         
    void putdata(){
            Furniture::putdata();
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
    obj.putdata();

    return 0;
}
