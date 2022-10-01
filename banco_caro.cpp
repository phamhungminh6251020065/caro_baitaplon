#include<iostream>
using namespace std;
// CODE CUA HUNG MINH
class caro{
	private:
		char banco[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
		char nguoichoi='X';
	public:
		void vebanco();
		void nhapXO ();
		void lanluot();
		char nguoichienthang();
};
//VE BAN CO
void caro::vebanco(){
	cout<<"\n NGUOICHOI - 1 [X]	 NGUOICHOI - 2 [O]";
    cout<<"\n     |     |     ";
    cout<<"\n  "<<banco[0][0]<<"  |  "<<banco[0][1]<<"  |  "<<banco[0][2]<<" ";
    cout<<"\n_____|_____|_____";
    cout<<"\n     |     |     ";
    cout<<"\n  "<<banco[1][0]<<"  |  "<<banco[1][1]<<"  |  "<<banco[1][2]<<" ";
    cout<<"\n_____|_____|_____";
    cout<<"\n     |     |     ";
    cout<<"\n  "<<banco[2][0]<<"  |  "<<banco[2][1]<<"  |  "<<banco[2][2]<<" ";
    cout<<"\n     |     |     ";
}
int main(){
	cout<<" GAME CO CA-RO 9 O ";
    caro l;
    l.vebanco();
}
