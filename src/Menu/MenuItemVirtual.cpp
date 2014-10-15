#include "Menu/MenuItemVirtual.h"


MenuItemVirtual::MenuItemVirtual(string n, string d, string i )
{
    name = n; description = d; info = i;
}

MenuItemVirtual::MenuItemVirtual(string n, string d, string i, string color )
: MenuItemVirtual(n,d,i)
{
    this->color = color;
}


MenuItemVirtual::~MenuItemVirtual()
{
    //dtor
}


string MenuItemVirtual::showD(int pos) // show with description
{
    return StringUtils::addWhiteSpaceUntillLengthIs(5, (to_string(pos+1) + ")") )
        + color + StringUtils::addWhiteSpaceUntillLengthIs(20, name)  + StringUtils::clrWhite + description;
}

string MenuItemVirtual::showI(int pos) // show with info
{
    return StringUtils::addWhiteSpaceUntillLengthIs(5, ( to_string(pos+1) + ")" ) )
        + color + StringUtils::addWhiteSpaceUntillLengthIs(20, name)  + StringUtils::clrWhite + info;
}
string MenuItemVirtual::showI() // show with info
{
    return name + "\t" + info;
}
