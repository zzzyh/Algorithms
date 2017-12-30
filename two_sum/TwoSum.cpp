#include<iostream>
#include<map>
#include<vector>

using namespace std;

class Solution{
public:
  vector<int> twoSum(vector<int> &nums, int target){
    map<int, int> hmap;
    vector<int> res;
    int comp;

    for(int i = 0; i < nums.size(); i++){
      hmap[nums[i]] = i;
    }

    for(int i = 0; i < nums.size(); i++){
      comp = target - nums[i]; 
      if(hmap.find(comp) != hmap.end()){
        res.push_back(i+1);
        res.push_back(hmap[comp]+1);
        return res;
      }
    }
  }
};


int main(){
  int n[] = {2, 7, 11, 15};
  //int n[] = {4, 0, 3, 5, 9};
  vector<int> array(n, n + sizeof(n)/sizeof(int));
  int target = 9;
  vector<int> results;
  
  cout << "The size of the input array is " << array.size() << endl;
  for(vector<int>::iterator it = array.begin(); it != array.end(); it++)
    cout << "The element is "  << *it << '\n';
  
  Solution res;
  results = res.twoSum(array, target);


  for(vector<int>::iterator it = results.begin(); it !=results.end(); it++) 
    cout << "The output is : " << *it << '\n';

  return 0;
}
