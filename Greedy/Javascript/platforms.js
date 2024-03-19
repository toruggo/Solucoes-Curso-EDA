/**
 * @param {number[]} arr
 * @param {number[]} dep
 * @param {number} n
 * @returns {number}
*/
class Solution {
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    findPlatform(arr, dep, n)
    {
        arr.sort((a, b) => a - b);
        dep.sort((a, b) => a - b);
    	
        let i = 0, j = 0, ans = 0, platforms = 0;
        
    	// allocate platforms as need them, and keep the maximum we needed
    	while (i < n || j < n) {
    	    if(arr[i] <= dep[j]) {
    	        i++;
    	        platforms++;
    	    }
    	    else{
    	        j++;
    	        platforms--;
    	    }
    	    
    	    ans = Math.max(ans, platforms);
    	}
    	
    	return ans;
    }
}