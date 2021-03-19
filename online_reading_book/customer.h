#ifndef CUSTOMER_H_INCLUDED
#define CUSTOMER_H_INCLUDED
#include "Users.h"
#include "session.h"
using namespace std;
class Customer:public User{
private:
    vector<Book>books;
    bool active;
public:
    Customer():active(false){}
    void show_read_book();
    void read_book();

};


#endif // CUSTOMER_H_INCLUDED
