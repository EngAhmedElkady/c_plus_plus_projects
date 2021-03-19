#include"customer.h"

#ifndef SYSTEM_H_INCLUDED
#define SYSTEM_H_INCLUDED

class System
{
private:
   // static vector<Book>list_books;
public:
    static vector<Customer>my_system;

    static void show_all_user()
    {
        for(int i=0; i<my_system.size(); i++)
        {
            cout<<my_system[i].get_name()<<endl;
        }
    }

};

vector<Customer>System::my_system;
//vector<Book>System::list_books;



#endif // SYSTEM_H_INCLUDED
