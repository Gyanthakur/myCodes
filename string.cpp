// :string class in C++
// Difficulty Level : Easy
// Last Updated : 06 Jul, 2022


// C++ has in its definition a way to represent a sequence of characters as an object of the class. This class is called std:: string. String class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character.

// String vs Character Array



// String



//      A string is a class that defines objects that be represented as a stream of characters.

 
 
//     In the case of strings, memory is allocated dynamically. More memory can be allocated at run time on demand. As no memory is preallocated, no memory is wasted.


//     As strings are represented as objects, no array decay occurs.

    

//     Strings are slower when compared to implementation than character array.
    

//     String class defines a number of functionalities that allow manifold operations on strings.



//  Char Array
 
//  	A character array is simply an array of characters that can be terminated by a null character.

//     The size of the character array has to be allocated statically, more memory cannot be allocated at run time if required. Unused allocated memory is also wasted


//     There is a threat of array decay in the case of the character array. 

//     Implementation of character array is faster than std:: string. 


//     Character arrays do not offer many inbuilt functions to manipulate strings.
    


// Operations on Strings


// 1) Input Functions

// Function           Definition


// getline()	      This function is used to store a stream of characters as entered by the user in      the object memory.




// push_back()          	This function is used to input a character at the end of the string.





// pop_back()	          Introduced from C++11(for strings), this function is used to delete the last character from the string. 

























// c++ program to demonstrate the working of
// getline(), push_back() and pop_back()






// #include<iostream>
// #include<string>
// using namespace std;
// // Driver code
// int main(){
//     // Declairing string
//     string str;
//     // taking string input using getline()
//     getline(cin,str);

//     // Displaying string
//     cout<< "the initial string is : ";
//     cout<<str<<endl;

//     // Inserting a character 
//     str.push_back('s');

//     //Displaying the string
//     cout<< "the string after push_back operation is : ";
//     cout<<str<<endl;

//     //deleting a character
//     str.pop_back();

//     //displaying the string
//     cout<<"the string after pop_back function is : ";
//     cout<<str<<endl;
//     return 0;
// }




// output  


// The initial string is : geeksforgeek
// The string after push_back operation is : geeksforgeeks
// The string after pop_back operation is : geeksforgeek




// 2) Capacity Functions

// Function           Definition

// capacity()         This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.


// resize()            This function changes the size of the string, the size can be increased or decreased.

// length()            This function finds the length of the string.


// shrink_to_fit()     This function decrease tha capacity of the string and makes it equal to the minimum capacity of the string . This operation is useful to save additional memory if we are sure that no further addition of character has to be made.


// c++ program to demonstrate the working of
// Capacity(), resize(), and shrink_to_fit()



// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     // initializing string
//     string str = "GyanpratapSingh is for GPS";
//     // displlay string 
//     cout<<"the initial string is : ";
//     cout<<str<<endl;
//     // resizing string using resize()
//     str.resize(13);
//      // displlay string 
//      cout<<"the string after using resize : ";
//      cout<<str<<endl;
//      //display the capacity string
//      cout<<"the capacity of string is : ";
//      cout<<str.capacity()<<endl;

//      //display the length of the string
//      cout<<"the lenght of the string is :";
//      cout<<str.length()<<endl;

//      // decreasing the capacity of string    
//      // using shrink_to_fit()
//      str.shrink_to_fit();
//       // displlay string 
//       cout<<"the new capacity of the string after shrinking : ";
//       cout<<str.capacity()<<endl;

// return 0;
// }










// Function	       Definition
// begin()             This function returns an iterator to the beginning of the string.



// end()              This function returns an iterator to the end of the string.




// rbegin()            This function returns a reverse iterator pointing at the end of the string.




// rend()               This function returns a reverse iterator pointing at beginning of the string.



//c++ program to demonstrate the working of
// begin(), end(), rbegin(), rend()
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "gyanPratapSingh";
    //declaring iterator
    std::string::iterator it;

    //declaringh reverse iterator
    std::string::reverse_iterator it1;

    //displaying string
    cout<<"the string using forward iterator is : ";
    for(it = str.begin(); it != str.end(); it++)
    cout<<*it<<endl;


    //display the reverse string
     cout << "The reverse string using reverse iterators is "
            ": ";
            for(it1=str.rbegin(); it1 != str.rend(); it1++)
            cout<<*it1<<endl;

return 0;
}