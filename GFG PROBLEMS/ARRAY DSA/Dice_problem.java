class Dice_problem {

    public static int dice_problem(int oposite_num){

        if(oposite_num > 6 || oposite_num < 1){
            return -1;
        }

        return 7 - oposite_num;
    }

    public static void main(String[] args) {

        int oposite_num = 1;

        int result = dice_problem(oposite_num);

        if(result == -1){
            System.out.println("Invalid Number");
        }
        else{
            System.out.println(result);
        }
    }
}