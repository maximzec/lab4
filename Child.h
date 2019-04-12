#ifndef CHILD_H
#define CHILD_H
class Child {
private:
	std::string name;
	std::string last_name;
	int age;
public:
	Child();
	Child(std::string name, std::string last_name, int age);
	Child(const Child& object);
	~Child();
	int getAge();
	std::string getName();
	std::string getLastName();
	void setName(std::string name);
	void setLastName(std::string last_name);
	void setAge(int age);
};
#endif // !CHILD_H
