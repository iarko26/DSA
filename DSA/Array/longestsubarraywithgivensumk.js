// your code goes here
 function longestSubArrayK(arr,k){
     let n=arr.length;
     let len=0;
     for(let i=0;i<n;i++){
         let sum=0;
         for(let j=i;j<n;j++){
             sum+=arr[j];
             if(sum==k){
                 let sublen=j-i+1;
                 len=Math.max(len,sublen);
             }
             
         }
     }
     return len;
     
 }
 
 let arr=[2, 3, 5, 1, 9];
 let k=10;
 let res=longestSubArrayK(arr,k);
 console.log(res);
 