/*
题目描述
求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？
为此他特别数了一下1~13中包含1的数字有1、10、11、12、13因此共出现6次,
但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,
可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）。

*/

//直接就是暴力 不和你多解释
int NumberOf1Between1AndN_Solution(int n)
{
  int i;
  int count = 0;

  for(i = 1; i <= n; i++) {
  	count = isContainsOne(i, count);
  }

  return count;
}

int isContainsOne(int n, int count) {
	for(; n > 0; n = n / 10) {
		int mod = n % 10;
		if(mod == 1) {
			count++;
		}
	}

	return count;
}
