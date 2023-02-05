#include <iostream>
using namespace std;

int main() {
	
	int testCases = 0;
	int roll;
	bool result;
	
	cin >>testCases;
	
	for(int i = 0; i < testCases; i++)
	{
	    cin >> roll;
	    
	    result = (roll == 6) ? true:false;
	    
	    if(result)
	        cout <<"Yes" <<endl;
	        
	    else
	        cout <<"No" <<endl;
	}
	
	return 0;
}
