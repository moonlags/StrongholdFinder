#include <iostream>
#include <cmath>
#include <string>

#define PI 3.14158

int main(int, char**){
    float a,b;    
    int space;

    {
        std::string ta,tb,spc;
        std::cout << "First eye of ender angle: ";
        std::cin >> ta;
        a=std::stof(ta);
        std::cout <<"\nSecond eye of ender angle: ";
        std::cin >> tb;
        b=std::stof(tb);
        std::cout <<"\nSpace between eye of ender throws: ";
        std::cin >>spc;
        if(spc==""){
            space=20;
        }else{
            space=std::stod(spc);
        }
    }

    //y=mx+c
    float m1 = tan(a*PI/180);
    float m2=tan(b*PI/180);

    float c1=0;
    float c2=0-m2*space;

    //{m1*x1+c1-y=0
    //{m2*x2+c2-y=0

    //m1*x1+c1=m2*x2+c2

    float x=(c2-c1)/(m1-m2);
    float y=abs(m2*x+c2);

    std::cout <<"\nStronghold is around " <<int(y)<<" blocks forward in overworld or "<<int(y/8)<<" blocks in nether!";
}
