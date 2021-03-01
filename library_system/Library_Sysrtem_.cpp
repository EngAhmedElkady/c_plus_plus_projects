#include"Library_System.h"
#include<bits/stdc++.h>
using namespace std;
void Library_System::add_book()
{
    Book b1;
    cout<<"enter book name : ";
    cin>>b1.name;
    cout<<"enter id of book : ";
    cin>>b1.id;
    cout<<"enter quantity of book : ";
    cin>>b1.quantity;
    Books.push_back(b1);
    cout<<"done......."<<endl;

}

void Library_System::search_books_by_prefix()
{
    cin.ignore();
    string prefix,substr_book;
    cout<<"enter the prefix : ";
    cin>>prefix;
    int n=prefix.length();
    for(int i=0; i<Books.size(); i++)
    {
        substr_book=Books[i].name.substr(0,n);
        if(prefix==substr_book)
            cout<<Books[i].name<<endl;

    }
}

void Library_System::add_user()
{
    User user1;
    cout<<"enter user name : ";
    cin>>user1.name;
    cout<<"enter user id : ";
    cin>>user1.id;
    Users.push_back(user1);
    cout<<"done......."<<endl;

}

void Library_System::user_borrowed_books()
{
    string user_name;
    string book_name;
    cout<<"enter user name : ";
    cin>>user_name;
    cout<<"enter book name : ";
    cin>>book_name;
    for(int i=0; i<Books.size(); i++)
    {
        if(Books[i].name==book_name)
        {
            if(Books[i].quantity<=0)
            {
                cout<<"sory the quantity of the book equal zero "<<endl;
                return ;
            }
            Books[i].quantity--;
            user_book_id[user_name].push_back(Books[i].id);
            book_user_name[book_name].push_back(user_name);
            return ;
        }
    }
    cout<<"the book not found : "<<endl;


}

void Library_System::print_users()
{
    for(int i=0; i<Users.size(); i++)
    {
        cout<<"user name : "<<Users[i].name<<endl;
        cout<<"user id   : "<<Users[i].id<<endl;
        cout<<"Book id   : ";
        for(int y=0; y<user_book_id[Users[i].name].size(); y++)
            cout<<user_book_id[Users[i].name][y]<< " ";
        cout<<endl;
    }
}

void Library_System::print_books()
{
    for(int i=0; i<Books.size(); i++)
    {
        cout<<"book name     : "<<Books[i].name<<endl;
        cout<<"book id       : "<<Books[i].id<<endl;
        cout<<"book quantity : "<<Books[i].quantity<<endl;
        cout<<endl;
    }
}

void Library_System::borrow_book_by_name()
{
    string name_book;
    cout<<"enter book_name "<<endl;
    cin>>name_book;
    for(int i=0; i<book_user_name[name_book].size(); i++)
    {
        cout<<book_user_name[name_book][i]<<" ";
    }
}

void Library_System::user_return_book()
{
    string user_name;
    string book_name;
    cout<<"enter user name : ";
    cin>>user_name;
    cout<<"enter book name : ";
    cin>>book_name;
    for(int i=0; i<Books.size(); i++)
    {
        if(Books[i].name==book_name)
        {

            Books[i].quantity++;
            int x=Books[i].id;
            for(int y=0; y<user_book_id[user_name].size(); y++)
            {
                if(user_book_id[user_name][y]==x)
                {
                    cout<<user_book_id[user_name][y]<<endl;
                    user_book_id[user_name].erase(user_book_id[user_name].begin()+y);
                }
            }
            for(int y=0; y<book_user_name[book_name].size(); y++)
            {
                if(book_user_name[book_name][y]==user_name)
                    cout<<book_user_name[book_name][y]<<endl;
                book_user_name[book_name].erase(book_user_name[book_name].begin()+y);
            }
            return ;
        }
    }
    cout<<"the book not found : "<<endl;

}

void Library_System::print_library_by_id(int x)
{
    if(x==4)
    {
        std::sort(Books.begin(),Books.end(),
                  []( const Book &left, const Book &right )
        {
            return ( left.id > right.id );
        } );
    }
    else if(x==5)
    {
        std::sort(Books.begin(),Books.end(),
                  []( const Book &left, const Book &right )
        {
            return ( left.name > right.name );
        } );
    }
    for(int i=0; i<Books.size(); i++)
    {
        cout<<"book name     : "<<Books[i].name<<endl;
        cout<<"book id       : "<<Books[i].id<<endl;
        cout<<"book quantity : "<<Books[i].quantity<<endl;
        cout<<endl;
    }
}
