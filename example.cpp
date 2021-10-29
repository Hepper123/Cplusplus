#include <iostream>
using namespace std;

class Time{
    private:
    int hour;
    int minute;
    public:
    Time(int h, int m){
        hour = h;
        minute = m;
    }
    Time operator+ ( Time &a){
        Time sum(a.hour+hour,a.minute+minute);
        sum.hour += sum.minute/60;
        sum.minute %= 60;
        return sum;
    }
    void show(){
        cout<<hour<<":"<<minute;
    }
};

int main(){
    Time a(1,30);
    Time b(2,50);
    Time c = a + b;
    c.show();
    system("pause");
}