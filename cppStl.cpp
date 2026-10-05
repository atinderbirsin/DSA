#include <bits/stdc++.h>
using namespace std;

void explainPair()
{
    // pair is under the std library
    pair<int, int> pr1 = {2, 8};
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = {3, 'A'};
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{4, 'H'}, 8};
    cout << pr3.first.second << " " << pr3.second << endl;
};
void explainVector()
{
    // Vector is basically array without size
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(0);
    vec.emplace_back(5);

    // [1, 2, 0]
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    };

    // iterator , pointing to that location not the element
    vector<int>::iterator beginIterator = vec.begin();
    auto endIterator = vec.end();

    for (vector<int>::iterator i = beginIterator; i < endIterator; i++)
    {
        cout << *i << endl;
    };

    // better approach
    for (auto i : vec)
    {
        cout << i << endl;
    };

    // reverse iterator
    auto reverseBegin = vec.rbegin();
    auto reverseEnd = vec.rend();

    for (auto i = reverseBegin; i < reverseEnd; i++)
    {
        cout << *i << " test" << endl;
    };

    vector<int> dupVec(vec.begin() + 1, vec.end() - 1);

    for (auto i : dupVec)
    {
        cout << i << " dupVec" << endl;
    };

    vec.erase(vec.begin() + 1, vec.end() - 1);

    for (auto i : vec)
    {
        cout << i << " ";
    };

    // to clear whole vector
    // vec.clear();

    // to swap elements of vector from one to another
    swap(vec, dupVec);

    for (auto i : vec)
    {
        cout << i << " afterSwap ";
    };

    cout << endl;

    for (auto i : dupVec)
    {
        cout << i << " afteSwap dupVec ";
    };

    dupVec.insert(dupVec.begin(), 4);

    cout << endl
         << vec.size() << endl;
}
void explainList()
{
    list<int> ls = {6, 7};
    ls.push_front(1);
    ls.push_front(2);
    for (auto it : ls)
    {
        cout << it << " ";
    };
}
void explainStack()
{
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(7);
    st.push(73);
    st.push(17);
    st.push(71);

    cout << st.top() << " "; // 7
    st.pop();                // Deleted 7 from stack
    cout << st.top() << " "; // 1
    st.pop();

    cout << endl;

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << endl;

    cout << st.size() << " " << endl;
}
void explainQueue()
{
    // FIFO
    // Ticket counter people buying ticket example

    queue<int> q;
    q.push(2);
    q.push(22);
    q.push(23);
    q.push(24);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    };
}
void explainPQ()
{
    // store the highest element on top
    // underling heap is used
    priority_queue<int> pq;
    pq.push(2);
    pq.push(8);
    pq.push(7);
    pq.push(53);
    pq.push(23);

    cout << pq.top() << " ";
    pq.pop();
    cout << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    };

    cout << endl;

    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(2);
    pq2.push(8);
    pq2.push(7);
    pq2.push(53);
    pq2.push(23);

    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
}
void explainSet()
{
    // stores unique elements
    // in ascending order

    set<int> st;
    st.insert(2);
    st.insert(21);
    st.insert(21);
    st.insert(21);
    st.insert(22);
    st.insert(12);
    st.insert(213);
    st.insert(224);
    st.insert(256);
    st.insert(14);
    st.insert(26);
    st.insert(25);

    for (auto it : st)
    {
        cout << it << endl;
    };

    auto it = st.find(12);

    if (it != st.end())
    {
        cout << *it << endl;
    };

    cout << st.count(121);

    cout << endl;

    auto it2 = st.end();
    it2--, it2--;
    st.erase(it2);
    for (auto it : st)
    {
        cout << it << " test" << endl;
    }

    auto it3 = st.begin();
    it3++;

    auto it4 = st.end();
    it4--;

    st.erase(it3, it4);

    for (auto it : st)
    {
        cout << it << " current  ";
    };

    cout << endl;

    // returns an iterator
    // returns a number >= specified number
    // result >= 12;
    auto itLb = st.lower_bound(12);

    cout << *itLb << " lb" << endl;

    // returns an iterator
    // returns a number >= specified number
    // result > 12;
    auto itUp = st.upper_bound(1);
    cout << *itUp << endl;
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(4);
    ms.insert(5);
    ms.insert(1);
    ms.insert(5);
    ms.insert(1);
    ms.insert(1);

    auto it = ms.find(4);

    // it will erase all the 1
    ms.erase(1);

    cout << *it << endl;

    for (auto it : ms)
    {
        cout << it << endl;
    }
}

