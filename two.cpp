
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fin("shell.in");
    ofstream fout("shell.out");
    long long n{};
    vector<int> first{};
    vector<int> second{};
    vector<int> guess{};
    int x{};
    fin >> n;
    while (n--)
    {
        fin >> x;
        first.push_back(x);
        fin >> x;
        second.push_back(x);
        fin >> x;
        guess.push_back(x);
    }
    int maxscore = 0;
    for (int i = 1; i <= 3; i++)
    {
        int score = 0;
        int correct = i;
        for (int j = 0; j < (int)first.size(); j++)
        {
            if (first[j] == correct)
            {
                correct = second[j];
            }
            else if (second[j] == correct)
            {
                correct = first[j];
            }
            if (correct == guess[j])
            {
                score++;
            }
        }
        cerr << score << '\n';
        maxscore = max(maxscore, score);
    }
    fout << maxscore;
}
