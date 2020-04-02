#ifndef KALFUN_HPP_INCLUDED
#define KALFUN_HPP_INCLUDED

float dodawanie(float l1,float l2)
{
    return l1+l2;
}
float odejmowanie(float l1,float l2)
{
    return l1-l2;
}
float mnozenie(float l1,float l2)
{
    return l1*l2;
}
float dzielenie(float l1,float l2)
{
    return l1/l2;
}
float potegowanie(float l1,int l2)
{
    if(l2==0)return 1;
    return l1*potegowanie(l1,l2-1);
}
float pierwiastkowanie(float l1,float l2)
{
    return pow(l1,1/l2);
}
int silnia(int l1)
{
    if(l1==0) return 1;
    return l1*silnia(l1-1);
}
float zapisf(float *tab,int d, float funkcja)
{
    tab[d-1]=funkcja;
    return tab[d-1];
}
float zapisi(float *tab,int d, int funkcja)
{
    return tab[d-1]=funkcja;

}


#endif // KALFUN_HPP_INCLUDED
