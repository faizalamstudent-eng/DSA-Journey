import java.util.ArrayList;

class PrintAlternative{
    public static ArrayList<Integer> getalternative(int arr[]){
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i = 0; i<arr.length; i+=2){
            ans.add(arr[i]);

        }
        return ans;
    }
    public static void main(String []ar){
        int arr[] = {1,2,3,4,5,6,};
        ArrayList<Integer> ans = PrintAlternative.getalternative(arr);
        for(int i = 0; i<ans.size(); i++){
            System.out.print(ans.get(i) + " ");
        }
    }
}