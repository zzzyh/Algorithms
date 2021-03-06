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
    hmap.clear();
    for(int i = 0; i < nums.size(); i++){
      hmap[nums[i]] = i;
    }
   // if(hmap.find(-460) != hmap.end()){
   //     cout << "***haha***" << hmap.find(-1)->first << " , " << hmap.find(-1)->second << endl;
   // }
    for(int i = 0; i < nums.size(); i++){
      comp = target - nums[i];
     // cout << "The comp of "  << nums[i] << " is " << comp << endl; 
        if((hmap.find(comp) != hmap.end()) && (i != hmap[comp])){
        //if((hmap.find(comp) != hmap.end()) && (i < hmap[comp])){
          //cout << "The comp is " << comp << endl;
          //cout << "******" << hmap.find(comp)->first << " , " << hmap.find(comp)->second << endl;
          res.push_back(i);
          res.push_back(hmap[comp]);
        return res;
      }
    }
  }
};


int main(){
  //int n[] = {2, 7, 11, 15};
  //int n[] = {23,34,21,5,23,35,1,2,24};
  //int n[] = {2,3,4};
  int n[] = {572,815,387,418,434,530,376,190,196,74,830,561,973,771,640,37,539,369,327,51,623,575,988,44,659,48,22,776,487,873,486,169,499,82,128,31,386,691,553,848,968,874,692,404,463,285,745,631,304,271,40,921,733,56,883,517,99,580,55,81,232,971,561,683,806,994,823,219,315,564,997,976,158,208,851,206,101,989,542,985,940,116,153,47,806,944,337,903,712,138,236,777,630,912,22,140,525,270,997,763,812,597,806,423,869,926,344,494,858,519,389,627,517,964,74,432,730,843,673,985,819,397,607,34,948,648,43,212,950,235,995,76,439,614,203,313,180,760,210,813,920,229,615,730,359,863,678,43,293,978,305,106,797,769,3,700,945,135,430,965,762,479,152,121,935,809,101,271,428,608,8,983,758,662,755,190,632,792,789,174,869,622,885,626,310,128,233,82,223,339,771,741,227,131,85,51,361,343,641,568,922,145,256,177,329,959,991,293,850,858,76,291,134,254,956,971,718,391,336,899,206,642,254,851,274,239,538,418,21,232,706,275,615,568,714,234,567,994,368,54,744,498,380,594,415,286,260,582,522,795,261,437,292,887,405,293,946,678,686,682,501,238,245,380,218,591,722,519,770,359,340,215,151,368,356,795,91,250,413,970,37,941,356,648,594,513,484,364,484,909,292,501,59,982,686,827,461,60,557,178,952,218,634,785,251,290,156,300,711,322,570,820,191,755,429,950,18,917,905,905,126,790,638,94,857,235,889,611,605,203,859,749,874,530,727,764,197,537,951,919,24,341,334,505,796,619,492,295,380,128,533,600,160,51,249,5,837,905,747,505,82,158,687,507,339,575,206,28,29,91,459,118,284,995,544,3,154,89,840,364,682,700,143,173,216,290,733,525,399,574,693,500,189,590,529,972,378,299,461,866,326,43,711,460,426,947,391,536,26,579,304,852,158,621,683,901,237,22,225,59,52,798,262,754,649,504,861,472,480,570,347,891,956,347,31,784,581,668,127,628,962,698,191,313,714,893};

  vector<int> array(n, n + sizeof(n)/sizeof(int));
  int target = 101;
  //long int target = 6;
  vector<int> results;
  int i=0; 
//  cout << "The size of the input array is " << array.size() << endl;
//  for(vector<int>::iterator it = array.begin(); it != array.end(); it++){
//    cout << i << " is "  << *it << '\n';
//    i++;
//  }

  Solution res;
  results = res.twoSum(array, target);


  for(vector<int>::iterator it = results.begin(); it !=results.end(); it++) 
    cout << "The output is : " << *it << '\n';

  return 0;
}
