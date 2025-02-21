class Solution(object):
    def mostWordsFound(self, sentences):
        """
        :type sentences: List[str]
        :rtype: int
        """
        mwc=0
        for i in sentences:
            wc=len(i.split())
            mwc=max(wc,mwc)
        return mwc