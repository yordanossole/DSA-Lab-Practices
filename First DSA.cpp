//First day DSA Lab session - 4/7/2016 E.C
//Array and Structures Exercises 
//1.	Write a program that asks the user to type 10 integers of an array. The program must compute and write how many integers are greater than or equal to 10.
#include <iostream>
#include <conio.h>

using namespace std;

int *receiveInput () {
    int *arr = new int[10];
    for(int i=0; i<10; i++){
        cout << "Enter the " << i+1 << " number: ";
        cin >> arr[i];
        system("cls");
    }
    return arr;
}
int counter (int arr[]) {
    int counter = 0;
    for(int i=0; i<10; i++){
        if(arr[i]>=10){
            counter++;
        }
    }
    return counter;
}

using namespace std;
int main(){
    cout << "Enter 10 integers: " << endl;
    cout << "There are " << counter(receiveInput()) << " numbers greater than or equal to 10." << endl;
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
//3.	Write a program which takes 2 arrays of 4 integers each, a and b. C is an array with 8 integers. 
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
        c[i] = a[i];
        c[i+4] = b[i];
        system("cls");
    }

    cout << "\nThe elements of c which is a + b: " ;
    for(int i=0; i<8; i++){
        cout << c[i] << " ";
    }
    return 0;
}
//Function Exercises
/*4.	Write a C++ program that will display the calculator menu. The program will prompt the 
user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer 
vales for the calculation. See the sample below.
MENU 
1. Add 
2. Subtract 
3. Multiply 
4. Divide 
5. Modulus 
Enter your choice: 1 
Enter your two numbers: 12 15 
Result: 27 
Continue? Y
The program also asks the user to decide whether he/she wants to continue the operation. 
If he/she input ‘y’, the program will prompt the user to choose the operation gain. 
Otherwise, the program will terminate.
*/
#include <iostream>

using namespace std;

int add(int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}
int mul(int n1, int n2){
    return n1 * n2;
}
float div(float n1, int n2){
    return n1 / n2;
}
int mod(int n1, int n2){
    return n1 % n2;
}

int main()
{
    int choice, num1, num2;
    char ch;
    cout << "Choose one of the options: " << endl
         << "Menu" << endl
         << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << "5. Modulus" << endl;
    do{
        cout << "\nEnter your choice: ";
        cin >> choice;
        cout << "Enter your two numbers (using space): ";
        cin >> num1 >> num2;
        switch (choice){
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << sub(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << mul(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << div((float)num1, num2) << endl;
            break;
        case 5:
            cout << "Result: " << mod(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!!!" << endl;
        }
        cout << "Do you want to continue? (Y/y or N/n) ";
        cin >> ch;
    }while(ch == 'y' || ch == 'Y');
    return 0;
}

/*5.	Write a program that will ask the user to input three integer values
from the keyboard. Then it will print the smallest and largest of those numbers.
*/
#include <iostream>

using namespace std;

int main()
{
    int arr[3];

    cout << "Enter the 3 numbers using space: ";
    for(int i=0; i<3; i++){
        cin >> arr[i];
    }
    int MIN = arr[0], MAX = arr[0];
    for(int i=0; i<3; i++){
        if(arr[i] < MIN){
            MIN = arr[i];
        }
        if(arr[i] > MAX){
            MAX = arr[i];
        }
    }
    cout << "The min is: " << MIN << "\nThe max is: " << MAX;


    return 0;
}
/*
6.	Write a C++ program to pass an array containing age of person to a function.
This function should find average age and display the average age in main function.
*/
#include <iostream>

using namespace std;

int avgAge(int arr[], int len){
    int sum = 0;
    int avg = 0;
    for (int i=0; i<len; i++) {
        sum += arr[i];
    }
    avg = sum/len;
    return avg;
}

int main() {
    int age[10] = {21, 55, 23, 45, 30, 29, 26, 28, 31, 24};
    int avg = avgAge(age, 10);
    cout << "Average age is: " << avg << endl;
    return 0;
}


/*
7.	Write a program that asks for an index and a number. Then it includes the number 
at the indicated index of the array ={1,2,3,4,5,6} and moves a position forward 
(from u to u+1) each element after the selected index.
*/

//Pointer Exercise
//8.	Write block of code that take an input from the user and display the same value using pointer.


//9.	Write a program that asks the user to enter integers as inputs to be stored in the 
//variables 'a' and 'b' respectively. There are also two integer pointers named ptrA and ptrB. 
//Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.


//10.	Write a C++ program to accept five integer values from keyword and print the elements 
//of the array in reverse order using a pointer.


//11.	Write a function countEven(int*, int) which receives an integer array and its size, 
//and returns the number of even numbers in the array.

#include <iostream>

using namespace std;

int countEven(int *arr, int n){
    int counter = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            counter++;
        }
    }
    return counter;
}

int main()
{
    int SIZE = 0;
    int *arr = new int[SIZE];

    cout << "Enter the size of the array: ";
    cin >> SIZE;
    cout << "Enter the numbers using space: ";

    for(int i=0; i<SIZE; i++){
    cin >> arr[i];
    }

    cout << "\nNo of even no in the given array is: " << countEven(arr, SIZE) << endl;

    return 0;
}

//12.	Write two functions void cubeByPtr1 ( int * numPtr ) and
//void cubeByPtr2 ( int & numPtr ) which returns a cube of a number.

#include <iostream>

using namespace std;

int cubeByPtr1(int *numPtr){
    return (*numPtr) * (*numPtr) * (*numPtr);
}
int cubeByPtr2(int &numPtr){
    return numPtr * numPtr * numPtr;
}

int main()
{
    int num;
    cout << "Enter a number to get its cube: ";
    cin >> num;
    cout << "The result is " << cubeByPtr1(&num)<< endl;
    cout << "original: " << num << endl;
    cout << "The result is " << cubeByPtr2(num) << endl;
    cout << "original:  " << num << endl;
    return 0;
}
//13.	Given the string "A string." Print on one line the letter on the index 0, 
//the pointer position and the letter t. Update the pointer to pointer +2. 
//Then, in another line print the pointer and the letters r and g of the string (using the pointer).












