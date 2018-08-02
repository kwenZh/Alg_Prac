/*
题目描述
输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

*/

/*
以前有看到过这种类似的题，考察的还是数据结构的基本功，比如求一个无序序列的第k大的元素，求前k大个元素等等。

这道题的原型是：输入n个整数，找出其中最小的K个数。例如输入4,5,1,6,2,7,3,8这8个数字，则最小的4个数字是1,2,3,4,。

直接上排序排好了输出的做法就不说了，捞的嘛就不谈了。这类题考察的是对堆的用法，一开始做的时候知道只建立k个元素堆，
然后维护堆，最后堆里面的所有元素就是所求。但是烦的错误就是究竟是建立大根堆还是小根堆，插入元素在堆尾还是堆顶。

解决思路：要得到一个序列的最小的k个数需要建立的是大根堆，然后将剩下的元素和堆顶比较，堆顶是这个堆最大的元素，
小于堆顶的话，那么这个元素有可能是最小的k个数之一，所以若小于堆顶元素，那么就与堆顶元素交换，并维护堆，不小于的话就过。
直到遍历完这个序列，得到的堆就是最小的k个数，但可能并不是升序的。那么同理要得到一个序列的最大的k个数，
那么就是建立一个最小堆，然后将剩下的元素和堆顶比较，若大于堆顶则交换并维护堆，直至遍历序列结束，刚好是反过来的。

还要注意的是如果k大于了数组的长度 返回的应是空
*/
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(), input.end());
        vector<int> result;

        if(k > input.size()) {
            return result;
        }

        for(int i = 0; i < k; i++) {
            result.push_back(input[i]);
        }

        return result;
    }
};
