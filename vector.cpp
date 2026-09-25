#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,4,5};

    // cout << "vec.end:" << *(vec.end()) << endl;
    // vector<int> :: iterator it;
    // for(it=vec.begin(); it!=vec.end();it++){
    //     cout << *(it) << " ";
    // }
    // vector<int> :: reverse_iterator it;
    for( auto it = vec.rbegin(); it!=vec.rend();it++){
        cout<< *it << " ";
    }
    // vector<int> vec2(vec1);
    // // vec2.erase(vec2.begin()+2);
    // vec2.insert(vec2.begin()+4,50);
    // vec2.erase(vec2.begin()+1, vec2.begin()+3);
    //  vec2.clear();
    //  cout << "is empty: " << vec2.empty() << endl;
    // for(int val : vec2){
    //     cout << val << " " << endl;
    // }
   
    // vec.pop_back();
    // for( int val : vec){
    //     cout << val << " " << endl;
    // }
    // cout << "Value at index 3:" << vec[2] << "or" << vec.at(3) << endl;
    // cout << "front" << vec.front() << endl;    
    // cout << "fback" << vec.back() << endl;    
    // cout << vec.size() <<endl;
    // cout << vec.capacity() << endl;
    return 0;
}