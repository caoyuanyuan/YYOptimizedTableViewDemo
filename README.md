# YYOptimizedTableViewDemo
This is the optimized tableview demo.

此Demo由所写项目中总结，是对tableView的流畅度做优化。

主要思路如下：

1.异步渲染内容到图片。

2.按照滑动速度按需加载内容。

3.重写处理网络图片加载。

实际上做完前两点就可以很流畅了。我把内容都异步渲染到了一张图上，尽可能减少Cell层级。

项目中我用的是SDWebImageManager。
