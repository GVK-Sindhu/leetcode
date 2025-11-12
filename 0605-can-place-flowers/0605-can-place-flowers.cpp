class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 && n<=1){
                return true;
            }
        }
      for(int i=1;i<flowerbed.size()-1;i++){
        if(i-1==0){
            if(flowerbed[i-1]==0 && flowerbed[i]==0)
            {
                c++;
                flowerbed[i-1]=1;
            }
        }
        if((i+1)==flowerbed.size()-1 && flowerbed[i]==0 && flowerbed[i+1]==0){
            c++;
           flowerbed[flowerbed.size()-1]=1;
        }
        if(flowerbed[i-1]==0 && flowerbed[i]==0 && flowerbed[i+1]==0){
            flowerbed[i]=1;
            c++;
        }
      }  
      cout<<c<<"\n";
      if(c>=n){
        return true;
      }
      else{
        return false;
      }
    }
};