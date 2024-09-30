// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class BIRTHDAY{
 private:
     int date, month, year;
     
 
  public:
      void getdata(int i){
          cout<<"Enter date, month, year for "<<i<<endl;
          cin>>date>>month>>year;          
      }
      void putdata(int i){
          cout<<"Birthdate of "<<i<<" is "<<date<<"/"<<month<<"/"<<year<<endl;
      }
};

int main() {
    BIRTHDAY b[5], *birthdayptr;
    birthdayptr = b;
    for(int i = 0; i < 5; i++){
     birthdayptr->getdata(i+1);
     birthdayptr++;
    }
    birthdayptr = b;
    for(int i = 0; i < 5; i++){
     birthdayptr->getdata(i+1);
     birthdayptr++;
    }
    return 0;
}
