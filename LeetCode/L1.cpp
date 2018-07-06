#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //int size_nums = nums.size();
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            int first_num = nums.at(i);
            for (int j = i + 1; j < nums.size(); j++){
                if (nums.at(j) == target - nums.at(i)){
                    int second_num = nums.at(j);
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> ip;
    int n, tmp, target;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        ip.push_back(tmp);
    }
    cin >> target;
    Solution sol;
    vector<int> result = sol.twoSum(ip, target);
    for (int i = 0; i < 2; i++){
        cout << result.at(i) << endl;
    }
    return 0;
}

