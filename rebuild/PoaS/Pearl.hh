// Pearl.hh - 珠子基类的声明（头文件）
// 所有类型的基因（HK、转座酶等）都继承自这个类
// 就像 Python 里写: class Pearl: 然后其他 class HK(Pearl):

#ifndef PEARL_HH     // "头文件保护符"：防止同一个文件被 #include 两次
#define PEARL_HH      // 第一次 include 时定义这个标记，第二次发现已定义就跳过

class Pearl
{
public:
    int type;                        // 基因的亚型编号（比如管家基因1号、2号、3号）
    int gene_age_;                   // 这个基因存在了多少代
    int num_horizontal_transfers_;   // 被水平转移了多少次（细菌之间）
    int num_vertical_transfers_;     // 被垂直传递了多少次（亲代→子代）
    int num_jumps_;                  // 转座子在基因组内跳跃了多少次

    Pearl();                         // 构造函数（声明）
    virtual ~Pearl();                // 虚析构函数（声明）—— 有继承就必须加 virtual
    virtual Pearl* clone() const = 0;  // 纯虚函数：子类必须实现自己的"复制"方法
    // "= 0" 的意思是：Pearl 自己不能被直接创建，只能创建它的子类
};

#endif
