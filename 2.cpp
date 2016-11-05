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


class Teacher{
public:
	Teacher();
	Teacher(string name="Lucy",int age = 20);
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
Teacher::Teacher()
{
	m_strName = "jim";
	m_iAge = 5;
	cout<<"Teacher()"<<endl;
}

Teacher::Teacher(string name,int age)
{
	m_strName = name;
	m_iAge =age;
	cout<<"Teacehr(string name,int age)"<<endl;
}
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
//	Teacher t1;
	Teacher t2("Merry",15);
	Teacher t3("Lucy");
  //  cout<<t1.getName()<< " "<<t1.getAge()<<endl;
	cout<<t2.getName()<<" "<<t2.getAge()<<endl;
	cout<<t3.getName()<<"  "<<t3.getAge()<<endl;
	return 0;
}
