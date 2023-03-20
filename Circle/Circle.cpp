#include "Circle.h"
using namespace std;

Circle::Circle(){}
Circle::Circle(double r){
    this -> radius = r;
}
void Circle::setRadius(double radius){
    this -> radius = radius;
}
double Circle::getRadius(){
    return this -> radius;
}
double Circle::getArea(){
    return this -> PI * this -> radius * this -> radius;
}
double Circle::getDiameter(){
    return this -> radius * 2;
}
double Circle::getCircumference(){
    return 2 * this -> PI * this -> radius;
}
void Circle::display(){
    cout <<"Hinh trong ban kinh: " << this -> radius <<":" << endl;
    cout << "Dien tich: " << getArea() <<endl;
    cout <<"Duong kinh: " << getDiameter() <<endl;
    cout << "Chu vi" << getCircumference();
}