int add(int a, int b)
{
        return a + b;
}

int sub(int a, int b)
{
        return add(a, -1 * b);
}

int mul(int a, int time)
{
        return a * time;
}

int div(int a, int time)
{
        if (time == 0) return 0;
        return a / time;
}

int mod(int a, int time)
{
        return a % time;
}

