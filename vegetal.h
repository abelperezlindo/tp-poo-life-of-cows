#ifndef VEGETAL_H
#define VEGETAL_H

class Vegetal
{
protected:
    int cuantoCuro;

public:
    Vegetal();
    virtual ~Vegetal();
    virtual int getCuantoCuro()=0;
};

#endif // VEGETAL_H
