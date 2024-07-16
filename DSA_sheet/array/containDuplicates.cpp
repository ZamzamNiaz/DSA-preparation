#include <iostream>
using namespace std;

int main(){
    // using hashset 
     unordered_set<int> seen;
    for(int num : nums){
      if(seen.count(num) > 0){
        return true;
      }
      seen.insert(num);
    }
    return false;
}