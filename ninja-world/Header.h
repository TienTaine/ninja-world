#ifndef Header
#define Header
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
/*
git add .
git commit -m "message"
git push
/---------------------------------------------------------------------------------------------/
- Tạo github repo (public) up code bài tập lên
Viết 1 class Naruto:
Atributes:
- Ten
- Tuoi
- Thuoc lang
- Nhan thuật da học: array (dung con tro: string/char)
Behavior:
- Ham tao/huy
- getter/setter
- toString
- introduction (in ten ra)
- hoc(nhan thuật) learn(resengan)
- show skill (in ra tất cả các nhẫn thuật)

Class nằm trong file .h gọi trong hàm main.cpp
Vẽ UML
/---------------------------------------------------------------------------------------------/
Tạo 2 class Naruto, Genin -> naruto có thêm thuộc tính ( cấp bậc, nv .. )
operator overloading cout/cin cho class ninja
copy naruto = genin
*/
using namespace std; 
class ninja
{
private:
	string _ten;
	int _tuoi;
	string _lang;
	int* _nhanThuat;
	int _soluongNhanthuat;
public:
	ninja(string ten, string lang, int tuoi,int soluongNhanthuat) {

		this->_ten = ten;
		this->_lang = lang;
		this->_tuoi = tuoi;
		this->_soluongNhanthuat = soluongNhanthuat;
		this->_nhanThuat = new int[_soluongNhanthuat];
	}
	/*ninja() {

		_ten = "";
		_lang = "";
		_tuoi = 0;
		_soluongNhanthuat = 10;
		_nhanThuat = new int[_soluongNhanthuat];
	}*/
	~ninja()
	{
		delete[] _nhanThuat;
	}
	string getName()
	{
		return _ten;
	}
	void setName(string temp)
	{
		_ten = temp;
	}
	void intro()
	{
		cout << _ten << " " << _tuoi << " " << _lang << endl;
	}
	string learn(string skill)
	{
		return "";
	}
	string toString()
	{
		stringstream out;
		out << "Ten" << this->_ten << endl;
		out << "Tuoi" << this->_tuoi << endl;
	}
	int learnSkill(int _soluongNhanthuat)
	{
		
	}
};
#endif // !ninjaworld
