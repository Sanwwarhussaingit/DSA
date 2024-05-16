class towSum {

    public int[] solution(int[] nums, int target) {
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {
                if (nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;

                    return result;

                }
            }
        }
        return result;

    }

    public static void main(String[] args) {
        towSum obj = new towSum();
        int[] indice = obj.solution(new int[] { 4, 3, 21, 5 }, 5);

        for (int i = 0; i < 2; i++) {
            System.out.println("Output:  " + indice[i]);
        }

    }
}