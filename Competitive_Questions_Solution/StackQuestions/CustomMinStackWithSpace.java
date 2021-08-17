package StackQuestions;

import java.util.Stack;

public class CustomMinStackWithSpace {
    public static void main(String[] args){
        CustomMinStackWithSpace stack = new CustomMinStackWithSpace();
        stack.push(5);
        stack.push(6);
        stack.push(7);
        stack.push(3);
        stack.push(3);
        System.out.println(stack);
        stack.pop();
        stack.pop();
        stack.pop();
        System.out.println(stack);
    }
    private Stack<Integer> stack = new Stack<>();
    private Stack<Integer> minStack = new Stack<>();
    public Integer peek(){
        if(stack.size()==0){
            return -1;
        }
        return stack.peek();
    } 
    public Integer min(){
        if(minStack.size()==0){
            return -1;
        }
        return minStack.peek();
    }
    public Integer pop(){
        if(stack.size()==0){
            return -1;
        }
        if(stack.peek()==minStack.peek()){
            minStack.pop();
        }
        return stack.pop();
    }
    public void push(Integer item){
        if(minStack.size()==0 || item<=minStack.peek()){
            minStack.push(item);
        }
        stack.push(item);
    }
    @Override
    public String toString(){
        return "stack "+stack +" \nminStack"+minStack;
    }
}
