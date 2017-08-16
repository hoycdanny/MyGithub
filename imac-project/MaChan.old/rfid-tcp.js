var net = require('net');
var buffer = require('buffer');
var HOST = '192.168.10.10';
var PORT = 8080;
// //var buffer1 = new buffer();
//var buffer2 = new Buffer([]);

var client = new net.Socket();
client.connect(PORT, HOST, function() {

    console.log('CONNECTED TO: ' + HOST + ':' + PORT);

    //Page 13 Reboot
    // const buf1 = new Buffer([ 0xFA,0x5A,
    //                           0x00,0x02,0x00,0x00,
    //                           0x02,
    //                           0x7E,0xA5
    //                         ]);


    //Page Stop
    // const buf1 = new Buffer([ 0xFA,0x5A,
    //                        0x00,0x7A,0x00,0x00,
    //                        0x7A,
    //                        0x7E,0xA5
    //                      ]);


    //Page 209 Run Tag Inventory Command
    const buf2 = new Buffer([ 0xFA,0x5A,
                              0x00,0x6C,0x00,0x00,
                              0x6C,
                              0x7E,0xA5
                            ]);

    //Page 108 Get MAC Version
    //<Buffer fa 5a 01 3a 00 08 00 00 00 00 01 03 01 23 13 7e a5>
    // ０8 Payload
    // 00 00 00 00 正常回復 status
    // 01 03 01 23 13
    // const buf1 = new Buffer([ 0xFA,0x5A,
    //                           0x00,0x3A,0x00,0x00,
    //                           0x3A,
    //                           0x7E,0xA5
    //                         ]);


// START fa 5a
// Message Type (MT): 6c
// Message Code (MC): 00
// Antenna Type ID: 2 Bytes (Refer Table 31):  25 00 01
// Antenna: 4 Bytes : 00 00 00 01
// Timestamp Type ID: 00 02
// Timestamp: 4 Bytes (Unit: ms) 00 05 6f e4
// NB RSSI Type: 00 04
// NB RSSI: 20
// WB RSSI Type: 00 08
// WB RSSI: 59
// RSSI Type: 00 00
// RSSI: 10 30
// Channel Type: 00 12
// Channel Index: 03
// Fast ID Type: 00 03
// TID length:12 02
// TID Data: 00 01
// CRC Valid Flag: 00
// Inventory Length: 12 69
// Inventory Data: 80 1c 30 46
// END 7e a5





    // client.write(buf1);
    client.write(buf2);

});


client.on('data', function(buffer2) {
    console.log(buffer2)
    //console.log(buffer2.toString('ascii').substring(6));

    //client.destroy();

});


client.on('close', function() {
    console.log('Connection closed');
});
