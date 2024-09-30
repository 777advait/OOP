// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class BOX{
 private:
     int height, width, breadth, area, volume;
     
 
  public:
      void getdata(){
          cout<<"Enter Box height , width , breadth"<<endl;
          cin>>height>>width>>breadth;
      }
      void putdata(){
          area = width*height;
          volume = breadth*width*height;
          cout<<"Volume of box is "<<volume<<endl;
          cout<<"Area of box is "<<area<<endl;
      }
};

int main() {
    BOX b,*boxptr;
    boxptr = &b;
    boxptr->getdata();
    boxptr->putdata();
    return 0;
}
