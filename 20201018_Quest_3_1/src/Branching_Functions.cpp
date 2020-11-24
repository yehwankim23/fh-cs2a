// Student ID: 20382528
// Quest: One Indecisive Starling
// Trophies: 14/14

double mean_of_3(int n1, int n2, int n3)
{
    double result = ((double) n1 + n2 + n3) / 3;
    return result;
}

int max_of_5(int n1, int n2, int n3, int n4, int n5)
{
    int result = n1;

    if (n2 > result)
    {
        result = n2;
    }

    if (n3 > result)
    {
        result = n3;
    }

    if (n4 > result)
    {
        result = n4;
    }

    if (n5 > result)
    {
        result = n5;
    }

    return result;
}

int min_of_5(int n1, int n2, int n3, int n4, int n5)
{
    int result = n1;

    if (n2 < result)
    {
        result = n2;
    }

    if (n3 < result)
    {
        result = n3;
    }

    if (n4 < result)
    {
        result = n4;
    }

    if (n5 < result)
    {
        result = n5;
    }

    return result;
}

bool sides_make_triangle(int a, int b, int c)
{
    if ((a + b < c) || (a + c < b) || (b + c < a))
    {
        return false;
    }

    return true;
}

bool angles_make_triangle(int A, int B, int C)
{
    if (A + B + C == 180)
    {
        return true;
    }

    return false;
}

bool is_a_leap_year(int yyyy)
{
    if (yyyy % 100 == 0)
    {
        if (yyyy % 400 == 0)
        {
            return true;
        }
    }
    else if (yyyy % 4 == 0)
    {
        return true;
    }

    return false;
}
