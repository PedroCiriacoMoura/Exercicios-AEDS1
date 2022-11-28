#include <iostream>
class intCell
{
protected:
    int value;
    intCell *link;

public:
    intCell()
    {
        value = 0;
        link = nullptr;
    }

    intCell(int initial)
    {
        value = initial;
        link = nullptr;
    }

    void setValue (int x)
    {
        value = x;
    }

    int getValue (void)
    {
        return (value);
    }

    void setLink (intCell *link)
    {
        this->link = link;
    }

    intCell* getLink ()
    {
        return (this->link);
    }
    int getLength ()
    {
        int length = 0;
        intCell *cursor = this;
        while (cursor != nullptr)
        {
            length = length+1;
            cursor = cursor->link;
        }
        return (length);
    }
    void print ()
    {
        intCell*cursor = this;
        while (cursor != nullptr)
        {
            std::cout << cursor->value << " "; 
            cursor = cursor->link;
        }
        std::cout << " " << std::endl;
    }
    void connect (intCell *second)
    {
        this->setLink (second);
    }
    void disconnect (intCell *second)
    {
        if (this->link == second)
        {
            this-> setLink (nullptr);
        }
    }
    void append (int value)
    {
        intCell* cursor = this;
        while (cursor->link != nullptr)
        {
            cursor = cursor->link;
        }
        intCell *second = new intCell (value);
        cursor->connect (second);
    }
    void prepend (int value)
    {
        intCell *second = new intCell (this->value);
        if (second != nullptr)
        {
            second -> link = this->link;
        }
        this -> setValue (value);
        this->connect (second);
    }
};
typedef intCell*
ref_int_Cell;
