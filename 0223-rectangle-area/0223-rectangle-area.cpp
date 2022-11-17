class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
     int area1=abs(ax1-ax2)*abs(ay1-ay2);
        int area2=abs(bx1-bx2)*abs(by1-by2);
        
        if(ax2<=bx1||ax1>=bx2||by2<=ay1||ay2<=by1)
            return area1+area2;
        
        return area1-((min(ax2,bx2)-max(ax1,bx1))*(min(by2,ay2)-max(ay1,by1)))+area2;
        
        
    }
};
/*
      int area1=abs(ax1-ax2)*abs(ay1-ay2);
        int area2=abs(bx1-bx2)*abs(by1-by2);
        
        if(ax2>bx1&&ax2<bx2 || ax1>bx1&&ax1<bx2)
        {
            int l=ax2-bx1;
            
        }
         if( ax1>bx1&&ax1<bx2)
        {
            int l=ax1-bx1;
            
        }
*/