class Solution {
public:
	int pivotIndex(vector<int>& nums) {
		vector<int> s{0};
		for (int num : nums) s.push_back(s.back()+num);
		for(int i = 0; i<s.size()-1; i++){
			if(s[i] == s[nums.size()] - s[i+1]){
				return i;
			}
		}
		return -1;
	}
};