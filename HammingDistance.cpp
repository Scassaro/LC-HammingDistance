class Solution {
public:
    int hammingDistance(int x, int y) {
        deque<int> XBin = ConvertToBinary(x);
        deque<int> YBin = ConvertToBinary(y);
        int HamDis = 0;
        while(XBin.size() != YBin.size())
        {
            if(XBin.size() > YBin.size())
                YBin.push_front(0);
            else if(XBin.size() < YBin.size())
                XBin.push_front(0);
        }
        for(int i = 0; i < XBin.size() && i < YBin.size(); i++)
            if(XBin[i] != YBin[i])
                HamDis++;
        return HamDis;
    }
    deque<int> ConvertToBinary(int integer)
    {
        deque<int> Binary;
        for(; integer > 0; integer /= 2)
        {
            if(integer % 2 == 0)
                Binary.push_front(0);
            else
                Binary.push_front(1); 
        }
        return Binary;
    }
};