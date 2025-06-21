#include <vector>
#include <algorithm>
#include <iostream> 
using namespace std;
    class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i< nums.size() -1; ++i)
            for(int j = i+1 ;j < nums.size() ; ++j){
           if(nums[j] + nums[i] == target){
                return {i,j};
            }
            }
          
        return{};
    }
};
int main(){
Solution sol;
     vector<int>  nums ; int target ;
     int num;
     int n =5;
     cout<<"Enter the numbers \n";
     for (int i = 0 ; i< n; ++i){
        
        cin >> num;
      nums.push_back(num);
     }
      cout << "Enter target: ";
    cin >> target;
   
 vector<int> result = sol.twoSum( nums , target );
 if(!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }
    
    return 0;
}