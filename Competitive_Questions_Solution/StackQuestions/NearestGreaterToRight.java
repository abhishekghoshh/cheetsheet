package StackQuestions;

import  java.util.Collections;

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;
import java.util.Arrays;

public class NearestGreaterToRight{
    public static void main(String args[]){
        Integer[] arr = {1,3,2,4};
        int length = arr.length;
        List<Integer> answer = new ArrayList<>();
        Stack<Integer> stack = new Stack<>();
        for(int i=length-1;i>=0;i--){
            if(stack.size()==0){
                answer.add(-1);
            }else{
                if(stack.peek()>arr[i]){
                   answer.add(stack.peek()); 
                }else{
                    while(stack.size()>0 && stack.peek()<arr[i]){
                        stack.pop();
                    }
                    if(stack.size()==0){
                        answer.add(-1);
                    }else{
                        answer.add(stack.peek());
                    }
                }
            }
            stack.add(arr[i]);
        }
        Collections.reverse(answer);
        System.out.println(Arrays.asList(arr));
        System.out.println(answer);
    }
}