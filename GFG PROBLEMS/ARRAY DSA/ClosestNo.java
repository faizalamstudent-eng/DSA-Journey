
class ClosestNo{
    public static int getclosest(int m, int n){
        int q = m/n;
        int lowest = q*n;
        int n2;

        if(n*m > 0){
            n2 = (q+1)*n;
        }
        else{
            n2 = (q-1)*n;
        }
if(Math.abs(m-lowest) >= Math.abs(m-n2)){
    return n2;

    }
    else{
        return lowest;
    }
    }
    public static void main(String [] ar){
        int m = 13;
        int n = 4;
        int ans = ClosestNo.getclosest(m,n);
        System.out.print(ans);
    }
}