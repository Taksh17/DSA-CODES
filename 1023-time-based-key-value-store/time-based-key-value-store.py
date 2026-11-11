class TimeMap(object):

    def __init__(self):
        self.d={}
        

    def set(self, key, value, timestamp):
        """
        :type key: str
        :type value: str
        :type timestamp: int
        :rtype: None
        """
        if key not in self.d:
            self.d[key]=[]
        self.d[key].append((timestamp,value))
        

    def get(self, key, timestamp):
        """
        :type key: str
        :type timestamp: int
        :rtype: str
        """
        if key not in self.d:
            return ""
        arr=self.d[key]
        s=0
        e=len(arr)-1
        ans=""
        while(s<=e):
            m=s+(e-s)//2
            if arr[m][0] <= timestamp:
                ans = arr[m][1]
                s = m + 1
            else:
                e=m-1
        return ans



# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)