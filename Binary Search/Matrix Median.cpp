https://www.interviewbit.com/problems/matrix-median/

int smallerThanMid(vector<int>a,int md){
    int low=0;
    int high=a.size()-1;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        if(a[mid]<=md){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
} 

int Solution::findMedian(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
    int low=0;
    int high=1e9;
    
    while(low<=high){
        int mid=low+(high-low)/2;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=smallerThanMid(a[i],mid);
        }
        if(cnt <= (n*m)/2){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
