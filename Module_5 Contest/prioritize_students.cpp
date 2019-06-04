{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    
	    // Declaring priority queue of pair 
	    priority_queue<pair<string, int>, vector<pair<string, int>>, compare> pq;
	    
	    int queries;
	    cin >> queries;
	    
	    for(int i = 0;i<queries;i++){
	        
	        // name and marks input
	        string input;
	        cin >> input;
	        
	        if(input == "i"){
	            string name;
	            int marks;
	            cin >> name >> marks;
	            
	            // inserting elements to priority queue
	            insert(pq, name, marks);
	            
	        }
	        else if(input == "o"){
	            
	            // deleting elements from priority queue
	            pair<string, int> ans = maxFromQueue(pq);
	            cout << ans.first << " " << ans.second << endl;
	            
	            if(!pq.empty())
	                pq.pop();
	        }
	    }
	    
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
struct compare{
    constexpr bool operator()(pair<string, int> const & a, pair<string, int> const & b) const noexcept
    { 
        return a.second < b.second || (a.second == b.second && a.first > b.first);
    }
    
};
// Function to implement function insert to insert data into the priority_queue
priority_queue<pair<string, int>, vector<pair<string, int>>, compare> insert(priority_queue<pair<string, int>, vector<pair<string, int>>, compare> &pq, string name, int marks){
    
    //priority_queue<pair<string, int>, vector<pair<string, int>, compare> pq;
    pq.push(make_pair(name, marks));
    return pq;
    
}
// Function to implement maxFromQueue to get student with maximum makrs from priority_queue
// If marks are same, return the student with lexicographically smallest name
pair<string, int> maxFromQueue(priority_queue<pair<string, int>, vector<pair<string, int>>, compare> &pq){

    pair <string, int> p;
    if(!pq.empty())
        p = pq.top();
    else{
        p.first = "empty";
        p.second = -1;
    }
    return p;
    
    
}
