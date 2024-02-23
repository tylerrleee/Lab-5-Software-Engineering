#include "StringData.h"
#include <iostream>
#include <string>
using namespace std;
// Linear Search that takes each instance, i, in the vector 'arr'
int linearsearch(vector<string> arr, string target) {
    int i = 0;
    while (i < arr.size()) {
        if (arr.at(i) == target) {
            return i;
        }
        i += 1;
    }
    return -1;
}
//Binary Search that checks the midpoint to see if it's = to target until there's one character left
 int binarysearch(vector<string> arr, string target) {
    int begin = 0;
    int end = arr.size();
    while (begin <= end) {
        int midpoint = begin + (end - begin) / 2;
        if (arr.at(midpoint) == target) {
            return midpoint;
        }
        if (target > arr.at(midpoint)) {
            begin = midpoint + 1;
        }
        if (target < arr.at(midpoint)) {
            end = midpoint - 1;
        }
    }
     return -1;
}


int main(void) {
    vector<string> arr = getStringData();

    cout << "Linear search for 'not_here': " << endl;
    long long start = systemTimeNanoseconds();
    cout << "Index: " << linearsearch(arr, "not_here") << endl;
    long long finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;
    cout << "Binary search runtime for 'not_here': " << endl;

    start = systemTimeNanoseconds();
    cout << "Index: " << binarysearch(arr, "not_here") << endl;
    finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;

    cout << "Linear search for 'mzzzz': " << endl;
    start = systemTimeNanoseconds();
    cout << "Index: " << linearsearch(arr, "mzzzz") << endl;
    finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;

    cout << "Binary search for 'mzzzz': " << endl;
    start = systemTimeNanoseconds();
    cout << "Index: " << binarysearch(arr, "mzzzz") << endl;
    finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;

    cout << "Linear search for 'aaaaa': " << endl;
    start = systemTimeNanoseconds();
    cout << "Index: " << linearsearch(arr, "aaaaa") << endl;
    finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;

    cout << "Binary search for 'aaaaa': " << endl;
    start = systemTimeNanoseconds();
    cout << "Index: " << binarysearch(arr, "aaaaa") << endl;
    finish = systemTimeNanoseconds();
    cout << "Runtime: " << (finish - start) << endl;

    return 0;
}

