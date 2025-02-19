using ll = long long;
ll qmi(ll a, ll b)
{
    ll res = 1;
    for (; b; b /= 2, a = a * a)
        if (b & 1)
            res = res * a;
    return res;
}