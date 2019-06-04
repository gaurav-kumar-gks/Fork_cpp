//pattern print

{
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
void patternPrint(queue <char>q);
//Position this line where user code will be pasted.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     string s;
	     cin>>s;//Taking string as input
		 queue<char>q;
		    for(int i=0;i<s.length();i++)
		    {
		        q.push(s[i]); //Putting s into a queue
		    }
		  
		    patternPrint(q); //passing queue to the function that you need to complete
		     cout<<endl;  //new line already added, don't add.
	}
	return 0;
}

}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
void patternPrint(queue <char>q)
{
    deque <char> d;
    while(!q.empty()){
        d.push_back(q.front());
        q.pop();
    }
    
    while(!d.empty()){
        cout<<d.front();
        d.pop_front();
        if(!d.empty()){
            cout<<d.back();
            d.pop_back();
        }
        
    }
}
