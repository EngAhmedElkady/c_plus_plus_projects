# include <bits/stdc++.h>
using namespace std;
class User{
    private:
        string name;
        string address;
        double age;
        string email;
        string password;
    public:
        User(){}
        User(string name_,string address_,double age_,string email_,string password_)
        :name(name_),address(address_),age(age_),email(email_),password(password_){}
        
        void set_name(){}
        string get_name()const {}

        void set_address(){}
        string get_address()const{}

        void set_age(){}
        double get_age()const{}

        void set_email(){}
        string get_email()const{}

        void set_password(){}
        
        void login(){}
        void logout(){}
        void show_profile()const{}
        void update_profile(){}


};
