```
└─ C++ 空程序框架
   ├─ 1. 文件头
   │   └─ #include <bits/stdc++.h>
   │       ├─ 作用：一次性包含所有常用标准库
   │       ├─ 包含的库（示例）
   │       │   ├─ <iostream>   → 输入输出
   │       │   ├─ <vector>     → 动态数组
   │       │   ├─ <algorithm>  → 排序、查找
   │       │   └─ …（共 50+ 个头文件）
   │       └─ 注意：仅用于竞赛，正式项目不推荐
   ├─ 2. 命名空间
   │   └─ using namespace std;
   │       ├─ 作用：省去 std:: 前缀
   │       ├─ 常用对象
   │       │   ├─ cout / cin
   │       │   ├─ vector / string
   │       │   └─ sort / max / min
   │       └─ 潜在问题：命名冲突（大项目慎用）
   ├─ 3. 程序入口
   │   └─ int main()
   │       ├─ 返回值：int（0 表示成功）
   │       ├─ 标准签名：int main(int argc, char* argv[])
   │       └─ 空实现
   │           └─ { return 0; }
   └─ 4. 完整代码
       ├─ 行号
       │   ├─ 1  #include
       │   ├─ 2  using namespace
       │   ├─ 4  int main()
       │   └─ 6  return 0;
       └─ 编译运行
           ├─ 命令：g++ -std=c++17 a.cpp -o a
           └─ 执行：./a → 退出码 0
```