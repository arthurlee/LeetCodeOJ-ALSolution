import java.util.HashMap;

class Solution {
	public int[] twoSum(int[] nums, int target) {
		HashMap<Integer, Integer> m = new HashMap<>();

		for (int i = 0; i < nums.length; i++) {
			Integer num = nums[i];
			Integer diff = target - num;
			if (m.containsKey(diff)) {
				return new int[]{m.get(diff), i};
			}
			m.put(num, i);
		}

		return null;
	}

	public void test(int[] nums, int target, int[] indices) {
		int[] result = twoSum(nums, target);
		if (result == null || result.length != 2 || result[0] != indices[0] || result[1] != indices[1]) {
			System.out.println("fail [" + nums[0] + ", " + nums[1] + ", " + nums[2] + "]");
		} else {
			System.out.println("pass [" + nums[0] + ", " + nums[1] + ", " + nums[2] + "]");
		}
	}

	public static void main(String[] args) {
		// problem sample
		int case_nums_1[] = {2, 7, 11, 15};
		int case_target_1 = 9;
		int case_indices_1[] = {0, 1};

		// first fail
		int case_nums_2[] = {3, 2, 4};
		int case_target_2 = 6;
		int case_indices_2[] = {1, 2};

		// second fail
		int case_nums_3[] = {0, 4, 3, 0};
		int case_target_3 = 0;
		int case_indices_3[] = {0, 3};

		// third fail
		int case_nums_4[] = {-3, 4, 3, 90};
		int case_target_4 = 0;
		int case_indices_4[] = {0, 2};

		// fourth fail
		int case_nums_5[] = {-1, -2, -3, -4, -5};
		int case_target_5 = -8;
		int case_indices_5[] = {2, 4};

		Solution s = new Solution();

		s.test(case_nums_1, case_target_1, case_indices_1);
		s.test(case_nums_2, case_target_2, case_indices_2);
		s.test(case_nums_3, case_target_3, case_indices_3);
		s.test(case_nums_4, case_target_4, case_indices_4);
		s.test(case_nums_5, case_target_5, case_indices_5);
	}
}