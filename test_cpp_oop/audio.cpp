
#include"audio.h"
Audio :: Audio (  string t, float p, float *s, int num, int c, char ty ): Publication (t,p,s, num)
{
    playingTime=c;
    AudioType=ty;
}

void  Audio :: inputData()
{
    Publication :: inputData();
    cout << "Enter playingTime: ";
    cin >> playingTime;
    cout << "Enter AudioType: ";
    cin >> AudioType;

}

void Audio :: print()
{
    Publication ::print();

    cout << "\nPlayingTime:" << playingTime
         << "\nAudioType:" << AudioType;
    return;


}
