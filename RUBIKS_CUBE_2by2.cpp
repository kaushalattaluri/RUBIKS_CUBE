#include<iostream>
#include<string>
using namespace std;
class PUZZLE
{
    string b = "RD' RU' R'U' RU R'F' RU R'U' R'FR DR'      ";
    string c = "F RU' R'U' RU R'F' RU R'U' R'FR F'         ";
    string d = "FU' R'U' RU R'F' RU R'U' R'FR2F'           ";
    string e = "F'D RU' R'U' RU R'F' RU R'U' R'FR D'F      ";
    string f = "F2D RU' R'U' RU R'F' RU R'U' R'FR D'F2     ";
    string g = "RF RU' R'U' RU R'F' RU R'U' R'FR F'R'      ";
    string h = "D RU' R'U' RU R'F' RU R'U' R'FR D'         ";
    string i = "U' R'U' RU R'F' RU R'U' R'FR R             ";
    string j = "R'U' R'U' RU R'F' RU R'U' R'FR R2          ";
    string k = "R2U' R'U' RU R'F' RU R'U' R'F              ";
    string l = "RU' R'U' RU R'F' RU R'U' R'FR              ";
    string n = "D2 RF RU' R'U' RU R'F' RU R'U' R'FR F'R' D2";
    string o = "D'RU' R'U' RU R'F' RU R'U' R'FR D          ";
    string p = "R'F RU' R'U' RU R'F' RU R'U' R'FR F'R      ";
    string r = "F2 RU' R'U' RU R'F' RU R'U' R'FR F2        ";
    string s = "DR F RU' R'U' RU R'F' RU R'U' R'FR F' R'D' ";
    string t = "D2 RU' R'U' RU R'F' RU R'U' R'FR D2        ";
    string u = "F RU' R'U' RU R'F' RU R'U' R'FR F'         ";
    string v = "D'F RU' R'U' RU R'F' RU R'U' R'FR F'D      ";
    string w = "D2F RU' R'U' RU R'F' RU R'U' R'FR F'D2     ";
    string x = "DF RU' R'U' RU R'F' RU R'U' R'FR F'D'      ";
    public:
    string getSol(char letter)
    {
        switch(letter)
        {
            case 'b': return b;
            case 'c': return c;
            case 'd': return d;
            case 'e': return e;
            case 'f': return f;
            case 'g': return g;
            case 'h': return h;
            case 'i': return i;
            case 'j': return j;
            case 'k': return k;
            case 'l': return l;
            case 'n': return n;
            case 'o': return o;
            case 'p': return p;
            case 'r': return r;
            case 's': return s;
            case 't': return t;
            case 'u': return u;
            case 'v': return v;
            case 'w': return w;
            case 'x': return x;
            default: return "Please Enter Correct sequence";
        }
    }
};
int main()
{
    int i = 0;
    char seq[50];
    string solution;
    PUZZLE sol;
    cout<<"*************************************************"<<endl;
    cout<<"|            Cube PUZZLE 2*2                   |"<<endl;
    cout<<"|            Developed by KAUSHAL ATTALURI            |"<<endl;
    cout<<"*************************************************"<<endl<<endl;
    cout<<"Enter the Sequence in small letters: ";
    cin.clear();
    cin>>seq;
    while(seq[i]!='\0')
    {
        i++;
    }
    cout<<endl;
    cout<<"*********************************************************"<<endl;
    cout<<"|             TRY THIS SOLUTION                        |"<<endl<<endl;
    for(int j=0;j<i;j++)
    {
        solution = sol.getSol(seq[j]);
        cout<<"| "<<solution<<" |"<<endl;
    }
    cout<<"**********************************************************"<<endl;
    cout<<"SOLVE THE SOLUTION CAREFULLY !!"<<endl;
    cout<<"Thank You!!"<<endl;
    cout<<""<<endl;

    cin.get();
        cin.get();
    return 0;

}