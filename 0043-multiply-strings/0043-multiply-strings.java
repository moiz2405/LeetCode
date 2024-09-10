class Solution {
    public String multiply(String num1, String num2) {
            if(num1.equals("0")||(num2.equals("0" ))) return "0";
    int[] arr=new int[num1.length()+num2.length()];
    int idx=arr.length-1,carry=0,j=num1.length();
    
    for(int i=num2.length()-1;i>=0;i--){
       
       int temp=idx;
        carry=0;
        j=num1.length()-1;
        while(j>=0){
            int pro=(num1.charAt(j)-'0')*(num2.charAt(i)-'0');
            pro+=carry;
             carry=(pro+arr[idx])/10;
            arr[idx]=(arr[idx--]+pro)%10;
            j--;
        }
        if(carry>0) arr[idx--]=carry;
        idx=temp-1;
} 
    StringBuilder s=new StringBuilder();
    boolean is=false;
  //  System.out.println(Arrays.toString(arr));
     for(int i=0;i<arr.length;i++){
         if(arr[i]>0) is=true;
         if(is)
         s.append(arr[i]);
     }
    return s.toString();
}
    }
