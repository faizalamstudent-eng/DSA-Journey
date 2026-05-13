class Sumofsq {
    
     
    static int getsq(int arr[]){
        int sum = 0;
        for(int i =0 ; i<arr.length; i++){
            sum = sum + arr[i] * arr[i];
            
        }
        return sum;
    }
    public static void main(String [] a){
       
        int arr[] = {2,4,3};
        int ans = Sumofsq.getsq(arr);
        System.out.print(ans);
    }
}
