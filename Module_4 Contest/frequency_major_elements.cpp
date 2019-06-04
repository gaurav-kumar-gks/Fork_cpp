//frequency major 
{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
int main() {
	
	long long testcase;
	cin>>testcase;
	
	while(testcase--){
	    long long N;
	    cin >> N;
	    
	    // declaring vector
	    vector<long long> v;
	    
	    for(long long i = 0;i<N;i++){
	        long long k;
	        cin >> k;
	        v.push_back(k);
	    }
	    
	    // calling function to perform required operation
	    vector<pair<long long, long long>> v_new = sortWithFrequency(v);
	    
	    for(auto it = v_new.begin();it!=v_new.end();it++){
	        cout << it->first << " " << it->second << " ";
	    }
	    cout << endl;
	    
	}
	
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// Function to sort vector based 
// on frequence of integers
bool comp(const pair<long long, long long> &a, const pair<long long, long long> &b){
        return (a.second > b.second);
}

vector<pair<long long, long long>> sortWithFrequency(vector<long long> v){
    sort(v.begin(), v.end());
    vector<pair<long long, long long>> v_new;

    long long f=1;
    for(auto i=1; i<=v.size(); i++){
        if(i == v.size()){
            v_new.push_back(make_pair(v[i-1], f));
            break;
        }
        if(v[i] != v[i-1]){
            v_new.push_back(make_pair(v[i-1],f));
            f=1;
        }
        else{
            ++f;
        }
    }
    
    sort(v_new.begin(), v_new.end(), comp);
    return v_new;
}
