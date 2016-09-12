 process.stdout.write(23232 + '\n');
 process.stdin.on('data', function(chunk) {
    process.stdin.pause();
    console.log(process.argv)
 });
