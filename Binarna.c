int binarnapret(int a[], int l, int d, int x) {
	int sred;
	if (l > d) {
		return -1;
	}
	else {
		sred = (l + d) / 2;
		if (x == a[sred]) {
			return sred;
		}
		else if (x < a[sred]) {
			return binarnapret(a, l, sred - 1, x);
		}
		else {
			return binarnapret(a, sred + 1, d, x);
		}
	}
}