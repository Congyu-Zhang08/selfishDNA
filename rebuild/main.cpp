// SelfishDNA 复刻版 - 主程序入口
// 这个文件是整个仿真的起点，就像 Python 的 if __name__ == "__main__":

#include <iostream>    // 输入输出库，提供 cout（打印到屏幕）
using namespace std;   // 这样就不用每次写 std::cout，直接写 cout

int main(int argc, char* argv[])
{
    // argc = 命令行参数个数（argument count）
    // argv = 命令行参数数组（argument values）
    // 比如运行 ./SelfishDNA -Size 100
    //   argc = 3
    //   argv[0] = "./SelfishDNA"
    //   argv[1] = "-Size"
    //   argv[2] = "100"

    cout << "=== SelfishDNA Rebuild ===" << endl;
    cout << "命令行参数个数: " << argc << endl;

    for (int i = 0; i < argc; i++) {
        cout << "  argv[" << i << "] = " << argv[i] << endl;
    }

    cout << "骨架搭建成功！" << endl;
    return 0;   // 返回 0 表示程序正常结束
}
