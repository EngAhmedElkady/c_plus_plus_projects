#include <iostream>
#include "customer.h"
#include "system.h"

using namespace std;

int main()
{
    int x;
    f:
    cout<<"1) login "<<endl;
    cout<<"2) show all user "<<endl;
    cin>>x;
    if(x==1){
        Customer person1;
        person1.login();
        System::my_system.push_back(person1);
        int ch;
         ch_:
        cout<<"1) logout "<<endl;
        cout<<"2) show_all_books "<<endl;
        cout<<"3) add_book       "<<endl;
        cout<<"4) show_my_books  "<<endl;
        cout<<"5) show my profile "<<endl;
        cout<<"6) back "<<endl;

        cin>>ch;
        if(ch==1){
            string email_;
            string password_;
            cout<<"enter your email    : ";cin>>email_;
            cout<<"enter your password : ";cin>>password_;

            for(int i=0;i<System::my_system.size();i++){
                // cout<<System::my_system[i].get_email()<<endl;
                if(System::my_system[i].get_email()==email_ and System::my_system[i].get_password()==password_){
                    System::my_system.erase(System::my_system.begin()+i);
                    cout<<"done";
                    goto f;
                }
            cout<<"enter correct data : "<<endl;
            goto ch_;
            }
        }
        else if(ch==2){
            person1.show_read_book();
            goto ch_;
        }
        // add book
        else if(ch==3){
            person1.read_book();
             goto ch_;
        }
        else if(ch==5){
            person1.show_profile();
        }
    }

    else if(x==2){
        //System::show_all_user();
        goto f;
    }


}
