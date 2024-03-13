//First day DSA Lab session - 4/7/2016 E.C
//1.	Write a program that asks the user to type 10 integers of an array. The program must compute and write how many integers are greater than or equal to 10.
#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int arr[10];
    cout << "Enter the 10 integers: " << endl;
    int counter = 0;

    for(int i=0; i<10; i++){
        cout << "Enter the " << i+1 << " number: ";
        cin >> arr[i];
        system("cls");
    }
    for(int i=0; i<10; i++){
        if(arr[i]>=10){
            counter++;
        }
    }
    cout << "There are " << counter << " numbers greater than or equal to 10." << endl;
  return 0;
}
//2.	Suppose you want to keep track of your books in a library. You might want to track the following 
//attributes about each book: title, author, subject and book Id. Create a structure to hold two books 
//information and print books information.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
struct library{
    string title;
    string author;
    string subject;
    string bookID;
};
int main()
{
    library book[2];
    book[0].author = "Yordanos";
    book[0].subject = "DSA";
    book[0].bookID = "001";
    book[0].title = "DSA in C++";
    book[1].author = "Lema";
    book[1].subject = "Java";
    book[1].bookID = "002";
    book[1].title = "DSA in Java";

    cout << setw(15) << left << "Author" << setw(15) << left << "Subject"
         << setw(15) << left << "Title" << setw(15) << left << "Book ID" << endl << endl;
    for(int i=0; i<2; i++){
        cout << setw(15) << left << book[i].author << setw(15) << left << book[i].subject
             << setw(15) << left << book[i].title << setw(15) << left << book[i].bookID << endl;
    }
    return 0;
}
//33.	Write a program which takes 2 arrays of 4 integers each, a and b. C is an array with 8 integers. 
//The program should put into c the appending of b to a, the first 4 integers of c from array a, 
//the latter 4 from b. Then the program should display c.
#include <iostream>

using namespace std;

int main()
{
    int a[4];
    int b[4];
    int c[8];

    for(int i=0; i<4; i++){
        cout << "\nEnter the number for a[]: ";
        cin >> a[i];
        cout << "\nEnter the number for b[]: ";
        cin >> b[i];
        system("cls");
    }
    for(int i=0; i<8; i++){
        if(i<4){
            c[i] = a[i];
        }
        c[i+4] = b[i];

    }
    cout << "\nThe elements of c which is a + b: " ;
    for(int i=0; i<8; i++){
        cout << c[i] << " ";
    }
    return 0;
}
