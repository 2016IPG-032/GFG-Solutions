#include <iostream>
#include <vector>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
	//code
	int test;
	cin >> test;
	
	while(test--){
	    int n;
	    cin >> n;
	    
	    vector<int> temp(n);
	    
	    for(int i = 0; i < n; i++){
	        cin >> temp[i];
	    }
	    
	    int i = 0, j = 0;
	    
	    while(i < n){
	        if(temp[i] != 0){
	            swap(temp[i], temp[j]);
	            j++;
	        }
	        i++;
	    }
	    
	    for(int i = 0; i < n; i++){
	        cout << temp[i] << " ";
	    }
	    
	    cout << endl;
	}
	
	return 0;
}
