// �����ҧ@�~.cpp 
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "function().cpp"

using namespace std;

// -------------�D�{��Main()-------------- 
int main()
{
	// ----------�ŧipub[7]���C�Ӧa��----------- 
	int b=0;
	int a,c,d;
	string blank,pub[7]={"���L","����","�x��","�]��","�s��","���","�x�_"};
	fstream fs;
	fs.open("����.txt",ios::in|ios::out);
	while(b==0)     //�O�_�~���ʶR 
	{
		
	    cout <<"�w��f����H�֨����ȡA�H�U��������������T"<< '\n';
	    for (int i=0;i<7;i++)
	        cout << i+1 <<"."<< pub[i] << '\n';
	    cout <<"�п�ܰ_��(�N��):";
	    cin >> a;
	    cout <<"�п�ܲׯ�(�N��):";
	    cin >> c;
	    cout <<"�п�ܬO�_�~���ʶR(��J0)�A�Y���~���ʶR(�п�J1):";
	    cin >> b;
	    cout <<'\n';
	    if (a>0 && c>0)
	    {
		    d=Pr(a,c);
		    if (d==0)  fs << "�S���o�ظ��u!!"<<'$' << '\n';
		    else fs << "�q" << pub[a-1] << "�f��" << pub[c-1] << "   "  // �g�J�ɮ׸� 
		             << "������" << d << "��" <<'$' << '\n';  
	    }
	
	    else  
		{
			b=0;
		    cout << "�Э��s�q�ʤ@�i�s������" << '\n';     // ���s�q�� 
	    }
    }
    
//------�ɮ׼g�X�����-------- 
    fs.seekg(0);
    char buffer[400];
    while (fs.getline(buffer,sizeof(buffer),'$'))
        cout << buffer << endl;
	
    return 0; 
}
