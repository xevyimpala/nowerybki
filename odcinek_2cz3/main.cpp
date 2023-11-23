#include <iostream>

using namespace std;
int wiek;


int main()
{
    cout << "Ile masz lat:" << endl;
    cin>>wiek;

    if (wiek<18)
        cout<<"Jestes niepelnoletni i nie mozesz zostac prezydentem";
    }
    else if ((wiek>=18) && (wiek<35))
    {
        cout<<"Jestes plenoletni ale nie mozesz zostac prezydentem";
    }
    else
    {
        cout<<"Jestes plenoletni i mozesz zostac prezydentem";
    }

    return 0;
}
