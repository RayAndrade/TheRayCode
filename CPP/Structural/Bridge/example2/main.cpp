
#include "redColor.h"
#include "greenColor.h"
#include "squar.h"
#include "Rectangle.h"


int main() {
    Shape *shapeobj1;
    fillColorImp *ObjRed = new  redColor;
    fillColorImp *ObjGreen = new  greenColor;
    //UseCase1
    cout<<"\nUsecase1"<<endl;
    cout<<"------------------------------------"<<endl;
    shapeobj1 = new squar(ObjRed);

    shapeobj1->colorIt();
    shapeobj1->drawIt();
    shapeobj1 = new squar(ObjGreen);

    shapeobj1->colorIt();
    shapeobj1->drawIt();
    //UseCase1
    cout<<"\nUsecase2 "<<endl;
    cout<<"------------------------------------"<<endl;

    shapeobj1 = new Rectangle(ObjRed);

    shapeobj1->colorIt();
    shapeobj1->drawIt();
    shapeobj1 = new Rectangle(ObjGreen);

    shapeobj1->colorIt();
    shapeobj1->drawIt();
    return 0;
}
