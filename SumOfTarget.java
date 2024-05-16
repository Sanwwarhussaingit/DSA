public class SumOfTarget {

    int SumOfIndecis(int[] data, int target)
    {
        // int[] result = new int[data.length];
        
        int sum=0;
        for(int i=0;i<data.length;i++)
        {
            if(sum>=target)
            {
                break;
            }else if(data[i]<target)
            {
                sum=sum+data[i];
            }
        }
        return sum;
    }
    public static void main(String[] args) {

        SumOfTarget obj =new SumOfTarget();
        int target=5;
        int[] arr = {2,3,2,3};

        int sum = obj.SumOfIndecis(arr,target);
        System.err.println(sum);

    }
    

}
