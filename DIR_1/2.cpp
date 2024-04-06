/* NAMESPACE : (namespaces simply mean scope)

Namespaces provide the space/scope where we can define or declare identifiers i.e. names of variables, methods, 
classes, etc.

Namespace declarations appear only at global scope.

Namespace declarations can be nested within another namespace.

Namespace declarations don’t have access specifiers (Public or Private).

No need to give a semicolon after the closing brace of the definition of namespace.

We can split the definition of namespace over several units.

DEFINITION:
namespace  namespace_name{
     // code declarations i.e. variable  (int a;)
     method (void add();)
     classes ( class student{};)
}

CALL : 
"namespace_name::code;" 
// code could be a variable, function or class.

Namespaces are similar to packages in Java or modules in Python

Namespaces are used to organize code into logical groups and to prevent name collisions that can occur especially when your code 
base includes multiple libraries. All identifiers at namespace scope are visible to one another without qualification.
*/
#include<iostream>
#include<string>
using namespace std;

namespace animals{
    string animal1="cat";
}
namespace music{
    string song=" chipi chipi chapa chapa";
}
namespace loop{
    int loopno=1;
    namespace innerloop1{
        int loopno=2;

    }
}

using namespace std;
using namespace music;

int main()
{
    cout<<"hey there\n";
    cout<<animals::animal1<<" says"<<song<<endl;
    string animal1="dog";
    cout<<animal1<<" does not says"<<song<<endl;
    cout<<"\n"<<loop::loopno<<"\n"<<loop::innerloop1::loopno;
    return 0;
}
