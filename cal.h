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
        return time == 0 ? 0 : a / time; // prevent division by zero crash
}

int mod(int a, int time)
{
        return a % time;
}

