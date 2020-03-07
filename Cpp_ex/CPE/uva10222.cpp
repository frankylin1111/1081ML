/*
    2018/11/21
    uva10222
    1.compile error
    2.µ{¦¡¿ù»~ 
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		for (int i=0;i<s.length();i++)
	    {
		    if (s[i] == ']' || s[i] == '}')
		        cout << "p";
		    else if (s[i] == '[' || s[i] == '{')
		        cout << "o";
		    else if (s[i] == 'p' || s[i] == 'P')
		        cout << "i";
		    else if (s[i] == 'o' || s[i] == 'O')
		        cout << "u";
		    else if (s[i] == 'i' || s[i] == 'I')
		        cout << "y";
		    else if (s[i] == 'u' || s[i] == 'U')
		        cout << "t";
		    else if (s[i] == 'y' || s[i] == 'Y')
		        cout << "r";
		    else if (s[i] == 't' || s[i] == 'T')
		        cout << "e";
		    else if (s[i] == 'r' || s[i] == 'R')
		        cout << "w";
		    else if (s[i] == 'e' || s[i] == 'E')
		        cout << "q";
		    else if (s[i] == '\'' || s[i] == '"')
		        cout << "l";
		    else if (s[i] == ';' || s[i] == ':')
		        cout << "k";
		    else if (s[i] == 'l' || s[i] == 'L')
		        cout << "j";
		    else if (s[i] == 'k' || s[i] == 'K')
		        cout << "h";
		    else if (s[i] == 'j' || s[i] == 'J')
		        cout << "g";
		    else if (s[i] == 'h' || s[i] == 'H')
		        cout << "f";
		    else if (s[i] == 'g' || s[i] == 'G')
		        cout << "d";
		    else if (s[i] == 'F' || s[i] == 'f')
		        cout << "s";
		    else if (s[i] == 'd' || s[i] == 'D')
		        cout << "a";
		    else if (s[i] == '?' || s[i] == '/')
		        cout << "<";
		    else if (s[i] == '>' || s[i] == '.')
		        cout << "m";
		    else if (s[i] == '<' || s[i] == ',')
		        cout << "n";
		    else if (s[i] == 'm' || s[i] == 'M')
		        cout << "b";
		    else if (s[i] == 'n' || s[i] == 'N')
		        cout << "v";
		    else if (s[i] == 'b' || s[i] == 'B')
		        cout << "c";
		    else if (s[i] == 'v' || s[i] == 'V')
		        cout << "x";
		    else if (s[i] == 'C' || s[i] == 'c')
		        cout << "z";
		    else if (s[i] == ' ')
		        cout << " ";
	    }
	    cout << '\n';
	}
}
