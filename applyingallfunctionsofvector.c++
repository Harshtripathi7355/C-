#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cout <<"vector size : "<< v.size() << endl;
    v.push_back(25);
    v.push_back(35);
    v.push_back(45);
    cout <<"After push back size:" << v.size() << endl;
    v.pop_back();
    cout <<"After pop back size:" << v.size() << endl;
    cout << "Capacity of vector: "<< v.capacity() << endl;
    for(int val : v) {
        cout << val << " ";
    }
    cout << endl;
    cout << "First element of vector : " << v.front() <<endl;
    cout << "Last element of vector : " << v.back() <<endl;
    cout << "Vector at index 2 : " << v.at(2) << endl;
    return 0;


    int<vector> ve;
    ve.push_back(2);
    ve.push_back(3);
    cout << ve.size() << endl;
    cout << ve.capacity() << endl;
    return 0;
}