# include "users.cpp"
using namespace std;

void User::set_name(){
    cout<<"enter your name : ";
    cin>>this->name;
}

string User::get_name()const{
    return this->name;
}

void User::set_age(){
    cout<<"enter your age : ";
    
}