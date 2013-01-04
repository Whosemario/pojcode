pojcode
=======
I just use this project to store my codes that are my solutions on problems of poj.org. 

[3368]
这道题是一个很常见的问题，有两种解法，线段树和RMQ
先说一下线段树的解法：树的每一个节点记录一下几个状态：此节点区间的最高频率，左端点的值，左端点的值得延伸长度，右端点的值，和端点的值得延伸长度，
这样就可以求得最后的结果了
再说一下RMQ的解法：思想与求最大值十分类似，每一段连续的值我们可以算出个数来，这样会组成一个新的数组A，对这个数组么rmq的初始化；当查询为(l,r)时，
我们就算出l位置的值在A中的下标，r在A中的下标，边界处理一下，即l到l+1开始位置的长度，r到r开始位置的长度，然后对(ind[l]+1,ind[r]-1)区间段进行rmq
查询，取这三个值中的最大值
