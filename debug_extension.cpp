/*Debug Extension starts here*/

template <typename F, typename S>
ostream& operator << (ostream& os, const pair< F, S>& p)
{
    return os<<"(" <<p.first<<", "<<p.second<<")";
}

template<typename T> ostream &operator << (ostream &os, const vector<T> &v)
{
    os<<"{";
    typename vector<T> :: const_iterator it;
    for(it= v.begin(); it!=v.end(); it++)
    {
        if(it!=v.begin()) os<<",";
        os<<*it;
    }
    return os<<"}";
}

template <typename T> ostream &operator << (ostream & os, const set<T>&v)
{
    os<<"[";
    typename set<T> :: const_iterator it;
    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it!=v.begin()) os<<",";
        os<<*it;
    }
    return os<<"]";
}

template <typename F, typename S> ostream &operator << (ostream & os, const map<F,S>&v)
{
    os<<"[";
    typename map<F,S>::const_iterator it;

    for(it=v.begin(); it!=v.end(); it++)
    {
        if(it != v.begin()) os<<",";
        os<< it ->first<<"="<<it->second;
    }
    return os<<"]";
}



template< typename T > void print(const T& v) {    cerr << v << ' ' ;}

template< typename T1, typename... T2 > void print( const T1& first, const T2&... rest ){ 
    print(first); 
    print(rest...) ;
}

/*Debug Extension ends here*/
