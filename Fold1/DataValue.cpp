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
    cout << "���ֲ�int��double����δ��ʼ��ʱ����Compile Error" << endl;
    cout << "���ֲ�boolean����δ��ʼ��ʱ����Runtime Error�����ֱ�����\n" << endl;
//    cout << "boolean = " << t << endl; Run Time Error
    return 0;
}

void BooleanAndInteger(){
    cout << "boolean ����������ֵ��True��False����ֱ�ӵ���int��1��0\n";
    bool t = true;
    bool f = false;
    cout << "true + 1 = " << t + 1 << endl;
    cout << "false - 1 = " << f - 1<< endl;
}

void IntegerForCondition(){
    cout << "int����ֵ0��1�ɴ���false\\true���������ж�" << endl;
    if(1){cout << "�������if(1)�ж��ɹ�" << endl;}
    if(0){}
    else{cout << "�������if(0)�ж�ʧ��\n" << endl;}
}

void Input(){
    int a, b, c, d, e;
    string str, str1;
    cout << "��ʽΪcin >>" << endl;
    cout << "������������һ����������ֵ�ķ�����\n�������������֣��ûس�Enter����" << endl;
    cin >> a >> b >> c;
    cout << "������֮��Ϊ" << a + b + c << endl;
    cout << "�������������֣��ÿո����" << endl;
    cin >> a >> b >> c;
    cout << "������֮��Ϊ" << a + b + c << endl;
    cout << "�������������֣���Tab����" << endl;
    cin >> a >> b >> c;
    cout << "������֮��Ϊ" << a + b + c << endl;
    cout << "�����ַ�������ͬʱʹ�á�\n�������ĸ����֣��ֱ����������ַ�ʽ����" << endl;
    cin >> a >> b >> c >> d;
    cout << "�ĸ���֮��Ϊ" << a + b + c + d << endl;
    cout << "������һ����ո��Ӣ��" << endl;
    cin >> str;
    cout << "���Ϊ��"  << str << endl;
    cout << "ֻ����cin���޷�������пո���ַ��������ǿո����Ĳ��ֲ�������ʧ�ˣ�����������ٴ���cin >> str1, str1�����Ϊ��";
    cin >> str1;
    cin.get();
    cout << str1 << endl << "������пո񣬿���ʹ��getline(����Դ��string)����ȡһ�������룬 ��������ʱ����ԴΪcin��"
                            "ʹ�ô˺�����Ҫ���ͷ�ļ� #include <string>\n��������һ����ո��Ӣ�ģ�";
    getline(cin, str1);
    cout << "str1�����Ϊ��" <<str1 << endl;
    cout << "�����ע�⣬�����ͬһ��������ʹ��cin>>��ʹ��getline���������ڶ���֮�����һ��"
            "cin.get();��ȥ��ĩβ�Ļ��з����س���" << endl;
    cout << "���Ƕ�int���������ַ�����cin�л���ӱ��������ȴ���ȫ�����벢Ϊ���еȴ������(δ��ʼ��)��������һ�����ֵ"
            "��string�ᱻ��ʼ��ΪΪ����Ϊ0���ַ�����,"
            "�����������ֵ�ı����ᱻ��ʼ��Ϊ0���������������ͱ���������."
            "���⣬�Զ���������е�int����С��Ҳ�ᵼ�����ƵĴ��󣬱�����ı���ֻ��õ�С�����������֣�"
            "���ಿ�֣�����С���㣩�ᱻ��һ������������ܲ����������ȻҪ������int�Ļ�, �����string�Ͳ��ᣩ\n"
            "������������cin>> int1 >> int2, ������һ����ĸ���������";
    /*
     * Eg. input 4.11   =>  input stream (cin) = [4, ., 1, 1] ����������4��characters
     * => cin >> int1 >> int2   =>  int1 try to get 4   =>  �ɹ�, int1 = 4
     * => int1 try to get .     =>  ʧ�ܣ�.����int�����ǷǷ��ģ���int1�Ѷ�ȡ���Ϸ����루4��    =>  ֹͣ��ȡ
     * => ��һ��int2��ʼ��ȡ       =>  ʧ�ܣ�.����int�����ǷǷ��ģ�int2��δ�õ��κκϷ�����  => Error
     * => int2 = 0              =>  ֹͣint2֮�󱾳��������е��������󣨹ر����빦�ܣ�     => �������г�����������ָ��
     * => ������δ��ʼ������     ��1��string = ����
     *                       ��2���������� = ���ֵ
     */
    cin >> a >> e;
    cout << "int1 = " << a << ", int2 = " << e << endl;

}

void DataSizeUpgrade(){
    cout << "��C++�У�int���ݴ�СΪ32bit�����أ�/4byte���ֽڣ�, float �� doubleΪ64bit�����أ�/8byte���ֽڣ�"
            "������int + doubleʱ�� ϵͳ���Զ���intתΪdouble����" << endl;
    cout << "����������� int ��= 10�� + double ��= 2.8����ֵ:";
    int a = 10;
    double b = 2.8;
    cout << a + b << ", ������Ϊ��" << typeid(a + b).name()<< endl;
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

void PointerAndReference(){
    /**
     * Pointer stores the address of variable it point to
     */
    int a = 5;
    int* b = &a;   // It means pointer b point to a's location
    /**
     * Difference between b and *b
     */
    cout << "b is the address of a = " << b << endl;
    cout << "*b is the value stored at location b (which is a) = " << *b << endl;
    /**
     * You can think *b is a reference type variable in Java such as ArrayList or your own classes.
     * The difference is, in Java, we can use ArrayList's (*b's) methods to control its content or structure
     * but in C++, address b can also do many things
     */
    // Similar to reference type variable in Java, changing (*b)'s (not b's) value can also change the value of a
    (*b)++;
    cout << "by using (*b)+=1, now a = "<< a << endl;
    //  constant variable can also be pointed by constant pointer
    //  (int -> int*) and (const int -> const int*)
    const int c = 6;
    const int* d = &c;
    // Declaration of pointers can be independent of its initialization
    // but initialization is still necessary or there will be a run time error,
    // a null value = nullptr is acceptable by a pointer
    int* e = nullptr;
    cout << "whether e is null: " << boolalpha <<(e == nullptr) << endl;
    int& t = a; // This means t refer a
    // t is similar to *b, which point to the location where a's value is stored.
    // &t is similar to b. They are all the address of a
    // However, you must initialize t as soon as you declare it and initialization cannot be null or constant value
    cout << "&t = " << &t << endl;
    cout << "t = " << t << endl;
    /**
     * This a good view to b, *b, t, &t I think
     * b's type is int*. In other words, b is the base,
     *      *b is similar to a method of b which return's the value stored in b
     * t's type is int&. In other words, t is the base,
     *      &b is similar to a method of t which return's the address where t point to
     * Hence, b can be null because an address value can be nullptr, but t cannot be null because int cannot be null
     */
}
