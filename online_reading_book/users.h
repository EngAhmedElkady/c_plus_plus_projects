#ifndef USERS_H_INCLUDED
#define USERS_H_INCLUDED

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
        void set_name();
        string get_name()const;

        void set_address();
        string get_address()const;

        void set_age();
        double get_age()const;

        void set_email();
        string get_email()const;

        void set_password();
        string get_password()const;

        void login();
        void logout();
        void show_profile()const;
        void update_profile();


};


#endif // USERS_H_INCLUDED