void explainUnorderedSet()
{
    // This is much faster than ordered set
    unordered_set<int> st;

    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(5);
    st.insert(3);
    st.insert(2);
    st.insert(1);

    for (auto it : st)
    {
        cout << it << " ";
    };
    cout << endl;

    auto it = st.find(13); // O(1), O(N) - very rare
}

void explainMap()
{
    map<int, string> mpp;

    // stores according to ascending order of keys
    // it stores everything unique
    mpp.insert({5, "raju"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp[4] = "raj";

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    };

    auto it = mpp.find(4);

    cout << (*it).first << "->" << (*it).second << endl;
}

void explainUnorderedMap()
{
    unordered_map<int, string> mpp;

    // stores according to ascending order of keys
    // it stores everything unique
    mpp.insert({5, "raju"});
    mpp[1] = "abc";
    mpp[1] = "vik";
    mpp[2] = "bcd";
    mpp[3] = "cat";
    mpp[4] = "raj";

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    };

    auto it = mpp.find(4);

    cout << (*it).first << "->" << (*it).second << endl;
}

void explainMultiMap()
{
    multimap<int, char> mpp;
    mpp.insert({3, 'b'});
    mpp.insert({2, 'a'});
    mpp.insert({3, 'b'});
    mpp.insert({3, 'c'});
    mpp.insert({1, 'f'});
    mpp.insert({4, 'd'});
    mpp.insert({5, 'r'});
    mpp.insert({3, 'x'});

    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    };

    cout << endl;

    auto it = mpp.equal_range(3);
    for (auto i = it.first; i != it.second; i++)
    {
        cout << (*i).first << "->" << (*i).second << endl;
    }
}

void explainSort()
{
    int arr[5] = {6, 2, 1, 7, 8};

    sort(arr, arr + 5);

    for (auto i : arr)
    {
        cout << i << endl;
    }

    vector<int> vec = {6, 2, 1, 7, 8};

    sort(vec.begin(), vec.end() - 3);

    for (auto it : vec)
    {
        cout << it << endl;
    }
}

void explainAccumulate()
{
    int arr[5] = {6, 7, 2, 3, 0};
    // arguments , first starting of array , second end of array , third starting sum value
    cout << accumulate(arr, arr + 5, 0) << endl;
}

void explainCount()
{
    int arr[5] = {6, 7, 2, 3, 0};

    int num = 1;
    // arguments , first starting of array , second end of array , third how many times that number appear
    cout << count(arr, arr + 5, num);
}

void explainNextPermutation()
{
    string str = "bca";

    // returns permutations in sorting orders
    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.begin() + 3));

    do
    {
        cout << str << endl;
    } while (prev_permutation(str.begin(), str.begin() + 3));
}

void explainMaxElement()
{
    int arr[5] = {7, 6, 5, 10, 9};

    auto it = max_element(arr, arr + 5);

    auto it2 = min_element(arr, arr + 5);

    cout << *it << " " << *it2 << endl;
}

void explainReverse()
{
    int arr[5] = {7, 6, 5, 10, 9};

    reverse(arr, arr + 5);

    for (auto it : arr)
    {
        cout << it << " ";
    };
    cout << endl;
}

bool internalComparator(int el1 , int el2) {
    if (el1 <  el2) return false;
    return true;
}

bool internalComparatorPair(pair<int, int> el1, pair<int, int> el2) {
    if (el1.second > el2.second) return true;
    if (el1.second < el2.second) return false;
    if (el1.first < el2.first) return true;
    return false;
}

void explainComparator()
{
    // el1 is 5
    // el2 is 6
    // internal comparator that takes el1 and el2
    // and tells if the el1 should be before el2 or not
    int arr[] = {5, 6, 1, 2};
    sort(arr, arr + 4, internalComparator);

    for (auto it : arr)
    {
        cout << it << " ";
    };

    cout << endl;


    pair<int, int> arr2[] = {{1,6}, {1,5}, {2,6}, {2,9}, {3,9}};
    // sort it according
    // to the second element
    // {2, 9}, {3, 9}, {1, 6}, {2, 6}, {1, 5};
    sort(arr2, arr2+5, internalComparatorPair);
    for( int i = 0; i < 5; i++) {
        cout << "{" << arr2[i].first << "," << arr2[i].second << "}";
    };


}

int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiSet();
    // explainUnorderedSet();
    // explainMap();
    // explainUnorderedMap();
    // explainMultiMap();
    // explainSort();
    // explainAccumulate();
    // explainCount();
    // explainNextPermutation();
    // explainMaxElement();
    // explainReverse();
    explainComparator();
    return 0;
}
