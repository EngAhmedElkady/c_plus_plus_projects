#ifndef LIBRARY_SYSTEM_H_INCLUDED
#define LIBRARY_SYSTEM_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
struct Book
{
    int id;
    int quantity;
    string name;
};

struct User
{
    int id;
    string name;
};

class Library_System
{
private:
    vector<Book>Books;
    vector<User>Users;
    map<string,vector<int>>user_book_id;
    map<string,vector<string>>book_user_name;
public:
    void add_book();
    void search_books_by_prefix();
    void add_user();
    void user_borrowed_books();
    void print_users();
    void print_books();
    void borrow_book_by_name();
    void user_return_book();
    void print_library_by_id(int x);


};

#endif // LIBRARY_SYSTEM_H_INCLUDED
