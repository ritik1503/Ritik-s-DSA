#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define vll vector<long long>
using   pi = pair<int, int>;
// #define mp make_pair
#define fi first
#define se second
using   vi = vector<int>;
using   vvi = vector<vector<int>>;
using   vb = vector<bool>;
using   vs = vector<string>;
using   vpi = vector<pi>;
using   ump = unordered_map<int, int>;
using   mapi = map<int, int>;
#define sz(x) x.size()
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define raint(x) x.rbegin(), x.rend()
//  #define reverse(x) reverse(all(x))
#define rsz ansize
#define ins insert
#define pb push_back
#define eb emplace_back
// #define ft front()
#define bk back()
#define lb lower_bound
#define ub upper_bound
#define fr(i,a,b) for(int i = (a); i < (b); ++i)
#define rf(i,b,a) for(int i = (b)-1; i >= (a); --i)
#define eachi(x,a) for(auto &x: a)
#define eacho(x,a) for(auto x: a)
#define ci(X)               int X; cin>>X;
#define cii(X, Y)           int X, Y; cin>>X>>Y;
#define ciii(X, Y, Z)       int X, Y, Z; cin>>X>>Y>>Z;
#define ciiii(W, X, Y, Z)   int W, X, Y, Z; cin>>W>>X>>Y>>Z;
#define maxelement(x) *std::max_element((x).begin(), (x).end())
#define maxeleindex(x) std::max_element((x).begin(),(x).end())-(x).begin()
#define minelement(x) *std::min_element((x).begin(), (x).end())
#define mineleindex(x) std::min_element((x).begin(),(x).end())-(x).begin()
#define show(x) cout << x ;
/*
struct node {
public:
    int val;
    struct node *left;
    struct node *right;
};

// New node creation
struct node *newNode(int val) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int depth(node* root)
{
    if(root==NULL)
        return 0;
    return 1+max(depth(root->left), depth(root->right));

}



///////////////////////////////////////////////////////////////////////////////
////////////////////////////////EVERY  TREE OPERATION :D ///////////////////////
////////////////////////////////////////////////////////////////////////////////
class Bst{
    TreeNode* root = NULL;
    void deleteTree(TreeNode* node){
        if(node == NULL){
            return;
        }
        if(node->right != NULL){
            deleteTree(node->right);
        }
        if(node->left != NULL){
            deleteTree(node->left);
        }
        delete node;
    }
    // Returns NULL if tree empty
    // Or returns pointer to the node that contains searchItem
    // Or if searchItem is not present, returns the pointer to the potential parent node of the searchItem.
    TreeNode* find(int searchItem){
        if(root == NULL){
            return NULL;
        }
        TreeNode* node = root, *prevNode = NULL;
        while(node != NULL && node->val!=searchItem){
            prevNode = node;
            if(node->val < searchItem){
                node = node->right;
            }else{
                node = node->left;
            }
        }
        return node == NULL ? prevNode : node;
    }
    void _getInOrderList(TreeNode* root, vector<int>& traversalResult){
        if(root==NULL){
            return;
        }
        if(root->left != NULL){
            _getInOrderList(root->left, traversalResult);
        }
        int result = root->val;
        traversalResult.push_back(result);
//cout<<root->val<<"\t";
        if(root->right != NULL){
            _getInOrderList(root->right, traversalResult);
        }
    }
    void _printInOrder(TreeNode* root){
        if(root==NULL){
            return;
        }
        if(root->left != NULL){
            _printInOrder(root->left);
        }
        cout<<root->val<<"\t";
        if(root->right != NULL){
            _printInOrder(root->right);
        }
    }
public:
    Bst(){}
    Bst(TreeNode* rt):root(rt){}
    ~Bst(){
        deleteTree(root);
    }
    TreeNode* getRoot(){
        return root;
    }
    // does nothing if data already present in the tree.
    // else insert a new node with given data
    void push(int data){
        TreeNode* searchNode = find(data);
        TreeNode* newNode = new TreeNode(data);
        if(searchNode == NULL){
            root = newNode;
        }else if(searchNode->val > data){
            searchNode->left = newNode;
        }else if(searchNode->val < data){
            searchNode->right = newNode;
        }
    }
    void printInOrder(){
        _printInOrder(root);
    }
    vector<int> getInOrderList(){
        vector<int> traversalResult = vector<int>();
        _getInOrderList(root, traversalResult);
        return traversalResult;
    }
};







*/
//for Detecting loop in undirected Graph
/*bool dfs(vector<int> g[], unordered_map<int, int>& mp, int curr, int par)
{
	mp[curr] = 1;
	bool loopExists = false;
	for (auto child : g[curr])
	{
		if (mp[child] == 1 and child == par)continue;
		if (mp[child] == 1) return true;
		loopExists |= dfs(g, mp, child, curr);


	}
	return loopExists;
}*/


///////////////////////////////////////////////////////////////
////////////////////DIJSKTRA'S ALGORITHM //////////////////////
///////////////////////////////////////////////////////////////
/*const int maxn = 1e5 + 10;
vector<pair<int, int>> g[maxn];
vector<int> lel;
void dijsktra(int source, int nodes_size)
{
	unordered_map<int, int> mp;
	set<pair<int, int>> s;
	s.insert({0, source});
	vector<int> distance(nodes_size + 1, INT_MAX);

	distance[source] = 0;

	while (s.size() > 0)
	{
		auto ji = *s.begin();
		int curr_node = ji.second;
		int curr_distance = ji.first;

		s.erase(s.begin());
		if (mp[curr_node])
			continue;

		mp[curr_node] = 1;
		for (auto child : g[curr_node]) //since in g[] we have (1,2,3) means
		{
			int next_node = child.first;
			int next_node_distance = child.second;
			if (distance[curr_node] + next_node_distance < distance[next_node])
			{
				distance[next_node] = distance[curr_node] + next_node_distance;
				s.insert({distance[next_node], next_node});
			}

		}
	}


}*/


