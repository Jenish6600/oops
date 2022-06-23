#include <iostream>
using namespace std;

class jenish
{
protected:
    string title;
    float rating;

public:
    jenish(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0;
};

class jenishvideo : public jenish
{
    int videolength;

public:
    jenishvideo(string s, float r, int vl) : jenish(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "   this is an amazing video with title " << title << endl;
        cout << "   rating : " << rating << " out of 5 stars" << endl;
        cout << "   length of this video is : " << videolength << " minutes" << endl;
    }
};

class jenishtext : public jenish
{
    int words;

public:
    jenishtext(string s, float r, int wc) : jenish(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "   this is an amazing text tutorial with title " << title << endl;
        cout << "   ratings of text tutorial : " << rating << " out of 5 stars" << endl;
        cout << "   number of words in this tutorial is : " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    words = 400;
    jenishvideo djvideo(title, rating, vlen);
    // djvideo.display();
    rating = 4.05;
    jenishtext djtext(title, rating, words);
    // djtext.display();

    jenish *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

// abstract base classs and pure virtual function examples