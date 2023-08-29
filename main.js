const { Buffer } = require("buffer");

const input1 = `
    a, b = map(int, input().split())
    def gcd(a, b):
        while b:
            a, b = b, a%b
        return a
    print(gcd(a,b))
`;

const input2 = "  †愠‬⁢‽慭⡰湩ⱴ椠灮瑵⤨献汰瑩⤨਩††敤⁦捧⡤ⱡ戠㨩 †††眠楨敬戠਺††††††ⱡ戠㴠戠‬╡੢††††敲畴湲愠 †瀠楲瑮木摣愨戬⤩";

function golfed( input ){

    console.log(`:> original code: \n ${input1} \n` );

    const code = Buffer.from( input1, 'utf8' ).toString('utf16le');

    console.log(`:> code golfed: \n ${code} \n `);

}

function ungolfed( input ){

    console.log(`:> golfed code: \n ${input2} \n` );

    const code = Buffer.from( input2, 'utf16le' ).toString('utf8');

    console.log(`:> code golfed: \n ${code} \n `);

}

(()=>{ 
    console.log("─────────────────────────────");
    golfed( input1 );
    console.log("─────────────────────────────");
    ungolfed( input2 );
    console.log("─────────────────────────────");
})();