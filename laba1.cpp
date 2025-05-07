#include <iostream>
#include <cmath>
using namespace std;
int PERIMETR (int length, int width)
{
    return 2*(length+width);
}

int SQUARE (int length, int width)
{
    return length*width;
}

float DIAGONAL (int length, int width)
{
    return sqrt(length*length+width*width);
}

int main()
{
    int length,width;
    cout<<"Введите длину прямоугольника: "<<endl;
    cin>>length;
    if (length<=0) {
        cout<< "Ошибка" << endl;
        return 1;
    }
    cout<<"Введите ширину прямоугольника: "<<endl;
    cin>>width;
    if (width<=0) {
        cout<< "Ошибка" << endl;
        return 1;
    }
    cout<<"Периметр прямоугольника: "<<endl;
    cout<<PERIMETR(length,width)<<endl;
    cout<<"Площадь прямоугольника: "<<endl;
    cout<<SQUARE(length,width)<<endl;
    cout<<"Диагональ прямоугольника "<<endl;
    cout<<DIAGONAL(length,width)<<endl;
    return 0;
}
