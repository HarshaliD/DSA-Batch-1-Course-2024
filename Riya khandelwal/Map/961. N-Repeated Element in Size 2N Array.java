class Solution {
    public int repeatedNTimes(int[] nums) {
     Map<Integer,Integer> map = new HashMap<>();
     for(int num : nums)
     {
        if(map.containsKey(num))
        {
            map.put(num,map.get(num)+1);
        }
        else
        {
            map.put(num,1);
        }

     }

     for(Map.Entry<Integer,Integer> entry : map.entrySet())
     {
        if(entry.getValue() > 1 )
        {
            return entry.getKey();
        }
     }
     return -1;
    }
}

//T.C = O(n)

//S.C = O(n)
