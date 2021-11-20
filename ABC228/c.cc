#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cassert>
#include <numeric>
#include <string>
#include <map>
#include <set>
using namespace std;

int main(){
    int n, k, tmp0, tmp1, tmp2, i;
    cin >> n >> k;
    vector<int> p(n);
    vector<int> p2(n);
    
    
    for(i=0; i<n; i++){
        std::cin >> tmp0 >> tmp1 >> tmp2;
        p[i] = tmp0+tmp1+tmp2;
        p2[i] = p[i];
        //cout << p[i] << endl;
    }

    sort(p.begin(), p.end(), std::greater<int>());


    for(i=0; i<n; i++){
        int tmp = distance(p.begin(), lower_bound(p.begin(), p.end(), p2[i]+300));
        //cout << tmp << endl;
        if(p2[i]+300 >=p[k-1]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    }




    return 0;
}