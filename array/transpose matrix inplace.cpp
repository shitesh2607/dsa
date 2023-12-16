for(int i=0; i<row;i++){
            for(int j=0; j<i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }