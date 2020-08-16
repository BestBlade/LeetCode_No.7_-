/*--------------------------------------------------------------------------------------|
给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。					|
																						|
示例 1:																					|
																						|
输入: 123																				|
输出: 321																				|
																						|
示例 2:																					|
																						|
输入: -123																				|
输出: -321																				|
																						|
示例 3:																					|
																						|
输入: 120																				|
输出: 21																				|
注意:																					|
																						|
假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据	|
这个假设，如果反转后整数溢出那么就返回 0。												|
																						|
来源：力扣（LeetCode）																	|
链接：https://leetcode-cn.com/problems/reverse-integer									|
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。					|
---------------------------------------------------------------------------------------*/

/*	简单计算，条件判断
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：5.8 MB, 在所有 C++ 提交中击败了92.22%的用户
*/

#include <iostream>
#include <vector>

using namespace std;

int reverse(int x) 
{
	int i = x;

	int result = { 0 };

	while (i)
	{
		int surplus = i % 10;
		if (result > INT_MAX / 10 || result < INT_MIN / 10)						/*	由于存储限制，result最后一位一般都是0，1，2，因此不用再做过多判断即可	*/
		{
			return 0;
		}
		else
		{
			result = result * 10 + surplus;
		}
		i = (i - surplus) / 10;
	}

	return result;
}


int main()
{
	int x = -2147483648;

	int result;

	result = reverse(x);

	cout << result << endl;

}