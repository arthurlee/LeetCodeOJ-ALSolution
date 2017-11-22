using System;

namespace LeetCode
{
    class Program
    {
        
        static void Main(string[] args)
        {
            Solution s = new Solution();

            s.Test(new int[]{2, 7, 11, 15}, 9, new int[]{0, 1});
            s.Test(new int[]{3, 2, 4}, 6, new int[]{1, 2});
            s.Test(new int[]{0, 4, 3, 0}, 0, new int[]{0, 3});
            s.Test(new int[]{-3, 4, 3, 90}, 0, new int[]{0, 2});
            s.Test(new int[]{-1, -2, -3, -4, -5}, -8, new int[]{2, 4});
        }
    }
}
