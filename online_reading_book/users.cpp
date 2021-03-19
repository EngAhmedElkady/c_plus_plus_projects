#include "users.h"
#include<bits/stdc++.h>
using namespace std;
void User::set_name()
{
    cout<<"enter your name : ";
    cin>>this->name;
}

string User::get_name()const
{
    return this->name;
}

void User::set_age()
{
    cout<<"enter your age : ";
    cin>>age;
    while(isalpha(age))
    {
        cout<<"please enter correct age : "<<endl;
        cin>>age;
    }

}
double User::get_age()const
{
    return age;
}

void User::set_address()
{
    cout<<"enter your address : ";
    cin>>address;
}
string User::get_address()const
{
    return address;
}
void User::set_email()
{
    cout<<"enter your email : ";
    cin>>email;
    while(email.find('@')==-1)
    {
        cout<<"please enter correct email : ";
        cin>>email;
    }
}
string User::get_email()const
{
    return email;
}
void User::set_password()
{
    cout<<"enter your password : ";
    cin>>password;
    while(password.length()<6)
    {
        cout<<"please enter your strong password : ";
        cin>> password;
    }
}
string User::get_password()const{
    return password;
}
void User::login()
{

    set_name();
    set_age();
    set_address();
    set_email();
    set_password();
    //System.add(User());
}
void User::show_profile()const
{
    cout<<get_name()<<endl;
    cout<<get_age()<<endl;
    cout<<get_address()<<endl;
    cout<<get_email()<<endl;

}
