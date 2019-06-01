//diagonal sum
{
//Initial Template for C++
#include <iostream>
using namespace std;
//Position this line where user code will be pasted.
// Driver code
int main() {
	
	int testcase;
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
        
        // Declaring pointer to pointer
        // to create 2D array
        int **arr;
        arr = new int*[N];
        
        // For every i, create a dynamic array
        // and take input
        for(int i = 0;i<N;i++){
            arr[i] = new int[N];
            for(int j = 0;j<N;j++){
                cin >> arr[i][j];
            }
        }
        
         cout << diagonalSum(arr, N) << endl;
	    
	}
	
	return 0;
}
}
/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
/*Function to find diagonal sum
* N : size of array
* arr : input array
* Note : You have to mention argument also
*/
int diagonalSum(int *arr[],  int n){
    
    int sum = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((j==i) || (j == n-1-i))
                sum += arr[i][j];
        }
    }
    return sum;
}
