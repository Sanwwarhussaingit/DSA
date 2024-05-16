class commanElement {
    public static void main(String[] args) {
        int[] arr = { 6, 1, 2, 3, 2, 5, 4 };
        int f = 0;
        for (int i = 0; i < arr.length; i++) {
            for (int j = i; j < arr.length; j++) {
                if (arr[i] == arr[j]) {

                    f = 1;
                    break;
                }
            }
        }
        if (f==1) {
            System.err.println("Number is coomman");

        }

    }
}