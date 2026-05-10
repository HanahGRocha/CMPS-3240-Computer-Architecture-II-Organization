float sdot(int length, const float *x, const float *y)
{
    float acc = 0.0f;

    for (int i = 0; i < length; ++i)
        acc += x[i] * y[i];

    return acc;
}
