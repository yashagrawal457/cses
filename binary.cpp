#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	vector<int> v = {1,2,3,4,5,6};
	int start = 0;
	int end = 5;
	int target = 5;
	bool flag = 0;
	while(start < end){
		int mid = (end + start)/2;
		if(v[mid] == target){
			cout << "Hooray" << endl;
			flag = 1;
			break;
		}
		if(v[mid] < target){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	if(!flag){
		cout << "Fuck" << endl;
	}
}