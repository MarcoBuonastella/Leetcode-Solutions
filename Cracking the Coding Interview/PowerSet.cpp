
//try to build on the result of previous sets by adding elements

set<set<int>> powerSet(set <int> s){
	<set<set<int>> sets;
	for(auto &c: s){
		for(auto &d: sets){
			d.insert(c);
		}
		sets.insert(set<int>(c));
	}
	return sets;
	
}