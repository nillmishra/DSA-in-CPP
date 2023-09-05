//condider each & every pair & diff 
for(int i=0; i<=n; i++){
    for(int j = i+1; j< n; j++ ){
        if(abs(a[i]-a[j])==k){
            cout++;
        }
    }
}