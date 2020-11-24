// Student ID: 20382528
// Quest: A Joke Loving Jay
// Trophies: 4/4

#include <cmath> // sqrt
#include <cstdlib> // exit
#include <iostream> // cout
#include <sstream> // istringstream

using namespace std;

double eval_limerick(int dozen, int gross, int score)
{
    double result = ((double) dozen + gross + score + 3 * sqrt(4)) / 7.
        + (double) 5 * 11;
    return result;
}

// Uncomment before submitting
//int main(int argc, char** argv)
//{
//    if (argc < 4)
//    {
//        cerr << "Usage: limerick dozen-val gross-val score-val\n";
//        exit(1);
//    }
//
//    int dozen, gross, score;
//    istringstream(argv[1]) >> dozen;
//    istringstream(argv[2]) >> gross;
//    istringstream(argv[3]) >> score;
//
//    cout << eval_limerick(dozen, gross, score) << endl;
//    return 0;
//}
