//add vector elements
{
//Initial Template for C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void vectorAdd(vector<int>v);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    vectorAdd(v);
	   

}
/*This is a func//add vector elements
{tion problem.You only need to complete the function given below*/
//User function Template for C++
void vectorAdd(vector<int>v)
{   int sum=0;
    for(auto i=0; i<v.size(); i++){
       sum+=v[i]; 
    }
    cout<<sum<<endl;
}
