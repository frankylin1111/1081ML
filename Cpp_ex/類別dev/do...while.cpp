#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class pwd
{
    public:
        static int correct;
        int password;
        pwd()
        {
            cout << "hello world!!";
        }

        void enter(int time)
        {
            do{
                cout << "�п�J�K�X:";
                cin >> password;
                if (password != correct)
                {
                     cout << "\n��J���~\n";
                }
              }while(--time>0 && password != correct);
        }
        ~pwd()
        {
            cout << "-------------------------------------------------";
        }
};

int pwd::correct =12356;
int main()
{
    int a=3;
    pwd me;
    me.enter(a);
    return 0;
}
