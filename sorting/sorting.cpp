#include <iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int main(){
    vector<int>v = {1,2,3,-1,-4,4};
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
    
}