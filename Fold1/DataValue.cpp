//
// Created by 13667 on 2021/11/4.
//

#include "DataValue.h"
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
