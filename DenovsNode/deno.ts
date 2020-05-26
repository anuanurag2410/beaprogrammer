import {serve} from "https://deno.land/std@0.53.0/http/server.ts"
const server=serve({port:3000})

for await(const req of server)
{
    console.log("Incoming dataa.....")
    req.respond({body:"This is deno body message"});

}

