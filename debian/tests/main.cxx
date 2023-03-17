#include <Lucene.h>
#include <LuceneException.h>
#include <BooleanQuery.h>

using namespace Lucene;
int main()
{
    auto fullQuery = newLucene<BooleanQuery>();
    return 0;
}
