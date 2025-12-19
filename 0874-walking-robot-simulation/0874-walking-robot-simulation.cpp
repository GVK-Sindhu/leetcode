class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x=0;
        int y=0;
        string dir="+y";
        int maxdist=0;
        bool origin=true;
        for(int it:commands){
            if(it==-1){
                if(dir=="+y"){  dir="+x"; }
                else if(dir=="-y"){  dir="-x"; }
                else if(dir=="+x"){  dir="-y"; }
                else if(dir=="-x"){  dir="+y"; }
            }
            else if(it==-2){
                if(dir=="+y"){  dir="-x";}
                else if(dir=="-y"){  dir="+x";}
                else if(dir=="+x"){  dir="+y";}
                else if(dir=="-x"){  dir="-y";}
            }
            else{
                if(dir=="+y") y+=it;
                else if(dir=="-y") y-=it;
                else if(dir=="+x") x+=it;
                else if(dir=="-x") x-=it;
                if(!obstacles.empty()){
                    for(auto it:obstacles){
                        int ox=it[0];
                        int oy=it[1];
                        if(ox==oy && ox==0 && origin){
                            origin=false;
                            continue;
                        }
                        if(ox==x){
                            y=oy-1;
                        }
                        else if(oy==y){
                            x=ox-1;
                        }
                    }
                }
            }
            cout<<x<<" "<<y<<"\n";
            maxdist=max(maxdist,(x*x)+(y*y));
        }
        return maxdist;
    }
};