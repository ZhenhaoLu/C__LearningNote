//
// Created by 13667 on 2021/11/4.
//

#include "DataValue.h"
#include <iostream>
#include <string>
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
    cout << "请输入三个数字，用回车Enter隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "请输入三个数字，用空格隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "请输入三个数字，用Tab隔开" << endl;
    cin >> a >> b >> c;
    cout << "三个数之和为" << a + b + c << endl;
    cout << "请输入四个数字，分别用上面三种方式隔开" << endl;
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
    cout << "若是对int变量输入字符串，cin行会忽视本程序后面等待的全部输入并为所有等待输入的(未初始化)变量赋予一个随机值,"
            "而被输入错误值的变量会被初始化为0。对所有数字类型变量均适用\n接下来将运行cin>> int1 >> int2, 请输入一个字母：";
    cin >> a >> e;
    cout << "int1 = " << a << ", int2 = " << e << endl;

}
