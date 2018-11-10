#include <iostream>

using namespace std;

int main()
{
    int max, a;
    max = 0;

    do {
        cout<<"Masukkan bilangan : ";
        cin>>a;
        if (max<a)
            max = a;
    } while (a != 0);
    cout<<"=========================================="<<endl;
    cout<<"Bilangan Terbesarnya Adalah : "<<max<<endl;
    return 0;
}
