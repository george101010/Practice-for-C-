#ifndef BIGINT_H
#define BIGINT_H
class bigint{
        friend bigint operator+ (bigint&,bigint&);
        friend bigint operator- (bigint&,bigint&);
        friend bigint operator* (bigint&,bigint&);
        friend float operator/ (bigint&,bigint&);

    private:
        unsigned long long int mod;
        short int sign;
    public:
        bigint(char *s);
        bigint(short int sgn,unsigned long long int m);
        void prt();
        };
#endif
