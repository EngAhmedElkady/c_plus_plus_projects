#include <iostream>
#include "Library_System.h"
using namespace std;

int main()
{
    int number;
    Library_System l1;

x:
    cout<<"library minu " <<endl;
    cout<<" 1) add book : "<<endl;
    cout<<" 2) search book_by_prefix : "<<endl;
    cout<<" 3) print who borrow book_by_name : "<<endl;
    cout<<" 4) print library by id : "<<endl;
    cout<<" 5) print library by name : "<<endl;
    cout<<" 6) add user : "<<endl;
    cout<<" 7) user borrow book : "<<endl;
    cout<<" 8) user return book : "<<endl;
    cout<<" 9) print users : "<<endl;
    cout<<"10) print books : "<<endl;
    cout<<"11) Exit : "<<endl;
y:
    cout<<"\nenter your choice |1 - 10 | "<<endl;
    cin>>number;
    if(number==1)
    {
        l1.add_book();
        goto y;
    }
    else if(number==2)
    {
        l1.search_books_by_prefix();
        goto y;

    }
    else if(number==3)
    {
        l1.borrow_book_by_name();
        goto y;

    }
    else if(number==4)
    {
        l1.print_library_by_id(4);
        goto y;

    }
    else if(number==5)
    {
        l1.print_library_by_id(5);
        goto y;

    }
    else if(number==6)
    {
        l1.add_user();
        goto y;

    }
    else if(number==7)
    {
        l1.user_borrowed_books();
        goto y;

    }
    else if(number==8){
        l1.user_return_book();
        goto y;
    }
    else if(number==9)
    {
        l1.print_users();
        goto y;

    }
    else if(number==10)
    {
        l1.print_books();
        goto y;
    }

    return 0;
}
