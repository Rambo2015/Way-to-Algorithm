//最小点权覆盖和最大点权独立集
//weighted_covering_independent_set.cpp

//二分图中每个节点都拥有一个正权值，为了方便权值取正整数，求给定二分图中
//权值最小的最小点覆盖的权值之和，和权值最大的点独立集的权值之和

//1)最小点权覆盖
//当二分图中每个节点的权值就是它的邻节点的数量时
//最小点权覆盖问题退化为求二分图的最小点覆盖
//而最小点权覆盖问题转化为最大流问题进行求解
//将原二分图B构造为对应的流网络G，则对应流网络G的最大流即为原二分图B的最小点权覆盖
//在二分图B=<X,Y,E>上添加源点beg和汇点end
//设二分图中每条边e，一个端点i属于X集合，另一端点j属于Y集合
//将每条边e改为一条从节点i指向节点j的有向边，权值为INF
//从源点beg到X集合中每个节点i添加一条有向边，权值为节点i的权值
//从Y集合中每个节点j到汇点end添加一条有向边，权值为节点j的权值
//即得到对应的流网络
//定理：
//原二分图B的最小点权覆盖的权值之和 = 对应流网络的最小割 = 对应流网络的最大流
//则可通过求对流流网络的最大流来解决原二分图的最小点权覆盖的权值之和
//2)最大点权独立集
//定理：
//最大独立数 + 最小覆盖数 = 节点总数
//应用于带权值的二分图时也成立：
//最大点权独立集的权值和 + 最小点权覆盖的权值和 = 节点权值总和
//则最大点权独立集的权值和 = 节点权值总和 - 最小点权覆盖的权值和
//即最大点权独立集的权值和可以转化为最小点权覆盖的权值和，进一步转化为最大流问题

//int weight_covering_independent_set(bipartite b)



