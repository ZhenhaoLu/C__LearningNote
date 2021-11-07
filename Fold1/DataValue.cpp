//
// Created by 13667 on 2021/11/4.
//

#include "Fold1.h"
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int initialization(){
    cout << "The value of uninitialized int, double and string\n";
    int a;
    double b;
    string c;
    bool t;
//    cout << "int = " << a;  Compile Error
//    cout << "double = " << b; Compile Error
    cout << "string = " << c << ", size = " << c.length() << endl;
    cout << "当局部int，double变量未初始化时会有Compile Error" << endl;
    cout << "当局部boolean变量未初始化时会有Runtime Error并出现报错弹窗\n" << endl;
//    cout << "boolean = " << t << endl; Run Time Error
    return 0;
}

void BooleanAndInteger(){
    cout << "boolean 变量的两种值：True和False可以直接当成int：1和0\n";
    bool t = true;
    bool f = false;
    cout << "true + 1 = " << t + 1 << endl;
    cout << "false - 1 = " << f - 1<< endl;
}

void IntegerForCondition(){
    cout << "int类型值0和1可代替false\\true用于条件判定" << endl;
    if(1){cout << "条件语句if(1)判定成功" << endl;}
    if(0){}
    else{cout << "条件语句if(0)判定失败\n" << endl;}
}

void Input(){
    int a, b, c, d, e;
    string str, str1;
    cout << "格式为cin >>" << endl;
    cout << "接下来将介绍一次性输入多个值的方法。\n请输入三个数字，用回车Enter隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "请输入三个数字，用空格隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "请输入三个数字，用Tab隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "这三种方法可以同时使用。\n请输入四个数字，分别用上面三种方式隔开" << endl;
    cin >> a >> b >> c >> d;
    cout << "四个数之和为" << a + b + c + d << endl;
    cout << "请输入一句带空格的英文" << endl;
    cin >> str;
    cout << "输出为："  << str << endl;
    cout << "只是用cin是无法输入带有空格的字符串，但是空格后面的部分并不是消失了，如果接下来再次用cin >> str1, str1的输出为：";
    cin >> str1;
    cin.get();
    cout << str1 << endl << "若想带有空格，可以使用getline(输入源，string)来获取一整行输入， 键盘输入时输入源为cin。"
                            "使用此函数需要添加头文件 #include <string>\n请再输入一句带空格的英文：";
    getline(cin, str1);
    cout << "str1的输出为：" <<str1 << endl;
    cout << "最后请注意，如果在同一函数内先使用cin>>再使用getline（），请在二者之间添加一行"
            "cin.get();来去掉末尾的换行符（回车）" << endl;
    cout << "若是对int变量输入字符串，cin行会忽视本程序后面等待的全部输入并为所有等待输入的(未初始化)变量赋予一个随机值"
            "（string会被初始化为为长度为0的字符串）,"
            "而被输入错误值的变量会被初始化为0。对所有数字类型变量均适用."
            "另外，对多输入语句中的int输入小数也会导致类似的错误，被输入的变量只会得到小数的整数部分，"
            "其余部分（包括小数点）会被下一次输入请求接受并报错（如果仍然要求输入int的话, 如果是string就不会）\n"
            "接下来将运行cin>> int1 >> int2, 请输入一个字母或非整数：";
    /*
     * Eg. input 4.11   =>  input stream (cin) = [4, ., 1, 1] 该输入流有4个characters
     * => cin >> int1 >> int2   =>  int1 try to get 4   =>  成功, int1 = 4
     * => int1 try to get .     =>  失败，.对于int类型是非法的，但int1已读取到合法输入（4）    =>  停止读取
     * => 下一个int2开始读取       =>  失败，.对于int类型是非法的，int2并未得到任何合法输入  => Error
     * => int2 = 0              =>  停止int2之后本程序内所有的输入请求（关闭输入功能）     => 继续运行除输入外其他指令
     * => 若遇上未初始化变量     （1）string = “”
     *                       （2）数字类型 = 随机值
     */
    cin >> a >> e;
    cout << "int1 = " << a << ", int2 = " << e << endl;

}

void DataSizeUpgrade(){
    cout << "在C++中，int数据大小为32bit（比特）/4byte（字节）, float 和 double为64bit（比特）/8byte（字节）"
            "当出现int + double时， 系统会自动将int转为double类型" << endl;
    cout << "接下来将输出 int （= 10） + double （= 2.8）的值:";
    int a = 10;
    double b = 2.8;
    cout << a + b << ", 其类型为：" << typeid(a + b).name()<< endl;
}

#define C1 10
#define WRONG wrong
#define C2 5 + 6
void Constant(){
    cout << "#define can let you replace some long value with short keyword. The format is #define name value"
            "However, as I think, #define can represent anything, not just value, and compiler will never checks"
            "whether it is legal. #define can only replace some code (not value, variable or any other things "
            "when running, it can only change the code). Below is an example" << endl;
    cout << "define C1 = " << C1 << endl << endl;
    cout << "You can also use the defined identifiers from included .h files" << endl;
    cout << "Constant from Fold1.h is " << CONST << endl << endl;
//    cout << WRONG;   //It will cause compile error.
    cout << "#define sometimes may cause unexpected logistic error. For example, I define C2 = 5 + 6 and output"
            "2 * C2 * 3 whose expected output is 2 * 11 * 5 = 55. However, the final result is:";
    cout << 2 * C2 * 3 << " which is the result of 2 * 5 + 6 * 3 = 28\n" << endl;
    cout << "In conclusion, #define will be very useful when you want to use a long chain formula many times "
            "(though building a function for that formula is also a good way)\n" << endl;
    cout << "The second way to get constant value \"const\" is more useful. It can be added before the type of "
            "variable when you declared it. However, you also need to initialize that variable as soon as you "
            "declare. Once you declared it, none can modify it any more." << endl;
    const int c = 9;
    cout << "const int c = 9; => c = "<< c << endl;
//    c++;    //This will cause a compile error
}
