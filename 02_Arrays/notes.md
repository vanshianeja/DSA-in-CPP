What is STL?
STL stands for Standard Template Library. It is basically a collection of algorithms, containers, iterators, functions in a minimized version so that you don't have to write lengthy lines of code and you can use that STL and you can get access to a container or to an algorithm i.e. they help us to write the C++ programs efficiently.

#include <bits/stdc++.h>
# this is very imp lib that contains many other lib like vectors, iostream , quue, string, stack, map, tree etc.

C++ STL is divided into 4 categories:
1. Algorithms
2. Containers (vector, set, queue, map etc)
3. Functions
4. Iterators


WHAT ARE PAIRS?
It is a part of utility library.

// Pairs
void explainPair() {
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;     -> prints => 1 3
    pair<int, pair<int, int>> p = {1, {3, 4}};      -> NESTED property of pairs
    cout << p.first << " " << p.second.second << " " << p.second.first;         -> prints => 1 4 3
    pair<int, int> arr{} = { {1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second;      -> prints => 4
}

------------------------------------------------------------------------------------------------------------------------------------------

Vectors:
Vector is a container (similar to array) which is dynamic in nature i.e. you can increase the size of vector whenever you wish to. 

A vector stores elements in contiguous (continuous) memory just like an array.
