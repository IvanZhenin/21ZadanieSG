#include <iostream>
#include <cmath>

class Shape 
{
    // �������� ����� ��� �������� �����
public:
    virtual void move(double dx, double dy) = 0;
    virtual void rotate(double angle) = 0;
};

class Circle : public Shape 
{
    // ����� ��� �������� � ������, ������������ � ��������
private:
    double radius;
    double x;
    double y;
public:
    Circle(double r, double x, double y) : radius(r), x(x), y(y) {}

    void move(double dx, double dy) override 
    {
        x += dx;
        y += dy;
    }

    void rotate(double angle) override 
    {
        std::cout << "���� ��������� �� ���� " << angle << " ��������" << std::endl;
    }
};

class Square : public Shape 
{
    // ����� ��� �������� � ���������, ������������ � ��������
private:
    double side;
    double x;
    double y;
public:
    Square(double s, double x, double y) : side(s), x(x), y(y) {}

    void move(double dx, double dy) override 
    {
        x += dx;
        y += dy;
    }

    void rotate(double angle) override
    {
        std::cout << "������� ��������� �� ���� " << angle << " ��������" << std::endl;
    }
};

class Rectangle : public Shape 
{
    // ����� ��� �������� � �������������, ������������ � ��������
private:
    double width;
    double height;
    double x;
    double y;
public:
    Rectangle(double w, double h, double x, double y) : width(w), height(h), x(x), y(y) {}

    void move(double dx, double dy) override 
    {
        x += dx;
        y += dy;
    }

    void rotate(double angle) override 
    {
        // ��� ��� �������� ��������������
        std::cout << "������������� ��������� �� ���� " << angle << " ��������" << std::endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "");
    Circle circle(5.0, 0.0, 0.0);
    Square square(4.0, 1.0, 1.0);
    Rectangle rectangle(3.0, 6.0, 2.0, 2.0);

    // �������� ������� � ����������� �� ���������, ��� �������� ������������ ������ Shape
    Shape* shapes[] = { &circle, &square, &rectangle };

    for (auto shape : shapes) 
    {
        shape->move(1.0, 2.0);
        shape->rotate(45.0);
    }
}