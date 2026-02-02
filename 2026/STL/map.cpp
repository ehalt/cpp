// Map:

// syntax:

map<key, value> mp;

// 1. Map Declaration
// 2. insert()

  map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});


// 3. at() 

	map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    for (int i = 1; i <= 4; i++) {
        cout << mp.at(i) << ' ';
    }



	map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    for (auto e : mp) {
        cout << e.first << ' ' << e.second << sesh;
    }



// 4. size() 

// 5. begin(), end()

	map<int, int> mp;

    mp.insert({1, 10});
    mp.insert({2, 20});
    mp.insert({3, 30});
    mp.insert({4, 40});

    map<int, int>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it -> first << ' ' << it -> second << sesh;
    }




