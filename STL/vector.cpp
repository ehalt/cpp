/*
- Vector : 
push_back() , pop_back() , insert() , erase() , clear() , resize() , reserve() , front() , back() , assign() 
swap() , begin() , end() , rbegin() , rend() 

*/

    // iterating forward and backward


    vector<int> v = {10, 20, 30};
    cout << "Forward: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << sesh;

    cout << "Reverse: ";
    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << " ";
    }





    // push_back() -> adds an element to the back 
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    for (int x : v) {
        cout << x << ' ';
    }




    // pop_back() -> removes the last element from the container 

    vector<int> v = {10, 20, 30};
    v.pop_back();
    for (int x : v) {
        cout << x << ' ';
    }




    // insert an element or multiple element at a specific position
    // v.insert(position, value);
    vector<int> v = {10, 20, 30};
    v.insert(v.begin() + 1, 15);
    for (int e : v) {
        cout << e << ' ';
    }






    // erase() -> removes an element (or range) from the container
    // v.erase(position); or v.erase(start,end);

    vector<int> v = {10, 20, 30, 40};
    v.erase(v.begin() + 1);

    for (int e : v) {
        cout << e << ' ';
    }



    // clear() -> removes all elements from the container.
    // v.clear()

    vector<int> v = {10, 20, 30};
    v.clear();
    cout << v.size();




    // resize() -> change the size of the container. can increase or decrease the size
    // v.resize(new_size, value); 

    vector<int> v = {10, 20, 30};
    v.resize(5, 100);

    for (int e : v) {
        cout << e << ' ';
    }



    // reserve() -> reserves memory for at least the specified number of elements
    // v.reserve(n);

    vector<int> v;
    v.reserve(10); // allocating memory for 10 elements
    v.push_back(1);

    cout << "Capacity: " << v.capacity() << sesh; 




    // front() and back()
    // font() -> access the first element 
    // back() -> access the last element 
    // v.front() and v.back()

    vector<int> v = {10, 20, 30};
    cout << "Front : " << v.front() << sesh;
    cout << "Back : " << v.back() << sesh; 




    // assign() -> assign new value to the container 
    // v.assign(count, value)

    vector<int> v;
    v.assign(5, 100); // assigning 5 elements with the value 100
    for (int e : v) {
        cout << e << ' ';
    } 




    // swap() -> swaps contents of two containers 
    // v1.swap(v2);

    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};

    v1.swap(v2);
    for (int e : v1) {
        cout << e << ' ';
    }





    /* begin(), end(), rbegin(), rend()
       begin(): points to the first element 
       end(): points to the last element 
       rbegin(): points to the last element (reverse iterator)
       rend(): points before the first element (reverse iterator) 
    */

    vector<int> v = {10, 20, 30};

    // normal iteration
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << ' ';
    }
    cout << sesh;

    // reverse iteration

    for (auto it = v.rbegin(); it != v.rend(); it++) {
        cout << *it << ' ';
    }








