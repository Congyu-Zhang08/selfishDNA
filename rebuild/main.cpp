// SelfishDNA 复刻版 - 主程序
// 目前用来测试 Pearl 类体系是否正常工作

#include <iostream>
#include <list>
using namespace std;

// 引入所有珠子类型
#include "PoaS/Pearl.hh"
#include "PoaS/HK.hh"
#include "PoaS/Transposase.hh"
#include "PoaS/Noncoding.hh"
#include "PoaS/NonEss.hh"

int main()
{
    cout << "=== 测试 Pearl 类体系 ===" << endl;

    // 创建一个小基因组（链表），手动放几颗珠子进去
    list<Pearl*> genome;

    // 放入 3 个管家基因（编号 1、2、3）
    genome.push_back(new HK(1));
    genome.push_back(new HK(2));
    genome.push_back(new HK(3));

    // 放入 1 个转座酶
    Transposase* tra = new Transposase(1);
    tra->mobility = 0.9;   // 设置高跳跃率
    genome.push_back(tra);

    // 放入 2 个非编码DNA
    genome.push_back(new Noncoding(0));
    genome.push_back(new Noncoding(0));

    // 放入 1 个非必需基因
    genome.push_back(new NonEss(1));

    // 遍历基因组，打印每颗珠子的信息
    cout << "基因组内容 (" << genome.size() << " 颗珠子):" << endl;

    int pos = 0;
    for (list<Pearl*>::iterator it = genome.begin(); it != genome.end(); it++)
    {
        Pearl* p = *it;   // *it = 当前指针指向的 Pearl

        // 用 dynamic_cast 判断实际类型（类似 Python 的 isinstance()）
        if (dynamic_cast<HK*>(p))
            cout << "  [" << pos << "] HK 管家基因, type=" << dynamic_cast<HK*>(p)->type << endl;
        else if (dynamic_cast<Transposase*>(p))
            cout << "  [" << pos << "] Tra 转座酶, type=" << dynamic_cast<Transposase*>(p)->type
                 << ", mobility=" << dynamic_cast<Transposase*>(p)->mobility << endl;
        else if (dynamic_cast<Noncoding*>(p))
            cout << "  [" << pos << "] NC 非编码DNA" << endl;
        else if (dynamic_cast<NonEss*>(p))
            cout << "  [" << pos << "] NE 非必需基因, type=" << dynamic_cast<NonEss*>(p)->type << endl;

        pos++;
    }

    // 测试 clone：复制转座酶
    Pearl* original = tra;
    Pearl* copy = original->clone();
    cout << "\n克隆测试:" << endl;
    cout << "  原件 mobility = " << dynamic_cast<Transposase*>(original)->mobility << endl;
    cout << "  副本 mobility = " << dynamic_cast<Transposase*>(copy)->mobility << endl;
    cout << "  是同一个对象吗? " << (original == copy ? "是" : "不是") << endl;

    // 清理内存（C++ 必须手动释放 new 出来的东西）
    for (list<Pearl*>::iterator it = genome.begin(); it != genome.end(); it++)
        delete *it;
    delete copy;

    cout << "\nPearl 类体系测试通过！" << endl;
    return 0;
}
