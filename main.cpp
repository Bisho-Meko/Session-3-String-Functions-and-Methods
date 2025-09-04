#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int main() {
	// String Functions and Methods
    //-----------------------------

    // Methods are functions bounded to (a) specific class(es).
    // Classes are user-defined data types (e.g. strings).
    // Strings are made to store texts.
    // Without them, we would be using Char Arrays.

    // char arr[5] = {'a', 'b', 'c', 'd', 'e'};
    // char arr[12] = {'B', 'i', 's', 'h', 'o', 'y', ' ', 'H', 'a', 'n', 'n', 'a'};

    // string [name] = "Text";
    // string str = "Bishoy Hanna";
    
    // .size() Method
    // str.size()
    // cout << str.size();

    // Accessing characters (indexing) => str[idx]
    // cout << str[1];

    // Concatenation
    // string t = "is a mentor.";
    // cout << str + t;

    // Comparison
    // == operator
    // string v = "is a mentor.";
    // cout << (t == str);
    // cout << (t == v);
    
    // Lexicographically = Alphabetically
    // "acid"
    // "base"
    // "ball"
    // "ballerina"

    // ASCII Code
    // Each character has an ASCII Code
    // cout << (int)'a';
    // cout << (char)(97);

    // Continue Comparison
    // str1.compare(str2)
    // Return 0 if equal
    // Return + integer once found a char in str1 with ASCII > that in str2
    // Return - integer once found a char in str1 with ASCII < that in str2
    // cout << str.compare(t);

    // Find (for searching)
    // str.find(substring)
    // Returns the 1st idx of the 1st occurence of the substring
    // cout << str.find("Hanna");

    // Reverse (function) => O(N)
    // reverse(1st iterator, 2nd iterator)
    //                
    // "Bishoy Hanna"
    // reverse(str.begin(), str.end());
    // cout << str;

    // Sort (function, sort lexicographically) => O(N * log(N))
    // sort(str.begin(), str.end());
    // cout << str;
}