/////////////////////////////////////////////////////////////////
////////////////////////////FLOYD WARSHALL ALGORITHM//////////////
/////////////////////////////////////////////////////////////////


// for(int k=1;k<=nodes;i++)
// 	 {
// 	 	 for(int i=1;i<=n;i++)
// 	 	 	 {
// 	 	 	 	for(int j=1;j<=n;j++)
// 	 	 	 		 {
// 	 	 	 		 	 if(distance[i][k]!=INT_MAX and distance[k][j]!=INT_MAX)
// 	 	 	 		 	  {
// 	 	 	 		 	  	distance[i][j]=min(distance[i][j],distance[i][k]+distance[k][j]);
// 	 	 	 		 	  }
// 	 	 	 		 }
// 	 	 	 }
// 	 }

//////////////////////////////////////////////////////////////////////
////////////////////////// KRUSKALS ALGORITHM/////////////////////////
//////////////////////////////////////////////////////////////////////
/*const int maxn=1e5+10;
int parent[maxn];
int size[maxn];
int findParent(int x)
{
	 if(parent[x]==x)return x;
	 return parent[x]=findParent(parent[x]);
}

void Union(int a,int b)
{
	a=findParent(a);
	b=findParent(b);
	if(a!=b)
	{
		 if(size[a]<size[b])
		 	swap(a,b);
		 parent[b]=a;
		 size[a]+=size[b];
	}


}
void kruskals()
{
	int nodes,v;
	cin >> nodes >> v;
	for(int i=1;i<=nodes;i++)
		parent[i]=i;
	vector<pair<int,pair<int,int>>> edges;
	for(int i=0;i<v;i++)
	{
		int x,y,z;
		cin >> x >> y >> z;
		edges.push_back({x,{y,z}});
	}
	sort(edges.begin(),edges.end());
	int ans=0;
	for(auto x:edges)
	{
		 int w1=x.first;
		 int u1=x.second.first;
		 int v1=x.second.second;
		 if(findParent(u1)==findParent(v1))
		 continue;
		Union(u,v);
		ans+=w1;

	}
	cout << ans << "\n";



}
*/
///////////////////////////////////////////////////////////////////////////
///////////////////////DETECT CYCLE IN UNDIRECTED GRAPH////////////////////
///////////////////////////////////////////////////////////////////////////
/*const int maxn=1e9+7;
vector<int> g[maxn];
int visited[maxn];

bool CycleDirectedGraph(int node)
{
	 visited[node]=1; //1 is under process
	 for(auto x:g[node])
	 {
	 	 if(visited[node]==0)
	 	 {
	 	 	if(CycleDirectedGraph(x)==true)
	 	 		return true;
	 	 	else if(visited[node]=1)
	 	 		return true;
	 	 }
	 }
	 visited[node]=2; //completed
	 return false;

}
*/

////////////////////////////////////////////////////////////////////
/////////////////////// BIPARTITE GRAPH/////////////////////////////
////////////////////////////////////////////////////////////////////
/*bool checkBiParitite(vector<int> g[],vector<int>& color,int source)
{
	queue<int> q;
	q.push(source);
	color[source]=1;
	while(!q.empty())
	{
		int first_node=q.front();
		q.pop();
		for(auto x:g[first_node])
		{
			 if(color[x]==-1)
			 {
			 	color[x]=1^color[first_node]; //change 0 to 1 ,1 to 0
			 	q.push(x);
			 }
			 else if(color[x]==color[first_node])
			 	return false;
		}

	}
	return true;



}


bool isBiPartite(vector<int> g[],int n)
{
    vector<int> color(n+1,-1);
    for(int i=1;i<=n;i++) //1 indexed based
    	{
    		 if(color[i]==-1)
    		 {
    		 	if(!checkBiParitite(g,color,i))
    		 		return false;
    		 }

        }
        return true;


}
*/

/////////////////////////////////////////////////////////////////////////////
///////////////////////ROTATE VECTOR RIGHTSIDE////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
/*
void rotate(vector<int>& nums, int n, int k)
{
	if ((n == 0) || (k <= 0))
	{
		return;
	}

	// Make a copy of nums
	vector<int> numsCopy(n);
	for (int i = 0; i < n; i++)
	{
		numsCopy[i] = nums[i];
	}

	// Rotate the elements.
	for (int i = 0; i < n; i++)
	{
		nums[(i + k) % n] = numsCopy[i];
	}
}
*/



//for binary search , use lb(all(v),x)-v.begin() to find the position of index


////////////////// lol2 or UNORDERED_lol2///////////
/*
find() // to find particular value in logn
erase("only iterator or value")//to remove particular element in lol2
count("value") // to find occurence of particular number
 */
//Insert in unordered lol2 takes 0(1) and finding particular element also takes o(1)


//////// MULTIlol2 ////////
/*insert() //takes logn time
find() //takes log(n) time*/
//also allows multiple same values in multilol2

///////////////////////////////////////////////////////////
///////////////////////BINARY TREE/////////////////////////
///////////////////////////////////////////////////////////
// IF(LEFT(DEPTH)==RIGHT(DEPTH))
// THEN WE CAN SAY ROOT IS LCA :D :D