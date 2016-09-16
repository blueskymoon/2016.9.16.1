/*************************************************************************
    > File Name: 2.cpp
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年09月16日 星期五 20时54分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

class Teacher
{
	public:
		void setName(string _name);
		string getName();
		void setGedent(string _gedent);
		string getGedent();
		void setAge(int _age);
		int getAge();
	private:
		string m_strName;
		string m_strGedent;
		int m_iAge;
};

void Teacher::setName(string _name)
{
	m_strName = _name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setGedent(string _gedent)
{
	m_strGedent = _gedent;
}

string Teacher::getGedent()
{
	return m_strGedent;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}

int Teacher::getAge()
{
	return m_iAge;
}

int main(void)
{
	Teacher *p=new Teacher;
	p->setName("小明");
	p->setGedent("男");
	p->setAge(30);
	cout<<p->getName()<<"  "<<p->getGedent()<<"  "<<p->getAge()<<endl;
	delete p;
	p=NULL;
	return 0;
}
