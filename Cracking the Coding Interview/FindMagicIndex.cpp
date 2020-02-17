// idea: if array is sorted and non-duplicate then if we find A[i] > i, 
//we look to the left, if we find A[i] < i then we look right


int findMagicIndex(vector<int> v){
	int index = -1;
	findMagicIndexV1(&v, 0, v.size() - 1, &index);
	return index;
}

void findMagicIndexV2(vector<int> v, int min, int max, int& index){
	  
	  if(min <= max && min >= 0 && min < v.size() && max >= 0 && max < s.size()){
		  int mid = ((max - min)/2);
		  
		  if(v[mid] == index){
			   index = mid;
		  }
		  else if(v[mid] > mid){
				findMagicIndex(v, min, mid - 1, index);
				findMagicIndex(v, v[mid], max, index);
		  }
		  else{
				findMagicIndex(v, mid + 1, max, index);
				findMagicIndex(v, min, v[mid], index);
		  }
	  }
}

void findMagicIndexV1(vector<int> v, int min, int max, int& index){
	  
	  if(min <= max){
		  int mid = ((max - min)/2);
		  
		  if(v[mid] == mid){
			   index = mid;
		  }
		  else if(v[i] < mid){
				findMagicIndex(v, min, mid - 1, index);
		  }
		  else{
				findMagicIndex(v, mid + 1, max, index);
		  }
	  }
}