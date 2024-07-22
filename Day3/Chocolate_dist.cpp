 long long mini=INT_MAX;
      int l=0;
      int r=m-1;
      while(r<n){
           long long temp=a[r]-a[l];
           mini=min(temp,mini);
           r++;
           l++;
      }
      return mini;
    } 