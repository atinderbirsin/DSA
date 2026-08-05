#include<bits/stdc++.h>
using namespace std;

void explainPair() {
    pair<int, int> pr1 = {2, 8};
    // pair<int, int> pr2 = make_pair(2, 8)
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = {3, 'A'};
    cout << pr2.second << " " << pr2.first << endl;

    pair<pair<int, char>, int> pr3 = {{4, 'B'}, 8};
    cout << pr3.first.second << " " << pr3.first.first << " " << pr3.second << endl;
}

void explainVector() {
    // vector<int> vec(5);
    vector<int> vec = {7, 8};
    vector<int> vec2 = {6, 2,5, 6, 7, 8, 9};
    vec.push_back(1);
    vec.push_back(2);
    vec.emplace_back(0);

    swap(vec, vec2);

    for (auto it : vec) {
        cout << it << endl;
    }

    cout << vec.size() << endl;

    // loop to access every element
    for (int i = 0;i < vec.size(); i++) {
        cout << vec[i] << endl;
    }

    // iterator
    // auto keyword to assign type automatically
    // vector<int>::iterator beginVec = vec.begin();
    auto beginVec = vec.begin();
    auto endVec = vec.end();

    cout << *beginVec << " " << *endVec << endl;

    for(vector<int>::iterator i = beginVec; i < endVec; i++) {
        cout << *i << " ";
    }

    for (auto i : vec) {
        cout << i << endl;
    }

    // reverse begin
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();

    for (auto i = reverseBegin; i < reverseEnd; i++) {
        cout << *i << endl;
    }


    vector<int> dupVec(vec.begin() + 2, vec.end());
    for (auto i: dupVec) {
        cout << i << endl;
    }

    for(auto it : vec) {
        cout << it << " ";
    }

    cout << endl;

    vec.pop_back();

    cout << vec.front() << vec.back() << endl;

    vec.erase(vec.begin() + 1, vec.end() - 1);

    for(auto it : vec) {
        cout << it << " ";
    }

    cout << endl;

    vec.clear();

    for (auto it : vec) {
        cout << it << " ";
    }

}

void explainList() {
    list<int> ls = {6, 7};
    ls.push_front(1);
    ls.emplace_front(2);
    ls.emplace_back(3);

    for(auto it : ls) {
        cout << it << endl;
    }
}

void explainStack() {
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(71);
    st.push(73);
    st.push(72);
    st.push(77);

    while(st.empty() == false) {
        cout << st.top() << " ";
        st.pop();
    }


    cout << st.size() << endl;

    cout << st.top() << " "; // 7
    st.pop(); // deletes 7 from the stack
    cout << st.top() << " "; // 1
    st.pop(); // deletes 1 from the stack

    cout << st.top() << " ";
}

void explainQueue() {
    //FIFO
    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);

    while(q.empty() == false) {
        cout << q.front() << " ";
        q.pop();
    }

}

void explainPQ() {
    // stores the highest element at the top
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(10);
    pq.push(8);

    // stores the smallest element at the top
    priority_queue<int, vector<int>, greater<int>> pqsmall;
    pqsmall.push(5);
    pqsmall.push(2);
    pqsmall.push(10);
    pqsmall.push(8);

    cout << pq.top() << " ";
    // pq.pop();
    // cout << pq.top() << " "; 

    while(pq.empty() == false) {
        cout << pq.top() << " ";
        pq.pop();
    }

    while(pqsmall.empty() == false) {
        cout << pqsmall.top() << " ";
        pqsmall.pop();
    }
}

void explainSet() {
    // Stores only unique elements in ascending order

    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(213);
    st.insert(211);
    st.insert(12);

    // for (auto it : st) {
    //     cout << it << endl;
    // }

    // st.erase(21);
    // auto it = st.find(12);
    // if(it != st.end()) {
    //     cout << *it << " ";
    // }

    // auto it2 = st.end();
    // it2--; it2--;
    // st.erase(it2);

    // for (auto it : st) {
    //     cout << it << endl;
    // }

    // cout << st.count(21) << endl;

    for (auto it : st) {
        cout << it << " ";
    }

    cout << endl;

    auto it = st.begin();
    it++;

    auto it2 = st.end();
    it2--;

    // st.erase(it,it2);

    for (auto it : st) {
        cout << it << " ";
    }

    // returns an iterator that points to the element
    // that is >= number given
    auto it3 = st.lower_bound(11);
    cout << *it3;

    cout << endl;

    // returns an iterator that points to the element
    // that is > number given
    auto it4 = st.upper_bound(213);
    cout << *it4 << endl;
}

void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(0);
    ms.insert(21);
    ms.insert(21);

    auto it = ms.find(1); // points to first 1

    auto it3 = ms.erase(ms.find(1)); // erase the first 1

    auto it2 = ms.erase(1); // erase all the 1's

    for (auto it : ms) {
        cout << it <<  endl;
    }

    for (auto it : ms) {
        cout << it << endl;
    }

    cout << ms.count(21) << endl; // gives you the count of all 1's
}

