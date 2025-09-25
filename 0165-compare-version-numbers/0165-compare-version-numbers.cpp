class Solution {
public:
    int compareVersion(string version1, string version2){
        int i=0,j=0;
        int l1=version1.size();
        int l2=version2.size();
        while(i<l1 || j<l2){
            int start1=i;
            while(i<l1 && version1[i]!='.'){
                i++;
            }
            int num1=(start1<i)?stoi(version1.substr(start1,i-start1)):0;
            int start2=j;
            while(j<l2 && version2[j]!='.'){
                j++;
            }
            int num2=(start2<j)?stoi(version2.substr(start2,j-start2)):0;
            if(num1<num2){
                return -1;
            }
            if(num1>num2){
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }
};