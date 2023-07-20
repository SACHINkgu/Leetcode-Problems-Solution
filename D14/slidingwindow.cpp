void GetMax(vector < int > nums, int l, int r, vector < int > & arr) {
  int i, maxi = INT_MIN;
  for (i = l; i <= r; i++)
    maxi = max(maxi, nums[i]);
  arr.push_back(maxi);
}
vector < int > maxSlidingWindow(vector < int > & nums, int k) {
  int left = 0, right = 0;
  int i, j;
  vector < int > arr;
  while (right < k - 1) {
    right++;
  }
  while (right < nums.size()) {
    GetMax(nums, left, right, arr);
    left++;
    right++;
  }
  return arr;
}