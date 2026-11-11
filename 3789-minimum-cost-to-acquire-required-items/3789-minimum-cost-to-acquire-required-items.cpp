class Solution {
public:
    long long minimumCost(int c1, int c2, int cb, int n1, int n2) {
        long long minn=min(n1,n2);
        long long maxn=max(n1,n2);
        long long diff=maxn-minn;
        long long res=(1LL*cb*maxn);
        if(maxn==n1) {
            long long s=(1LL*cb*(minn))+(1LL*diff*c1);
            res=min(res,s);
        }
        else {
            long long s=(1LL*cb*(minn))+(1LL*diff*c2);
            res=min(res,s);
        }
        long long sep=(1LL*c1*n1)+(1LL*c2*n2);
        res=min(res,sep);
        return res;
    }
};