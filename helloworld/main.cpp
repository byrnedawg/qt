#include <iostream>
#include <QCoreApplication>

using namespace std;

namespace roofie {
int a = 12;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    cout << "hello world \n" << "I Love Baby Dexter \n";
    for(int i = 0; i < 10; i++)
    {
        cout << i << '\n';
    }
    cout << roofie :: a << '\n';
    return a.exec();
}
