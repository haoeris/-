#include<iostream>
#include<string>
using namespace std;

static char* you = "米娅莫拉苏娜丹尼谢莉红";
typedef char* myself;
class I
{
public:
	void loveyou(myself I)
	{
		cout<<I<<" love "<<you<<endl;
		loveyou(I);
	}
};

int main()
{
	I I;
	myself i = "达拉崩吧班德贝蒂卜多比鲁翁";
	I.loveyou(i);

}