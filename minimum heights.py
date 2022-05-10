def getMinDiff(self, arr, n, k):
        # code here
        arr.sort()
        mini=arr[0]
        maxi=arr[-1]
        mh=arr[-1]-arr[0]
        for i in range(1,n):
            mini=min(arr[i]-k,arr[0]+k)
            maxi=max(arr[i-1]+k,arr[-1]-k)
            mh=min(mh,maxi-mini)
        return mh
