//play with vectors
{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main() {
    
    long long testcase;
    cin >> testcase;
    
    while(testcase--){
        vector<pair<long long, long long>> v;
        
        // Number of pairs to be pushed to vector        
        long long N;
        cin >> N;
        
        // Taking input to vector v
        for(long long i = 0;i<N;i++){
            long long k, m;
            cin >> k >> m;
            v.push_back(make_pair(k, m));
        }
        
        // Calling function to delete required pair
        v = vectorIterator(v);
        
        // Printing size of vector
        cout << v.size() << endl;
        
        // Iterating through vector and printing the pairs
        if(v.size() != 0){
            for(auto k = v.begin(); k != v.end(); k++){
                cout << k->first << " " << k->second << " ";
            }
                cout << endl;
        }
        else{
            cout << "Empty" << endl;
        }
    }
    
	return 0;
}
}

//User function Template for C++
/*Function to erase pair with second element as odd
* v : argumentgument as vector<pair<long long, long long>>
* Return type : vector<pair<long long, long long>>
*/


vector<pair<long long, long long>> vectorIterator(vector<pair<long long, long long>> v){
    
    for(auto i=0; i<v.size(); ){
        if(v[i].second %2 == 1)
            v.erase(v.begin()+i);
        else
            i++;
    }
    return v;
    
}

