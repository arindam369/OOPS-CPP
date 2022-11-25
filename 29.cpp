/*
29.	Create a class for Book. A book has unique isbn (string), title, a list of authors, and a price. Write relevant functions. Now write a class BookStore which has a list of books. There may be multiple copies of a book in the book store. Write relevant member functions. Write a function books() that returns list of unique isbn numbers of the books, a function noOfCopies() that returns the number of copies available for a given isbn number and a function totalPrice() that returns the total price of all the books. Create a book store having a number of books (multiple copies). Now, for each book, print number of copies of that book along with its title.
*/

#include<iostream>
#include<set>
using namespace std;
class Book{
    string isbn;
    string title;
    string *authors;
    double price;
    int noOfAuthors;
    friend class BookStore;
    public:
        void setData(string isbn,string title,string *author,int noOfAuthors,double price){
            this->isbn = isbn;  // set details of a particular book
            this->title = title;
            this->authors = new string[noOfAuthors];
            this->noOfAuthors = noOfAuthors;
            for(int i=0;i<noOfAuthors;i++){
                this->authors[i]=author[i];
            }
            this->price = price;
        }
        void getData(){ // printing details of a particular book
            cout<<"ISBN : "<<isbn<<"\nTitle : "<<title<<"\nAuthors : ";
            for(int i=0;i<noOfAuthors;i++){
                cout<<authors[i]<<" ";
            }
            cout<<"\nPrice : "<<price<<endl<<endl;
        }

};
class BookStore{
    Book *listOfBooks;
    int noOfBooks;
    int noOfUniqueBooks;

    public:
        set<string> s;
        BookStore(){
            listOfBooks = new Book[15];
            noOfBooks = 0;
            noOfUniqueBooks=0;
        }

        void insert_book(Book b){   // insert book in the bookstore
            this->listOfBooks[noOfBooks] = b;
            noOfBooks++;
        }
        
        set<string> books(){    // return the set of unique isbn
            for (int i = 0; i < noOfBooks; i++)
            {
                s.insert(listOfBooks[i].isbn);
            }
            
            noOfUniqueBooks = s.size();
            
            return s;
        }
        
        int noOfCopies(string isbn){    // return the no. of copies of a particular isbn
            int count=0;
            for (int i = 0; i < noOfBooks; i++)
            {
                if(listOfBooks[i].isbn == isbn){
                    count++;
                }
            }
            return count;
        }
        
        double totalPrice(){    // return total price of all books available in bookstore
            double sum=0;
            for (int i = 0; i < noOfBooks; i++)
            {
                sum+=listOfBooks[i].price;
            }
            return sum;
        }
        
        void print(string ISBN,int i){  // print book-details available in the bookstore
            cout<<"ISBN : "<<ISBN<<"\t No. of copies : "<<noOfCopies(ISBN)<<"\t Title : "<<getTitle(ISBN)<<endl;    
        }
        string getTitle(string ISBN){   // return titles of a particular isbn
            for (int i = 0; i < noOfBooks; i++)
            {
                if(listOfBooks[i].isbn == ISBN){
                    return listOfBooks[i].title;
                }
            }
            return "No data found";
        }
};

int main(){
    Book b[15];
    
    string authors[5][3]={      // 5 authors-list
        {"Arindam","Rajdeep","Souvik"},
        {"Isika","Sanghita","Nidhi"},
        {"Ankush","Sayan","Koustav"},
        {"Arindam","Isika","Rajdeep"},
        {"Faisal","Dibyabrata"}
    };

    b[0].setData("abc1","Road to Ninja - 1",authors[0],3,10);   // 1 copy

    b[1].setData("abc2","Road to Ninja - 2",authors[1],3,20);   // 2 copies
    b[2].setData("abc2","Road to Ninja - 2",authors[1],3,20);
    
    b[3].setData("abc3","Road to Ninja - 3",authors[2],3,30);   // 3 copies
    b[4].setData("abc3","Road to Ninja - 3",authors[2],3,30);
    b[5].setData("abc3","Road to Ninja - 3",authors[2],3,30);
    
    b[6].setData("abc4","Road to Ninja - 4",authors[3],3,40);   // 4 copies
    b[7].setData("abc4","Road to Ninja - 4",authors[3],3,40);
    b[8].setData("abc4","Road to Ninja - 4",authors[3],3,40);
    b[9].setData("abc4","Road to Ninja - 4",authors[3],3,40);

    b[10].setData("abc5","Road to Ninja - 5",authors[4],2,50);  // 5 copies
    b[11].setData("abc5","Road to Ninja - 5",authors[4],2,50);
    b[12].setData("abc5","Road to Ninja - 5",authors[4],2,50);
    b[13].setData("abc5","Road to Ninja - 5",authors[4],2,50);
    b[14].setData("abc5","Road to Ninja - 5",authors[4],2,50);

    BookStore BS;
    cout<<"\n\t\t    --------------\n";
    cout<<"\t\t    : Book-Store : "<<endl;
    cout<<"\t\t    --------------\n\n";

    for (int i = 0; i < 15; i++)
    {
        BS.insert_book(b[i]);   // inserting all books in the bookstore
    }
    

    set<string> isbn = BS.books();
    set<string>::iterator iter; int index=0;
    for (iter = isbn.begin() ; iter != isbn.end() ; iter++)
    {
        BS.print(*iter,index);  // printing all books-details
        index++;
    }
    
    cout<<"\n ---------------------------------------------------------\n";
    cout<<"  Total price of all books available in book store : "<<BS.totalPrice()<<endl;
    cout<<" ---------------------------------------------------------\n\n";
    return 0;
}