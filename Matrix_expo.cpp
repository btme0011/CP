struct Matrix{
	double a[2][2]={{0,0},{0,0}};
	Matrix operator *(const Matrix& other){
		Matrix product;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				for(int k=0;k<2;k++){
					product.a[i][k] += this->a[i][j] * other.a[i][k];
				}
			}
		}
		return product;
	}
};
