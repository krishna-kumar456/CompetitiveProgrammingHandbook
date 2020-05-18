### Data Stuctures
A data structure is a way to store data in the memory of a computer

## Dynamic arrays
The most popular dynamic array in C++ is the vector structure,
which can be used almost like an ordinary array


```
vector<int> v;
v.push_back(3); // [3]
v.push_back(2); // [3,2]
v.push_back(5); // [3,2,5]
```

A shorter way to iterate through a vector is as follows:

```
for (auto x : v) {
cout << x << "\n";
}
```


The function back returns the last element in the vector, and the function
pop_back removes the last element:

```
vector<int> v;
v.push_back(5);
v.push_back(2);
cout << v.back() << "\n"; // 2
v.pop_back();
cout << v.back() << "\n"; // 5
```

the average time complexity of push_back is O(1).


The function
substr(k, x) returns the substring that begins at position k and has length x, and
the function find(t) finds the position of the first occurrence of a substring t.


## Set structures

The C++ standard library contains two set implementations: The structure
set is based on a balanced binary tree and its operations work in O(logn) time.
The structure unordered_set uses hashing, and its operations work in O(1) time
on average.

Pros and Cons

set structure is that it maintains the order of the elements and
provides functions that are not available in unordered_set. On the other hand,
unordered_set can be more efficient.

C++ also contains the structures multiset and unordered_multiset that otherwise work like set and unordered_set but they can contain multiple instances of
an element.

Often, only one instance should be removed, which can be done as follows:

```
s.erase(s.find(5));
cout << s.count(5) << "\n"; // 2
```


## Map structures

the structure map is based on a balanced binary tree
and accessing elements takes O(logn) time, while the structure unordered_map
uses hashing and accessing elements takes O(1) time on average

```
map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["banana"] << "\n"; // 3
```


If the value of a key is requested but the map does not contain it, the key
is automatically added to the map with a default value.


The function count checks if a key exists in a map:

```
if (m.count("aybabtu")) {
// key exists
}
```

The following code prints all the keys and values in a map:

```
for (auto x : m) {
cout << x.first << " " << x.second << "\n";
}
```


## Iterators and ranges

An iterator is a variable that points to an element in a data structure.

Note the asymmetry in the iterators: s.begin() points to an element in the
data structure, while s.end() points outside the data structure. Thus, the range
defined by the iterators is half-open.


## Note

Sometimes sorting can be an efficient choice instead of data strucutres.