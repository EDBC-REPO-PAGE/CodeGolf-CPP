#include <cstdlib>
#include <cstdio>
#include <vector>
#include <string>

/*───────────────────────────────────────────────────────────────────*/

std::string input1 = R"(
    a, b = map(int, input().split())
    def gcd(a, b):
        while b:
            a, b = b, a%b
        return a
    print(gcd(a,b))
)";

std::wstring input2 = L" ਠ†⁡Ⱐ戠㴠浡瀨楮琬⁩湰畴⠩⹳灬楴⠩⤊††摥映杣搨愬⁢⤺ਠ†††⁷桩汥⁢㨊††††††愬⁢‽⁢Ⱐ愥戊††††牥瑵牮⁡ਠ†⁰物湴⡧捤⡡Ɫ⤩";

/*───────────────────────────────────────────────────────────────────*/

void golfed( const std::string& input ){

    setlocale(LC_ALL,"");

    printf(":> original code: \n %s \n", input1.c_str() );

    printf(":> code golfed: \n \n ");

    for( auto x : input ){
        static std::vector<uint> vk; vk.emplace_back(x);
        if( vk.size() >= 2 ){
            wint_t ch = vk[0] * 0x0100 | vk[1];
            printf("%lc", ch );
            vk.clear(); continue;
        }
    }

    printf("\n ");

}

/*───────────────────────────────────────────────────────────────────*/

void unGolfed( const std::wstring& input ){

    setlocale(LC_ALL,"");

    printf(":> code golfed: \n %ls \n", input.c_str() );

    printf(":> origina code: \n ");

    for( auto x : input ){

        char ch0 = ( x & 0xFF00 ) / 0x0100; 
        char ch1 = ( x & 0x00FF );
        printf("%c%c", ch0, ch1 );

    }

    printf("\n ");

}

/*───────────────────────────────────────────────────────────────────*/

int main() {

    printf("────────────────────────\n");

    golfed( input1 );

    printf("────────────────────────\n");

    unGolfed( input2 );

    printf("────────────────────────\n");

}