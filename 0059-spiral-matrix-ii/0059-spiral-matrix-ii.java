class Solution {

    public int[][] generateMatrix(int N){
        
        int R = N;

        int C = N;

        int[][] matrix = new int[R][C];

        for(int top_pointer = 0 , bottom_pointer = (R - 1) , left_pointer = 0 , right_pointer = (C - 1) , value = 1 ; ((top_pointer <= bottom_pointer) && (left_pointer <= right_pointer)) ; ){

            for(int j = left_pointer ; (j <= right_pointer) ; j++){
                matrix[top_pointer][j] = value++;
            }

            top_pointer++;

            for(int i = top_pointer ; (i <= bottom_pointer) ; i++){
                matrix[i][right_pointer] = value++;
            }

            right_pointer--;

            if(top_pointer <= bottom_pointer){

                for(int j = right_pointer ; (j >= left_pointer) ; j--){
                    matrix[bottom_pointer][j] = value++;
                }

                bottom_pointer -= 1;
            }

            if(left_pointer <= right_pointer){

                for(int i = bottom_pointer ; (i >= top_pointer) ; i--){
                    matrix[i][left_pointer] = value++;
                }

                left_pointer++;
            }
        }

        return matrix;
    }
}