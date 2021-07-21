#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    int N;
    vector<int> v;
    
    cin >> N;
    while (N--) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end(), compare);
    
    vector<int>::iterator iter;
    
    for(iter = v.begin(); iter != v.end(); iter++)
        cout << *iter << '\n';
        
    return 0;
}