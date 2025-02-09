#include<iostream>
#include<string>
using namespace std;
class User
{
	public:
	string name;
	int age;
};
int main()
{
	User user;
	user.age=24;
	user.name="Teo";
	cout<<"My name is "<<user.name<<" and I'm "<<user.age<<" years old."<<endl;
	return 0;
}