#include <bits/stdc++.h>
using namespace std;

void basicVector() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);

    cout << "cout Method: "<<v[1] << endl;
    cout << "Loop Method: "<<  endl;
    // Print vector v
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);

    // Print vector of pairs
    for (auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    vector<int> vec1(5, 100); // {100,100,100,100,100}
    vector<int> vec2(5);      // {0,0,0,0,0}
    vector<int> v1(5, 20);    // {20,20,20,20,20}
    vector<int> v2(v1);       // copy of v1

    v2.emplace_back(4);

    // Print v1
    cout << "v1: ";
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;

    // Print v2
    cout << "v2: ";
    for (int x : v2) {
        cout << x << " ";
    }
    cout << endl;


    vector<int> :: iterator it = v1.begin();
    it++;
    cout << *(it) <<  " ";

    vector<int> v3 = {10, 20, 30, 40, 50};
    vector<int>::iterator ti = v1.end();

}

void print_vector(){
    // ! print Vector
    vector <int> v = {10,20,30,40,50};
    cout << "Print using index: ";
    cout << v[0]<< " " << v.at(1);
    cout << endl << "Print using Loop: ";  

    for(vector <int> :: iterator x = v.begin(); x != v.end(); x++){ // long way
        cout << *(x) << " ";
    }
    cout << "\nPrint using Auto: ";
    for(auto y = v.begin(); y != v.end(); y++){
        cout << *(y) << " ";
    }
    cout << "\nprint using for-each loop: ";
    for(auto z : v){
        cout << z << " " ;
    }
}
void delete_vector(){
    // ! delete 
    vector <int> v = {10,20,30,40,50};
    // from {1,2,3,4,5}
    v.erase(v.begin()+1);
    // to {1,3,4,5}

    // from {1,2,3,4,5}
    v.erase(v.begin()+2, v.begin()+4); //?  start is include but end is not
    // to {1,2,5}
}

void insert_vector() {
    //! insert
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin(), 11); // insert 11 at start

    v.insert(v.begin()+1,2,12); // insert 12 after first index

    for (auto x : v) {
        cout << x << " ";
    }

    cout << endl;
}

void copy_vector(){
    //! copy 
    vector<int> v = {1,2,3,4,5};
    vector<int> copy(2,50);
    v.insert(v.begin(), copy.begin(), copy.end());
    for(auto x:v){
        cout << x << " ";
    } 
}

void func_vector(){

    vector <int> x = {1,2,3,4,5,6}; 
    vector <int> y = {6,7,8,9,0};
    cout << x.size() << endl; //size
    
    x.pop_back();
    cout << x.size() << endl; //size

    y.swap(x);
    for(auto z:y){
        cout << z << " ";
    }

    cout << endl;

    y.clear(); // erase the entire vector

    cout << y.empty() << endl; // 1 if empty else 0 



}

int main() {
    func_vector();

    return 0;
}
