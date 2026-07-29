#include <bits/stdc++.h>

void explainVector() {
    std::vector<int> v;     // Creates empty container

    v.push_back(1);         // Adds number '1' to the array
    v.emplace_back(2);      // Inserts number '2' to the array or vector and emplace back is faster than pushback

    // {1, 2}

    std::vector<std::pair<int, int>>vec;

    vec.push_back({1, 2}); 
    vec.emplace_back(1, 2);

    std::vector<int> v(5, 100);

    // {100, 100, 100, 100, 100}

    std::vector <int> v(5);      // Fills with 0

    std::vector <int> v1(4,20);
    std::vector <int> v2(v1);       // v2 is the copy of the container v1

    // How to access the elements of a vector?

    // METHOD 1
    std::cout << v[0] << " " << v.at(0);    // both prints the element at index 1
    std::cout << v.back() << " ";       // Prints the last element of the vector

    // METHOD 2
    std::vector<int> :: iterator it = v.begin(); // v.begin() points to the memory address of the element , not to the element itself
    it++;
    std::cout << *(it) << " ";                  // *(it) prints the actual element at that position

    std::vector<int> :: iterator it2 = v.end();  // v.end() points to the memory location right after the last element

    std::vector<int> :: reverse_iterator rit = v.rend(); // v.rend() reverses the vector and then point to the memory location right after the element present in the last when the vector is reversed

    std::vector<int> :: reverse_iterator rit2 = v.rbegin();


    // PRINTING THE VECTOR;
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        std::cout << *(it) << " ";
    }

    for(auto it = v.begin(); it != v.end(); it++) {     // c++ automatically assigns the datatype when we use auto keyword
        std::cout << *(it) << " ";
    }

    for (auto it : v) {
        std::cout << it << " ";
    }
}
