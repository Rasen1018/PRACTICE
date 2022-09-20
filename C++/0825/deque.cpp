#include <iostream>
#include <deque>
using namespace std;

int main(void) {
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "dp.size(): " << dq.size() << endl;
    cout << "[dp]: ";
    for (auto i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    for (auto i = 0; i < dq.size(); i++)
        cout << "dq[" << i << "i] address: " << &dq[i] << endl;
    cout << endl;

    deque<int> dq2;
    dq2.push_back(100);
    dq2.push_back(200);
    dq2.push_back(300);

    cout << "dp2.size(): " << dq2.size() << endl;
    cout << "[dp2]: ";
    for (auto i = 0; i < dq2.size(); i++)
        cout << dq2[i] << " ";
    cout << endl;

    for (auto i = 0; i < dq2.size(); i++)
        cout << "dq2[" << i << "i] address: " << &dq2[i] << endl;
    cout << endl;

    dq.push_back(40);
    dq.push_back(50);
    dq.push_back(60);

    cout << "dp.size(): " << dq.size() << endl;
    cout << "[dp]: ";
    for (auto i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;

    for (auto i = 0; i < dq.size(); i++)
        cout << "dq[" << i << "i] address: " << &dq[i] << endl;
    cout << endl;

    for (int i = 70; i < 2000; i += 10)
        dq.push_back(i);

    cout << "dq.size(): " << dq.size() << endl;
    cout << "[dq]: ";

    for (auto i = 0; i < dq.size(); i++)
        cout << dq[i] << " ";
    cout << endl;
    for (auto i = 0; i < dq.size(); i++)
        cout << "dq[" << i << "i] address: " << &dq[i] << endl;
    cout << endl;
    cout << "dq[122] (" << &dq[122] << "): " << dq[122] << endl;
    cout << "dq[123] (" << &dq[123] << "): " << dq[123] << endl;
    deque<int>::iterator i = dq.begin() + 122; // iterator로 주소값 증가
    cout << "*i(" << &(*i) << "): " << *i << endl;
    i++;
    cout << "*++i(" << &(*i) << "): " << *i << endl;
    int* j = &dq[122];
    cout << j << ": " << *j << endl;
    j++;
    cout << j << ": " << *j << endl;

    return 0;
}