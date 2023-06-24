#include"Header7.5.h"
void printUniquedWords(char filename[])
{
   
    fstream fs(filename);

   
    set<string, int> mp;
    string word;
    while (fs >> word)
    {
        
        if (!mp.count(word))
            mp.insert(make_pair(word, 1));
        else
            mp[word]++;
    }

    fs.close();

    for (set<string, int> ::iterator p = mp.begin();
        p != mp.end(); p++)
    {
        if (p->second == 1)
            cout << p->first << endl;
    }
}