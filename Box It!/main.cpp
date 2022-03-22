// #include<bits/stdc++.h>
#include <iostream>

using namespace std;

class Box {
public:
    int l, b, h;

    Box() { l=b=h=0; }
    Box(int t_l, int t_b, int t_h) : l(t_l), b(t_b), h(t_h) {}
    Box(const Box & t_box) {
        this->l = t_box.l;
        this->b = t_box.b;
        this->h = t_box.h;
    }

    int getLength() { return l; }
    int getBreadth()  { return b; }
    int getHeight()  { return h; }
    long long CalculateVolume() { 
        long long temp = (long long)this->l * (long long)this->b * (long long)this->h;
        return temp;
    } 

    bool operator<(const Box & b) {
        if (this->l < b.l) return true;
        if ((this->b < b.b) && (this->l == b.l)) return true;
        if ((this->h < b.h) && (this->l == b.l) && (this->b == b.b)) return true;
        return false;
    }

    friend ostream & operator <<(ostream & out, const Box & B) {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}