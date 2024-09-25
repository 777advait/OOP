// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

class BOOK{
 private:
     int book_no,book_price;
     string book_name;
     
 
  public:
      void getdata(){
          cout<<"Enter book_no, book_name and book_price:"<<endl;
          cin>>book_no>>book_name>>book_price;
      }
      void putdata(){
          cout<<"Book No: "<<book_no<<endl;
          cout<<"Book Name: "<<book_name<<endl;
          cout<<"Book Price: "<<book_price<<endl;
      }
};

int main() {
    BOOK b,*bookptr;
    bookptr = &b;
    bookptr->getdata();
    bookptr->putdata();
    return 0;
}
