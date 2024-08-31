#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int main() { 
//   int arr[] = {1,5,3,7,4};
//   int n = 5;
//   int k =5;
//   priority_queue < int > hp;
//   for(int i = 0; i < n; i++){
//     hp.push(arr[i]);
//     if(hp.size() > k){
//       hp.pop();
//     }
//   }
//   cout<<hp.top();


int main(){
  
  int arr[] = {1,5,3,7,4};
  int n = 5;
  int k =3;
  priority_queue < int, vector<int>, greater<int> > hp;
  for(int i = 0; i < n; i++){
    hp.push(arr[i]);
    if(hp.size() > k){
      hp.pop();
    }
  }
  while(!hp.empty()){
    cout<<hp.top()<<" ";
    hp.pop();
  }
}
  
  


