#ifndef AUDIO_H_INCLUDED
#define AUDIO_H_INCLUDED


#include"test.h"

class Audio : public Publication
{
private:
    int playingTime;
    char AudioType;

public:
    Audio( string="none", float=0 , float* = 0 , int =0, int =0, char=' ');
    void inputData();
    void print();
    ~Audio(){}


};

#endif // AUDIO_H_INCLUDED
