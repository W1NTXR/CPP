#include<bits/stdc++.h>

using namespace std;

class Box {
    private:
        int l,b,h ;
    public:
    Box () {
        l = 0;
        b = 0 ;
        h = 0 ;
    }
    Box (int x,int y,int z) {
        l = x ;
        b = y ;
        h = z ;
    }
    Box (Box &b1) {
        l = b1.l ;
        b = b1.b ;
        h = b1.h ;
    }
    
    int getLength() {
        return l ;
    }
    
    int getBreadth() {
        return b ;
    }
    
    int getheight() {
        return h ;
    }
    
    long int CalculateVolume() {
        return l*b*h ;
    }
    
    bool operator < (Box &b1) {
        if (l == b1.l) {
            if (b == b1.b) {
                return h < b1.h ;
            }
            return b < b1.b ;
        }
        
        return l < b1.l ;
    }
    
};

ostream &operator << (ostream &os, Box &b1) {
    cout << b1.getLength() << ' ' << b1.getBreadth() << ' ' << b1.getheight() ;
    
    return os ;
}


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