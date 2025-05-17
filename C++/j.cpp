using namespace std;
int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n,m;

  cin >> n >> m;

  int datos[n][m];

  for(int i=0; i < n; i++)
  {
    for(int o=0; o < m; o++)
    {
      cin >> datos[i][o];
    }
  }

  for(int p=0; p<m; p++)
  {
    for(int q=0; q<n; q++)
    {
      cout << datos[q][p] << " ";
    }
    cout << endl;
  }
  // TODO: fixme.

  return 0;
}