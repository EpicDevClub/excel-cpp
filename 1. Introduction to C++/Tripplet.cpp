#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;
auto start= high_resolution_clock::now();
int main() {
	
	for(int i = 0; i < 1000; i++) {
		for(int j = i+1; j < 1000; j++) {
			int k = 1000 - i - j;
			if((i*i + j*j == k*k) && (i+j+k == 1000) && (i < j && j < k)) cout << i *j*k <<endl;
		}
	}
	auto stop= high_resolution_clock::now();
	auto diff= duration_cast<microseconds>(stop-start);
	cout<<"\nTime: "<<diff.count();
	
}