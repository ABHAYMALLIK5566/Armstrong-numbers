// 153 ERROR
#include<iostream>
#include<cmath>

using namespace std;

string u_inp, str, str2;
int num, ans = 0;

void user_input()
{
    cout<<"Enter Your number: ";
    cin>>u_inp;
}

void func(string &u_inp, int N)
{
    for(int i = 0; i < N; i++)
    {
        str = u_inp[i];
        num = stoi(str);
        ans += pow(num,N);
    }
}

int main()
{
    user_input();
    int N = u_inp.length();
    func(u_inp, N);
    str2 = to_string(ans);

    if(u_inp == str2)
    {
        cout<<u_inp<<" is an armstrong number."<<endl;
    }
    else{
        cout<<u_inp<<" is not an armstrong number."<<endl;
    }

    return 0;
}