#include <curlpp>
using namespace std;
// RAII cleanup
int main()
{
curlpp::Cleanup myCleanup;

// Send request and get a result.
// Here I use a shortcut to get it in a string stream ...

std::ostringstream os;
os << curlpp::options::Url(std::string("http://www.aayam2k17.in/"));

string asAskedInQuestion = os.str();
cout<<asAskedInQuestion<<endl;
return 0;
}