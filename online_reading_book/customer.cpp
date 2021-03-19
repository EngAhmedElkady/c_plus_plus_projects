#include "customer.h"
#include "session.h"
void Customer::show_read_book(){
for(int i=0;i<books.size();i++){
            books[i].print_info();
            cout<<endl;
        }
}
void Customer::read_book(){
    Book b;
    b.set_name();
    b.set_number();
    cout<<"done..........."<<endl;
    m:
    cout<<"next_page enter 1: "<<endl;
    int x;
    cout<<"prev page enter 2: "<<endl;
    cout<<"to back enter   3: "<<endl;
    cin>>x;
    if(x==2){b.s.prev_page();goto m;}
    if(x==1){b.s.next_page();goto m;}
    books.push_back(b);
    cout<<endl;

}

