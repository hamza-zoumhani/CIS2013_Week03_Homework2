#include <iostream>
using namespace std;



int main(){
	for (int n=2; n<100; n++){
		
		for(int k=2; k<100; k++){
			if(n%k == 0){
				break;
			}
			else if (n == k+1){
				cout << n << " ";
			}
		}
	}
	
	return 0;
}