void explainUnorderedSet() {
    unordered_set<int> uns;
    uns.insert(1);
    uns.insert(2);
    uns.insert(1);
    uns.insert(11);
    uns.insert(11);
    uns.insert(12);
    uns.insert(12);
    uns.insert(12);

    for (auto it : uns) {
        cout << it << " ";
    }

    cout << endl;

    auto it = uns.find(11); // O(1), O(N) (rare scenario)
}

void explainMap() {
    // stores unique keys in ascending order
    map<int, string> mpp; // stores according to ascending order of keys
    mpp.insert({4, "Raj"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";

    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    auto it = mpp.find(4); // it will return the pointer that will point to key and value

    cout << (*it).first << "->" << (*it).second << endl;

    auto it2 = mpp.find(5); // if the index doesn't exist, it will always point an iterator to the end

    if (it2 == mpp.end()) {
        cout << "not found";
    }

    auto it3 = mpp.lower_bound(11); // first key >= value
    auto it4 = mpp.upper_bound(12); // first key > value
}

void explainUnorderedMap() {
    // stores unique keys in any order
    // we use when we need fast search functionality
    unordered_map<int, string> mpp; // stores according to ascending order of keys
    mpp.insert({4, "Raj"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";

    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    auto it = mpp.find(4); // it will return the pointer that will point to key and value

    cout << (*it).first << "->" << (*it).second << endl;

    auto it2 = mpp.find(5); // if the index doesn't exist, it will always point an iterator to the end

    if (it2 == mpp.end()) {
        cout << "not found";
    }

    // auto it3 = mpp.lower_bound(11); // first key >= value
    // auto it4 = mpp.upper_bound(12); // first key > value
}

void explainMultiMap() {
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({1, 'b'});
    mpp.insert({1, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'a'});
    mpp.insert({2, 'b'});

    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    cout << endl;
 
    auto it1 = mpp.equal_range(2); // gives the range of 2 from starting to end

    for (auto i = it1.first; i != it1.second; i++) {
        cout << (*i).first << "->" << (*i).second << endl;
    }

}

void explainSort() {
    int arr[5] = {6, 2, 1, 7, 8};
    sort(arr + 1, arr + 4);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    vector<int> vec = {5, 7, 8, 8, 1};
    sort(vec.begin() + 1, vec.begin() + 4);
    for(auto it : vec) {
        cout << it << " ";
    }

    cout << endl;
}

void explainAccumulate() {
    int arr[5] = {6, 2, 1, 7, 0};
    int sum = 5;
    cout << accumulate(arr, arr + 5, sum);
}

void explainCount() {
    int arr[5] = {6, 2, 1, 1, 0};
    int num = 1;
    cout << count(arr, arr + 5, num) << " ";
}

void explainFind() {
    int arr[5] = {6, 2, 1, 1, 0};
    auto it = find(arr, arr + 5, 8);

    if(it == (arr + 5)) {
        cout << "not found";
    }

    // cout << *it << " ";
}

void explainNextPermutation() {
    // string str = "abc";
    // do {
    //     cout << str << endl;
    // }while(next_permutation(str.begin(), str.end()));

    string str = "abc";
    do {
        cout << str << endl;
    }while(next_permutation(str.begin(), str.begin() + 3));
}

void explainPrevPermutation() {
    // string str = "abc";
    // do {
    //     cout << str << endl;
    // }while(next_permutation(str.begin(), str.end()));

    string str = "bac";
    do {
        cout << str << endl;
    }while(prev_permutation(str.begin(), str.begin() + 3));
}

void explainMaxElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = max_element(arr, arr + 5);

    cout << (*it) << " ";
}

void explainMinElement() {
    int arr[] = {7, 6, 5, 10, 9};
    auto it = min_element(arr, arr + 5);

    cout << (*it) << " ";
}

void explainReverse() {
    int arr[] = {7, 6, 5, 10, 9};
    reverse(arr, arr + 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}

// el1 , el2
// tells true if el1 is before el2
// tells false if el1 has to be after el2
bool internalComparator(int el1, int el2) {
    if (el1 < el2) return false;
    return true;
}

bool internalComparator2(pair <int, int> el1, pair <int, int> el2) {
    if (el1.second > el2.second) return true;
    if (el1.second < el2.second) return false;
    if (el1.first < el2.first) return true;
    return false;
}

void explainComparator() {
    // el1 is 6
    // el2 is 1
    // internal comparator takes el1 and el2
    // and tells you if el1 should be before el2 or not
    // int arr[] = {5, 6, 1, 2};
    // sort(arr, arr + 4, internalComparator);
    // for (int i = 0;i < 4; i++) {
    //     cout << arr[i] << " ";
    // }

    // difficult method
    pair<int, int> arr[] = {{1,6}, {1,5}, {2, 6}, {2, 9}, {3, 9}};
    // sort it according to the second element
    // {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5}
    // if two elments are same example {2, 9}, {3, 9} , pick the smaller one first

    sort(arr, arr + 5, internalComparator2);

    for (int i = 0; i < 5; i++) {
        cout << arr[i].first << "->" << arr[i].second  << " ";
    }

    cout << endl;


}

int main() {
   explainComparator();
   return 0;
}