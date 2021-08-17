package StackQuestions;

import java.util.Arrays;

public class RainWaterTrapping {
    public static void main(String[] args){
        Integer[] blocks = {1,2,4,1,3,2,1,3};
        Integer[] leftMax= leftMax(blocks);
        System.out.println(Arrays.asList(leftMax));
        Integer[] rightMax= rightMax(blocks);
        System.out.println(Arrays.asList(rightMax));
    }

    private static Integer[] leftMax(Integer[] blocks) {
        Integer[] leftMax= new Integer[blocks.length];
        leftMax[0]=blocks[0];
        Integer tempMax=leftMax[0];
        for(int i=1;i<blocks.length;i++){
            leftMax[i]=tempMax;
            tempMax= Math.max(tempMax, blocks[i]);
        }
        return leftMax;
    }
    private static Integer[] rightMax(Integer[] blocks) {
        Integer[] rightMax= new Integer[blocks.length];
        rightMax[blocks.length-1]=blocks[blocks.length-1];
        Integer tempMax=rightMax[blocks.length-1];
        for(int i=blocks.length-2;i>=0;i--){
            rightMax[i]=tempMax;
            tempMax= Math.max(tempMax, blocks[i]);
        }
        return rightMax;
    }
}
