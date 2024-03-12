#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;

    char letter;
    int q, start, end;
    int countarr[27][200001];

    cin >> word;
    cin >> q;

    countarr[word[0] - 'a'][0] = 1;
    for(int i = 1; i < word.size(); i++){
        for (int j = 0; j < 27; j++)
        {
            countarr[j][i] = countarr[j][i - 1];
        }
        countarr[word[i] - 'a'][i]++;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> letter >> start >> end;
        int temp = letter - 'a';
        if (start == 0)
            cout << countarr[letter - 'a'][end] << '\n';
        else
            cout << countarr[letter - 'a'][end] - countarr[letter - 'a'][start - 1] << '\n';
    }
    return 0;
}