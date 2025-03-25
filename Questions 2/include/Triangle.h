#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
    public:
        float half;
        float base;
        float height;
        void setHalf(float);
        void setBase(float);
        void setHeight(float);
        float getArea(float,float,float);
        Triangle();


    protected:

    private:
};

#endif // TRIANGLE_H
