#include <bits/stdc++.h>
#include <iostream>

using namespace std;
using namespace std::chrono;

auto start = high_resolution_clock::now(); // measuring time

long long SieveOfEratosthenes(int num) { // taken from internet and modified a little
   bool pno[num+1];
   long long sum = 0;
   memset(pno, true, sizeof(pno));
   for (int i = 2; i*i <= num; i++) {
      if (pno[i] == true) {
         for (int j = i*2; j <= num; j += i)
         pno[j] = false;
      }
   }
   for (int i = 2; i <= num; i++)
   		if (pno[i])
   			sum += i;
   return sum;
}

int main() {
	
   int num = 2000000;
   cout << "The sum of prime numbers smaller or equal to "<< num <<" are: " << SieveOfEratosthenes(num) << endl;
   auto stop = high_resolution_clock::now(); 
   auto duration = duration_cast<microseconds>(stop - start); 
   cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl; 
   return 0;
}