// command line:
//		dotnet run

using System;
using System.Collections.Generic;

namespace LeetCode
{
	public class Solution {
		public int[] TwoSum(int[] nums, int target) {
			Dictionary<int, int> dict = new Dictionary<int, int>();
			for (int index = 0; index < nums.Length; index++) {
				int num = nums[index];
				int diff = target - num;
				if (dict.ContainsKey(diff)) {
					return new int[]{dict[diff], index};
				}
				dict[num] = index;
			}
			return null;
		}

		public void Test(int[] nums, int target, int[] indices) {
			int[] ret = TwoSum(nums, target);
			if (ret == null || ret[0] != indices[0] || ret[1] != indices[1]) {
				Console.WriteLine("fail: [{0}]", string.Join(", ", nums));
			} else {
				Console.WriteLine("pass: [{0}]", string.Join(", ", nums));
			}
		}
	}
}
