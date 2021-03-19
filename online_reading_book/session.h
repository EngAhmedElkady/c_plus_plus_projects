#ifndef SESSION_H_INCLUDED
#define SESSION_H_INCLUDED
class Session{
private:
    int pages;
    int cur_page;
    string data;
    bool state;
public:
    void set_pages(int x){
    this->pages=x;
    state=true;
    cur_page=0;
    }
    int get_cur_page(){
      return this->cur_page;
    }
    void next_page(){
        cur_page++;
        if(cur_page>=pages){
                cur_page=pages;
            cout<<" the book end "<<endl;
            state=false;
        }
    }
    void prev_page(){
         cur_page--;
        if(cur_page<0){
            cur_page=0;
            cout<<" the book is first "<<endl;
            state=true;
        }
    }
    void stop_read(){
        state=false;
    }
    bool get_state(){
    return state;}

};

class Book{
private:
    int num_pages;
    string name;
public:
    Session s;

    void set_name(){
         cout<<"enter the book name : ";
         cin>>name;
     }
     string get_name(){
         return name;
     }

    int get_number_pages(){
         return num_pages;
     }
    void  set_number(){

        cout<<"enter number of pages : ";
        cin>>num_pages;
        s.set_pages(num_pages);
    }
   bool get_state_(){

        return s.get_state();
    }
    void print_info(){
        cout<<"name is         : "<<name<<endl;
        cout<<"number pages is : "<<num_pages<<endl;
        cout<<"session :  \n"<<endl;
        cout<<"in page         : "<<s.get_cur_page()<<endl;
        cout<<"state           : "<<s.get_state();
    }

};


#endif // SESSION_H_INCLUDED
