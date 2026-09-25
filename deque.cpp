#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d= {1,2,3,4,5};
    d.push_back(7);
    d.pop_front();
    for(int val : d){
        cout << val << " ";
    }
    return 0;
}