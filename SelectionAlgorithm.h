#ifndef _SELECTIONALGORITHM_
#define _SELECTIONALGORITHM_
class SelectionAlgorithm{
public:
    SelectionAlgorithm(int k);
   virtual int select();

protected:
    int k;
};
#endif