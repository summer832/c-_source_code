#include"header.cpp"
class Screen;
class Window_mgr{
	public:
	void clear(int d);
};

class Screen{
	public:
		using pos=string::size_type;
		Screen()=default;//default表示该构造函数为默认构造函数
		Screen(pos h,pos w):height(h),width(w){};
		Screen(pos h,pos w,string c):height(h),width(w),contents(c){}; 
		Screen set(char c);
		Screen set(pos h,pos w,pos c); 
		Screen move(pos h,pos w);
		Screen &display(ostream &os){
			do_display(os) ;
			return *this;				
		}
		const Screen &display(ostream &os) const{
			do_display(os);
			return *this;
		};
		friend void Window_mgr::clear(int d);
		friend class Window_mgr;
		
	private:
		pos cursor=0;//cursor表示光标的位置，height表示高，width表示宽 
		pos height=0;
		pos width=0;
		string contents;
		void do_display(ostream &os) const
		{
			os<<contents;
		}
		
	
};
//class Windou_mgr{
//	void clear(pos d);
//};
Screen Screen::set(char c)
{
	contents[cursor]=c;
	return *this;
}
Screen Screen::set(pos r,pos col,pos ch)
{
	contents[r*width+col]=ch;
	return *this;
 } 
 Screen Screen::move(pos h,pos w)
 {
 	pos row=h*width;
	cursor=row+w;
	return *this; 
 }
 void Window_mgr::clear(int d)
 {
 		Screen::contents[d]=0;
 }
int main()
{
	
}

