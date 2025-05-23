/* Solidification of webserver_async.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"
// compact class 'webserver_async_cnx' ktab size: 76, total: 143 (saved 536 bytes)
static const bvalue be_ktab_class_webserver_async_cnx[76] = {
  /* K0   */  be_nested_str_weak(server),
  /* K1   */  be_nested_str_weak(dispatch),
  /* K2   */  be_nested_str_weak(req_uri),
  /* K3   */  be_nested_str_weak(req_verb),
  /* K4   */  be_nested_str_weak(string),
  /* K5   */  be_nested_str_weak(fromstring),
  /* K6   */  be_nested_str_weak(chunked),
  /* K7   */  be_nested_str_weak(p1),
  /* K8   */  be_nested_str_weak(clear),
  /* K9   */  be_nested_str_weak(append),
  /* K10  */  be_nested_str_weak(_X25X_X0D_X0A),
  /* K11  */  be_nested_str_weak(_X0D_X0A),
  /* K12  */  be_nested_str_weak(_write),
  /* K13  */  be_const_int(0),
  /* K14  */  be_nested_str_weak(buf_out),
  /* K15  */  be_nested_str_weak(resize),
  /* K16  */  be_nested_str_weak(setbytes),
  /* K17  */  be_nested_str_weak(_send),
  /* K18  */  be_nested_str_weak(HTTP_X2F1_X2E1_X20_X25s_X20_X25s_X0D_X0A),
  /* K19  */  be_nested_str_weak(CODE_TO_STRING),
  /* K20  */  be_nested_str_weak(find),
  /* K21  */  be_nested_str_weak(UNKNOWN),
  /* K22  */  be_nested_str_weak(send_header),
  /* K23  */  be_nested_str_weak(Content_X2DType),
  /* K24  */  be_nested_str_weak(text_X2Fhtml),
  /* K25  */  be_nested_str_weak(Accept_X2DRanges),
  /* K26  */  be_nested_str_weak(none),
  /* K27  */  be_nested_str_weak(Transfer_X2DEncoding),
  /* K28  */  be_nested_str_weak(cors),
  /* K29  */  be_nested_str_weak(Access_X2DControl_X2DAllow_X2DOrigin),
  /* K30  */  be_nested_str_weak(_X2A),
  /* K31  */  be_nested_str_weak(Access_X2DControl_X2DAllow_X2DMethods),
  /* K32  */  be_nested_str_weak(Access_X2DControl_X2DAllow_X2DHeaders),
  /* K33  */  be_nested_str_weak(Connection),
  /* K34  */  be_nested_str_weak(close),
  /* K35  */  be_nested_str_weak(resp_headers),
  /* K36  */  be_nested_str_weak(write_raw),
  /* K37  */  be_nested_str_weak(write),
  /* K38  */  be_nested_str_weak(cnx),
  /* K39  */  be_nested_str_weak(buf_in),
  /* K40  */  be_nested_str_weak(),
  /* K41  */  be_nested_str_weak(buf_in_offset),
  /* K42  */  be_nested_str_weak(phase),
  /* K43  */  be_nested_str_weak(close_after_send),
  /* K44  */  be_nested_str_weak(fastloop_cb),
  /* K45  */  be_nested_str_weak(tasmota),
  /* K46  */  be_nested_str_weak(add_fast_loop),
  /* K47  */  be_nested_str_weak(Host),
  /* K48  */  be_nested_str_weak(header_host),
  /* K49  */  be_nested_str_weak(_X25s_X3A_X20_X25s_X0D_X0A_X25s),
  /* K50  */  be_nested_str_weak(_X25s_X25s_X3A_X20_X25s_X0D_X0A),
  /* K51  */  be_nested_str_weak(listening),
  /* K52  */  be_nested_str_weak(connected),
  /* K53  */  be_nested_str_weak(parse_http_req_line),
  /* K54  */  be_const_int(1),
  /* K55  */  be_nested_str_weak(parse_http_headers),
  /* K56  */  be_const_int(2),
  /* K57  */  be_nested_str_weak(parse_http_payload),
  /* K58  */  be_nested_str_weak(remove_fast_loop),
  /* K59  */  be_nested_str_weak(available),
  /* K60  */  be_nested_str_weak(read),
  /* K61  */  be_nested_str_weak(parse),
  /* K62  */  be_nested_str_weak(re),
  /* K63  */  be_nested_str_weak(match2),
  /* K64  */  be_nested_str_weak(re_http_srv_header),
  /* K65  */  be_nested_str_weak(event_http_header),
  /* K66  */  be_nested_str_weak(re_http_srv_body),
  /* K67  */  be_const_int(2147483647),
  /* K68  */  be_nested_str_weak(log),
  /* K69  */  be_nested_str_weak(WEB_X3A_X20error_X20header_X20is_X20bigger_X20than_X201KB),
  /* K70  */  be_nested_str_weak(re_http_srv),
  /* K71  */  be_nested_str_weak(req_version),
  /* K72  */  be_const_int(3),
  /* K73  */  be_nested_str_weak(loglevel),
  /* K74  */  be_nested_str_weak(WEB_X3A_X20HTTP_X20verb_X3A_X20_X25s_X20URI_X3A_X20_X27_X25s_X27_X20Version_X3A_X25s),
  /* K75  */  be_nested_str_weak(WEB_X3A_X20error_X20invalid_X20request),
};


extern const bclass be_class_webserver_async_cnx;

/********************************************************************
** Solidified function: parse_http_payload
********************************************************************/
be_local_closure(class_webserver_async_cnx_parse_http_payload,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(parse_http_payload),
    &be_const_str_solidified,
    ( &(const binstruction[ 7]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x8C040301,  //  0001  GETMET	R1	R1	K1
      0x5C0C0000,  //  0002  MOVE	R3	R0
      0x88100102,  //  0003  GETMBR	R4	R0	K2
      0x88140103,  //  0004  GETMBR	R5	R0	K3
      0x7C040800,  //  0005  CALL	R1	4
      0x80000000,  //  0006  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write
********************************************************************/
be_local_closure(class_webserver_async_cnx_write,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(write),
    &be_const_str_solidified,
    ( &(const binstruction[39]) {  /* code */
      0x60080004,  //  0000  GETGBL	R2	G4
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x1C080504,  //  0003  EQ	R2	R2	K4
      0x780A0005,  //  0004  JMPF	R2	#000B
      0x60080015,  //  0005  GETGBL	R2	G21
      0x7C080000,  //  0006  CALL	R2	0
      0x8C080505,  //  0007  GETMET	R2	R2	K5
      0x5C100200,  //  0008  MOVE	R4	R1
      0x7C080400,  //  0009  CALL	R2	2
      0x5C040400,  //  000A  MOVE	R1	R2
      0x88080106,  //  000B  GETMBR	R2	R0	K6
      0x780A0015,  //  000C  JMPF	R2	#0023
      0x88080100,  //  000D  GETMBR	R2	R0	K0
      0x88080507,  //  000E  GETMBR	R2	R2	K7
      0x8C0C0508,  //  000F  GETMET	R3	R2	K8
      0x7C0C0200,  //  0010  CALL	R3	1
      0x8C0C0509,  //  0011  GETMET	R3	R2	K9
      0x60140018,  //  0012  GETGBL	R5	G24
      0x5818000A,  //  0013  LDCONST	R6	K10
      0x601C000C,  //  0014  GETGBL	R7	G12
      0x5C200200,  //  0015  MOVE	R8	R1
      0x7C1C0200,  //  0016  CALL	R7	1
      0x7C140400,  //  0017  CALL	R5	2
      0x7C0C0400,  //  0018  CALL	R3	2
      0x8C0C0509,  //  0019  GETMET	R3	R2	K9
      0x5C140200,  //  001A  MOVE	R5	R1
      0x7C0C0400,  //  001B  CALL	R3	2
      0x8C0C0509,  //  001C  GETMET	R3	R2	K9
      0x5814000B,  //  001D  LDCONST	R5	K11
      0x7C0C0400,  //  001E  CALL	R3	2
      0x8C0C010C,  //  001F  GETMET	R3	R0	K12
      0x5C140400,  //  0020  MOVE	R5	R2
      0x7C0C0400,  //  0021  CALL	R3	2
      0x70020002,  //  0022  JMP		#0026
      0x8C08010C,  //  0023  GETMET	R2	R0	K12
      0x5C100200,  //  0024  MOVE	R4	R1
      0x7C080400,  //  0025  CALL	R2	2
      0x80000000,  //  0026  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: _write
********************************************************************/
be_local_closure(class_webserver_async_cnx__write,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(_write),
    &be_const_str_solidified,
    ( &(const binstruction[20]) {  /* code */
      0x6008000C,  //  0000  GETGBL	R2	G12
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x1C0C050D,  //  0003  EQ	R3	R2	K13
      0x780E0000,  //  0004  JMPF	R3	#0006
      0x80000600,  //  0005  RET	0
      0x880C010E,  //  0006  GETMBR	R3	R0	K14
      0x6010000C,  //  0007  GETGBL	R4	G12
      0x5C140600,  //  0008  MOVE	R5	R3
      0x7C100200,  //  0009  CALL	R4	1
      0x8C14070F,  //  000A  GETMET	R5	R3	K15
      0x001C0802,  //  000B  ADD	R7	R4	R2
      0x7C140400,  //  000C  CALL	R5	2
      0x8C140710,  //  000D  GETMET	R5	R3	K16
      0x5C1C0800,  //  000E  MOVE	R7	R4
      0x5C200200,  //  000F  MOVE	R8	R1
      0x7C140600,  //  0010  CALL	R5	3
      0x8C140111,  //  0011  GETMET	R5	R0	K17
      0x7C140200,  //  0012  CALL	R5	1
      0x80000000,  //  0013  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send
********************************************************************/
be_local_closure(class_webserver_async_cnx_send,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(send),
    &be_const_str_solidified,
    ( &(const binstruction[59]) {  /* code */
      0x60100018,  //  0000  GETGBL	R4	G24
      0x58140012,  //  0001  LDCONST	R5	K18
      0x5C180200,  //  0002  MOVE	R6	R1
      0x881C0113,  //  0003  GETMBR	R7	R0	K19
      0x8C1C0F14,  //  0004  GETMET	R7	R7	K20
      0x5C240200,  //  0005  MOVE	R9	R1
      0x58280015,  //  0006  LDCONST	R10	K21
      0x7C1C0600,  //  0007  CALL	R7	3
      0x7C100600,  //  0008  CALL	R4	3
      0x8C140116,  //  0009  GETMET	R5	R0	K22
      0x581C0017,  //  000A  LDCONST	R7	K23
      0x780A0001,  //  000B  JMPF	R2	#000E
      0x5C200400,  //  000C  MOVE	R8	R2
      0x70020000,  //  000D  JMP		#000F
      0x58200018,  //  000E  LDCONST	R8	K24
      0x50240200,  //  000F  LDBOOL	R9	1	0
      0x7C140800,  //  0010  CALL	R5	4
      0x8C140116,  //  0011  GETMET	R5	R0	K22
      0x581C0019,  //  0012  LDCONST	R7	K25
      0x5820001A,  //  0013  LDCONST	R8	K26
      0x7C140600,  //  0014  CALL	R5	3
      0x88140106,  //  0015  GETMBR	R5	R0	K6
      0x78160003,  //  0016  JMPF	R5	#001B
      0x8C140116,  //  0017  GETMET	R5	R0	K22
      0x581C001B,  //  0018  LDCONST	R7	K27
      0x58200006,  //  0019  LDCONST	R8	K6
      0x7C140600,  //  001A  CALL	R5	3
      0x88140100,  //  001B  GETMBR	R5	R0	K0
      0x88140B1C,  //  001C  GETMBR	R5	R5	K28
      0x7816000B,  //  001D  JMPF	R5	#002A
      0x8C140116,  //  001E  GETMET	R5	R0	K22
      0x581C001D,  //  001F  LDCONST	R7	K29
      0x5820001E,  //  0020  LDCONST	R8	K30
      0x7C140600,  //  0021  CALL	R5	3
      0x8C140116,  //  0022  GETMET	R5	R0	K22
      0x581C001F,  //  0023  LDCONST	R7	K31
      0x5820001E,  //  0024  LDCONST	R8	K30
      0x7C140600,  //  0025  CALL	R5	3
      0x8C140116,  //  0026  GETMET	R5	R0	K22
      0x581C0020,  //  0027  LDCONST	R7	K32
      0x5820001E,  //  0028  LDCONST	R8	K30
      0x7C140600,  //  0029  CALL	R5	3
      0x8C140116,  //  002A  GETMET	R5	R0	K22
      0x581C0021,  //  002B  LDCONST	R7	K33
      0x58200022,  //  002C  LDCONST	R8	K34
      0x7C140600,  //  002D  CALL	R5	3
      0x88140123,  //  002E  GETMBR	R5	R0	K35
      0x00100805,  //  002F  ADD	R4	R4	R5
      0x0010090B,  //  0030  ADD	R4	R4	K11
      0x4C140000,  //  0031  LDNIL	R5
      0x90024605,  //  0032  SETMBR	R0	K35	R5
      0x8C140124,  //  0033  GETMET	R5	R0	K36
      0x5C1C0800,  //  0034  MOVE	R7	R4
      0x7C140400,  //  0035  CALL	R5	2
      0x780E0002,  //  0036  JMPF	R3	#003A
      0x8C140125,  //  0037  GETMET	R5	R0	K37
      0x5C1C0600,  //  0038  MOVE	R7	R3
      0x7C140400,  //  0039  CALL	R5	2
      0x80000000,  //  003A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_webserver_async_cnx_init,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str_weak(loop),
        }),
        be_str_weak(_anonymous_),
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80000000,  //  0003  RET	0
        })
      ),
    }),
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x90024C02,  //  0001  SETMBR	R0	K38	R2
      0x90024F28,  //  0002  SETMBR	R0	K39	K40
      0x9002530D,  //  0003  SETMBR	R0	K41	K13
      0x600C0015,  //  0004  GETGBL	R3	G21
      0x7C0C0000,  //  0005  CALL	R3	0
      0x90021C03,  //  0006  SETMBR	R0	K14	R3
      0x9002550D,  //  0007  SETMBR	R0	K42	K13
      0x500C0000,  //  0008  LDBOOL	R3	0	0
      0x90025603,  //  0009  SETMBR	R0	K43	R3
      0x90024728,  //  000A  SETMBR	R0	K35	K40
      0x500C0200,  //  000B  LDBOOL	R3	1	0
      0x90020C03,  //  000C  SETMBR	R0	K6	R3
      0x840C0000,  //  000D  CLOSURE	R3	P0
      0x90025803,  //  000E  SETMBR	R0	K44	R3
      0xB80E5A00,  //  000F  GETNGBL	R3	K45
      0x8C0C072E,  //  0010  GETMET	R3	R3	K46
      0x8814012C,  //  0011  GETMBR	R5	R0	K44
      0x7C0C0400,  //  0012  CALL	R3	2
      0xA0000000,  //  0013  CLOSE	R0
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: event_http_header
********************************************************************/
be_local_closure(class_webserver_async_cnx_event_http_header,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(event_http_header),
    &be_const_str_solidified,
    ( &(const binstruction[ 4]) {  /* code */
      0x1C0C032F,  //  0000  EQ	R3	R1	K47
      0x780E0000,  //  0001  JMPF	R3	#0003
      0x90026002,  //  0002  SETMBR	R0	K48	R2
      0x80000000,  //  0003  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: close
********************************************************************/
be_local_closure(class_webserver_async_cnx_close,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(close),
    &be_const_str_solidified,
    ( &(const binstruction[10]) {  /* code */
      0x88040126,  //  0000  GETMBR	R1	R0	K38
      0x4C080000,  //  0001  LDNIL	R2
      0x20040202,  //  0002  NE	R1	R1	R2
      0x78060002,  //  0003  JMPF	R1	#0007
      0x88040126,  //  0004  GETMBR	R1	R0	K38
      0x8C040322,  //  0005  GETMET	R1	R1	K34
      0x7C040200,  //  0006  CALL	R1	1
      0x4C040000,  //  0007  LDNIL	R1
      0x90024C01,  //  0008  SETMBR	R0	K38	R1
      0x80000000,  //  0009  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: send_header
********************************************************************/
be_local_closure(class_webserver_async_cnx_send_header,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(send_header),
    &be_const_str_solidified,
    ( &(const binstruction[17]) {  /* code */
      0x780E0007,  //  0000  JMPF	R3	#0009
      0x60100018,  //  0001  GETGBL	R4	G24
      0x58140031,  //  0002  LDCONST	R5	K49
      0x5C180200,  //  0003  MOVE	R6	R1
      0x5C1C0400,  //  0004  MOVE	R7	R2
      0x88200123,  //  0005  GETMBR	R8	R0	K35
      0x7C100800,  //  0006  CALL	R4	4
      0x90024604,  //  0007  SETMBR	R0	K35	R4
      0x70020006,  //  0008  JMP		#0010
      0x60100018,  //  0009  GETGBL	R4	G24
      0x58140032,  //  000A  LDCONST	R5	K50
      0x88180123,  //  000B  GETMBR	R6	R0	K35
      0x5C1C0200,  //  000C  MOVE	R7	R1
      0x5C200400,  //  000D  MOVE	R8	R2
      0x7C100800,  //  000E  CALL	R4	4
      0x90024604,  //  000F  SETMBR	R0	K35	R4
      0x80000000,  //  0010  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: _send
********************************************************************/
be_local_closure(class_webserver_async_cnx__send,   /* name */
  be_nested_proto(
    9,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(_send),
    &be_const_str_solidified,
    ( &(const binstruction[47]) {  /* code */
      0x88040126,  //  0000  GETMBR	R1	R0	K38
      0x4C080000,  //  0001  LDNIL	R2
      0x1C080202,  //  0002  EQ	R2	R1	R2
      0x780A0000,  //  0003  JMPF	R2	#0005
      0x80000400,  //  0004  RET	0
      0x8808010E,  //  0005  GETMBR	R2	R0	K14
      0x600C000C,  //  0006  GETGBL	R3	G12
      0x5C100400,  //  0007  MOVE	R4	R2
      0x7C0C0200,  //  0008  CALL	R3	1
      0x240C070D,  //  0009  GT	R3	R3	K13
      0x780E001E,  //  000A  JMPF	R3	#002A
      0x8C0C0333,  //  000B  GETMET	R3	R1	K51
      0x7C0C0200,  //  000C  CALL	R3	1
      0x780E001A,  //  000D  JMPF	R3	#0029
      0x8C0C0325,  //  000E  GETMET	R3	R1	K37
      0x5C140400,  //  000F  MOVE	R5	R2
      0x7C0C0400,  //  0010  CALL	R3	2
      0x2410070D,  //  0011  GT	R4	R3	K13
      0x78120015,  //  0012  JMPF	R4	#0029
      0x6010000C,  //  0013  GETGBL	R4	G12
      0x5C140400,  //  0014  MOVE	R5	R2
      0x7C100200,  //  0015  CALL	R4	1
      0x28100604,  //  0016  GE	R4	R3	R4
      0x78120003,  //  0017  JMPF	R4	#001C
      0x8810010E,  //  0018  GETMBR	R4	R0	K14
      0x8C100908,  //  0019  GETMET	R4	R4	K8
      0x7C100200,  //  001A  CALL	R4	1
      0x7002000C,  //  001B  JMP		#0029
      0x8810010E,  //  001C  GETMBR	R4	R0	K14
      0x8C100910,  //  001D  GETMET	R4	R4	K16
      0x5818000D,  //  001E  LDCONST	R6	K13
      0x5C1C0400,  //  001F  MOVE	R7	R2
      0x5C200600,  //  0020  MOVE	R8	R3
      0x7C100800,  //  0021  CALL	R4	4
      0x8810010E,  //  0022  GETMBR	R4	R0	K14
      0x8C10090F,  //  0023  GETMET	R4	R4	K15
      0x6018000C,  //  0024  GETGBL	R6	G12
      0x5C1C0400,  //  0025  MOVE	R7	R2
      0x7C180200,  //  0026  CALL	R6	1
      0x04180C03,  //  0027  SUB	R6	R6	R3
      0x7C100400,  //  0028  CALL	R4	2
      0x70020003,  //  0029  JMP		#002E
      0x880C012B,  //  002A  GETMBR	R3	R0	K43
      0x780E0001,  //  002B  JMPF	R3	#002E
      0x8C0C0122,  //  002C  GETMET	R3	R0	K34
      0x7C0C0200,  //  002D  CALL	R3	1
      0x80000000,  //  002E  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: connected
********************************************************************/
be_local_closure(class_webserver_async_cnx_connected,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(connected),
    &be_const_str_solidified,
    ( &(const binstruction[ 8]) {  /* code */
      0x88040126,  //  0000  GETMBR	R1	R0	K38
      0x78060003,  //  0001  JMPF	R1	#0006
      0x88040126,  //  0002  GETMBR	R1	R0	K38
      0x8C040334,  //  0003  GETMET	R1	R1	K52
      0x7C040200,  //  0004  CALL	R1	1
      0x70020000,  //  0005  JMP		#0007
      0x50040000,  //  0006  LDBOOL	R1	0	0
      0x80040200,  //  0007  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse
********************************************************************/
be_local_closure(class_webserver_async_cnx_parse,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(parse),
    &be_const_str_solidified,
    ( &(const binstruction[18]) {  /* code */
      0x8804012A,  //  0000  GETMBR	R1	R0	K42
      0x1C04030D,  //  0001  EQ	R1	R1	K13
      0x78060002,  //  0002  JMPF	R1	#0006
      0x8C040135,  //  0003  GETMET	R1	R0	K53
      0x7C040200,  //  0004  CALL	R1	1
      0x7002000A,  //  0005  JMP		#0011
      0x8804012A,  //  0006  GETMBR	R1	R0	K42
      0x1C040336,  //  0007  EQ	R1	R1	K54
      0x78060002,  //  0008  JMPF	R1	#000C
      0x8C040137,  //  0009  GETMET	R1	R0	K55
      0x7C040200,  //  000A  CALL	R1	1
      0x70020004,  //  000B  JMP		#0011
      0x8804012A,  //  000C  GETMBR	R1	R0	K42
      0x1C040338,  //  000D  EQ	R1	R1	K56
      0x78060001,  //  000E  JMPF	R1	#0011
      0x8C040139,  //  000F  GETMET	R1	R0	K57
      0x7C040200,  //  0010  CALL	R1	1
      0x80000000,  //  0011  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: loop
********************************************************************/
be_local_closure(class_webserver_async_cnx_loop,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(loop),
    &be_const_str_solidified,
    ( &(const binstruction[36]) {  /* code */
      0x88040126,  //  0000  GETMBR	R1	R0	K38
      0x4C080000,  //  0001  LDNIL	R2
      0x1C040202,  //  0002  EQ	R1	R1	R2
      0x78060006,  //  0003  JMPF	R1	#000B
      0xB8065A00,  //  0004  GETNGBL	R1	K45
      0x8C04033A,  //  0005  GETMET	R1	R1	K58
      0x880C012C,  //  0006  GETMBR	R3	R0	K44
      0x7C040400,  //  0007  CALL	R1	2
      0x4C040000,  //  0008  LDNIL	R1
      0x90025801,  //  0009  SETMBR	R0	K44	R1
      0x80000200,  //  000A  RET	0
      0x8C040111,  //  000B  GETMET	R1	R0	K17
      0x7C040200,  //  000C  CALL	R1	1
      0x88040126,  //  000D  GETMBR	R1	R0	K38
      0x4C080000,  //  000E  LDNIL	R2
      0x1C080202,  //  000F  EQ	R2	R1	R2
      0x780A0000,  //  0010  JMPF	R2	#0012
      0x80000400,  //  0011  RET	0
      0x8C08033B,  //  0012  GETMET	R2	R1	K59
      0x7C080200,  //  0013  CALL	R2	1
      0x2408050D,  //  0014  GT	R2	R2	K13
      0x780A0008,  //  0015  JMPF	R2	#001F
      0x8C08033C,  //  0016  GETMET	R2	R1	K60
      0x7C080200,  //  0017  CALL	R2	1
      0x880C0127,  //  0018  GETMBR	R3	R0	K39
      0x740E0001,  //  0019  JMPT	R3	#001C
      0x90024E02,  //  001A  SETMBR	R0	K39	R2
      0x70020002,  //  001B  JMP		#001F
      0x880C0127,  //  001C  GETMBR	R3	R0	K39
      0x000C0602,  //  001D  ADD	R3	R3	R2
      0x90024E03,  //  001E  SETMBR	R0	K39	R3
      0x88080127,  //  001F  GETMBR	R2	R0	K39
      0x780A0001,  //  0020  JMPF	R2	#0023
      0x8C08013D,  //  0021  GETMET	R2	R0	K61
      0x7C080200,  //  0022  CALL	R2	1
      0x80000000,  //  0023  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: buf_out_empty
********************************************************************/
be_local_closure(class_webserver_async_cnx_buf_out_empty,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(buf_out_empty),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x6004000C,  //  0000  GETGBL	R1	G12
      0x8808010E,  //  0001  GETMBR	R2	R0	K14
      0x7C040200,  //  0002  CALL	R1	1
      0x1C04030D,  //  0003  EQ	R1	R1	K13
      0x80040200,  //  0004  RET	1	R1
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_chunked
********************************************************************/
be_local_closure(class_webserver_async_cnx_set_chunked,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(set_chunked),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x60080017,  //  0000  GETGBL	R2	G23
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x90020C02,  //  0003  SETMBR	R0	K6	R2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_http_headers
********************************************************************/
be_local_closure(class_webserver_async_cnx_parse_http_headers,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(parse_http_headers),
    &be_const_str_solidified,
    ( &(const binstruction[53]) {  /* code */
      0xA4067C00,  //  0000  IMPORT	R1	K62
      0x50080200,  //  0001  LDBOOL	R2	1	0
      0x780A0030,  //  0002  JMPF	R2	#0034
      0x8C08033F,  //  0003  GETMET	R2	R1	K63
      0x88100100,  //  0004  GETMBR	R4	R0	K0
      0x88100940,  //  0005  GETMBR	R4	R4	K64
      0x88140127,  //  0006  GETMBR	R5	R0	K39
      0x88180129,  //  0007  GETMBR	R6	R0	K41
      0x7C080800,  //  0008  CALL	R2	4
      0x780A0008,  //  0009  JMPF	R2	#0013
      0x8C0C0141,  //  000A  GETMET	R3	R0	K65
      0x94140536,  //  000B  GETIDX	R5	R2	K54
      0x94180538,  //  000C  GETIDX	R6	R2	K56
      0x7C0C0600,  //  000D  CALL	R3	3
      0x880C0129,  //  000E  GETMBR	R3	R0	K41
      0x9410050D,  //  000F  GETIDX	R4	R2	K13
      0x000C0604,  //  0010  ADD	R3	R3	R4
      0x90025203,  //  0011  SETMBR	R0	K41	R3
      0x7002001F,  //  0012  JMP		#0033
      0x8C0C033F,  //  0013  GETMET	R3	R1	K63
      0x88140100,  //  0014  GETMBR	R5	R0	K0
      0x88140B42,  //  0015  GETMBR	R5	R5	K66
      0x88180127,  //  0016  GETMBR	R6	R0	K39
      0x881C0129,  //  0017  GETMBR	R7	R0	K41
      0x7C0C0800,  //  0018  CALL	R3	4
      0x780E000A,  //  0019  JMPF	R3	#0025
      0x88100129,  //  001A  GETMBR	R4	R0	K41
      0x9414070D,  //  001B  GETIDX	R5	R3	K13
      0x00100805,  //  001C  ADD	R4	R4	R5
      0x40100943,  //  001D  CONNECT	R4	R4	K67
      0x88140127,  //  001E  GETMBR	R5	R0	K39
      0x94100A04,  //  001F  GETIDX	R4	R5	R4
      0x90024E04,  //  0020  SETMBR	R0	K39	R4
      0x9002530D,  //  0021  SETMBR	R0	K41	K13
      0x90025538,  //  0022  SETMBR	R0	K42	K56
      0x8C100139,  //  0023  GETMET	R4	R0	K57
      0x7C100200,  //  0024  CALL	R4	1
      0x6010000C,  //  0025  GETGBL	R4	G12
      0x88140127,  //  0026  GETMBR	R5	R0	K39
      0x7C100200,  //  0027  CALL	R4	1
      0x541603FF,  //  0028  LDINT	R5	1024
      0x24100805,  //  0029  GT	R4	R4	R5
      0x78120006,  //  002A  JMPF	R4	#0032
      0xB8128800,  //  002B  GETNGBL	R4	K68
      0x58140045,  //  002C  LDCONST	R5	K69
      0x541A0003,  //  002D  LDINT	R6	4
      0x7C100400,  //  002E  CALL	R4	2
      0x8C100122,  //  002F  GETMET	R4	R0	K34
      0x7C100200,  //  0030  CALL	R4	1
      0x90024F28,  //  0031  SETMBR	R0	K39	K40
      0x80000800,  //  0032  RET	0
      0x7001FFCC,  //  0033  JMP		#0001
      0x80000000,  //  0034  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: write_raw
********************************************************************/
be_local_closure(class_webserver_async_cnx_write_raw,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(write_raw),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x6008000C,  //  0000  GETGBL	R2	G12
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x1C08050D,  //  0003  EQ	R2	R2	K13
      0x780A0000,  //  0004  JMPF	R2	#0006
      0x80000400,  //  0005  RET	0
      0x60080004,  //  0006  GETGBL	R2	G4
      0x5C0C0200,  //  0007  MOVE	R3	R1
      0x7C080200,  //  0008  CALL	R2	1
      0x1C080504,  //  0009  EQ	R2	R2	K4
      0x780A0005,  //  000A  JMPF	R2	#0011
      0x60080015,  //  000B  GETGBL	R2	G21
      0x7C080000,  //  000C  CALL	R2	0
      0x8C080505,  //  000D  GETMET	R2	R2	K5
      0x5C100200,  //  000E  MOVE	R4	R1
      0x7C080400,  //  000F  CALL	R2	2
      0x5C040400,  //  0010  MOVE	R1	R2
      0x8C08010C,  //  0011  GETMET	R2	R0	K12
      0x5C100200,  //  0012  MOVE	R4	R1
      0x7C080400,  //  0013  CALL	R2	2
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: content_stop
********************************************************************/
be_local_closure(class_webserver_async_cnx_content_stop,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(content_stop),
    &be_const_str_solidified,
    ( &(const binstruction[ 6]) {  /* code */
      0x8C040125,  //  0000  GETMET	R1	R0	K37
      0x580C0028,  //  0001  LDCONST	R3	K40
      0x7C040400,  //  0002  CALL	R1	2
      0x50040200,  //  0003  LDBOOL	R1	1	0
      0x90025601,  //  0004  SETMBR	R0	K43	R1
      0x80000000,  //  0005  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: parse_http_req_line
********************************************************************/
be_local_closure(class_webserver_async_cnx_parse_http_req_line,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_cnx,     /* shared constants */
    be_str_weak(parse_http_req_line),
    &be_const_str_solidified,
    ( &(const binstruction[51]) {  /* code */
      0xA4067C00,  //  0000  IMPORT	R1	K62
      0x8C08033F,  //  0001  GETMET	R2	R1	K63
      0x88100100,  //  0002  GETMBR	R4	R0	K0
      0x88100946,  //  0003  GETMBR	R4	R4	K70
      0x88140127,  //  0004  GETMBR	R5	R0	K39
      0x88180129,  //  0005  GETMBR	R6	R0	K41
      0x7C080800,  //  0006  CALL	R2	4
      0x780A001C,  //  0007  JMPF	R2	#0025
      0x940C050D,  //  0008  GETIDX	R3	R2	K13
      0x94100536,  //  0009  GETIDX	R4	R2	K54
      0x90020604,  //  000A  SETMBR	R0	K3	R4
      0x94100538,  //  000B  GETIDX	R4	R2	K56
      0x90020404,  //  000C  SETMBR	R0	K2	R4
      0x94100548,  //  000D  GETIDX	R4	R2	K72
      0x90028E04,  //  000E  SETMBR	R0	K71	R4
      0x90025536,  //  000F  SETMBR	R0	K42	K54
      0x40100743,  //  0010  CONNECT	R4	R3	K67
      0x88140127,  //  0011  GETMBR	R5	R0	K39
      0x94100A04,  //  0012  GETIDX	R4	R5	R4
      0x90024E04,  //  0013  SETMBR	R0	K39	R4
      0xB8125A00,  //  0014  GETNGBL	R4	K45
      0x8C100949,  //  0015  GETMET	R4	R4	K73
      0x541A0003,  //  0016  LDINT	R6	4
      0x7C100400,  //  0017  CALL	R4	2
      0x78120008,  //  0018  JMPF	R4	#0022
      0xB8128800,  //  0019  GETNGBL	R4	K68
      0x60140018,  //  001A  GETGBL	R5	G24
      0x5818004A,  //  001B  LDCONST	R6	K74
      0x881C0103,  //  001C  GETMBR	R7	R0	K3
      0x88200102,  //  001D  GETMBR	R8	R0	K2
      0x88240147,  //  001E  GETMBR	R9	R0	K71
      0x7C140800,  //  001F  CALL	R5	4
      0x541A0003,  //  0020  LDINT	R6	4
      0x7C100400,  //  0021  CALL	R4	2
      0x8C100137,  //  0022  GETMET	R4	R0	K55
      0x7C100200,  //  0023  CALL	R4	1
      0x7002000C,  //  0024  JMP		#0032
      0x600C000C,  //  0025  GETGBL	R3	G12
      0x88100127,  //  0026  GETMBR	R4	R0	K39
      0x7C0C0200,  //  0027  CALL	R3	1
      0x54120063,  //  0028  LDINT	R4	100
      0x240C0604,  //  0029  GT	R3	R3	R4
      0x780E0006,  //  002A  JMPF	R3	#0032
      0xB80E8800,  //  002B  GETNGBL	R3	K68
      0x5810004B,  //  002C  LDCONST	R4	K75
      0x54160003,  //  002D  LDINT	R5	4
      0x7C0C0400,  //  002E  CALL	R3	2
      0x8C0C0122,  //  002F  GETMET	R3	R0	K34
      0x7C0C0200,  //  0030  CALL	R3	1
      0x90024F28,  //  0031  SETMBR	R0	K39	K40
      0x80000000,  //  0032  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: webserver_async_cnx
********************************************************************/
be_local_class(webserver_async_cnx,
    14,
    NULL,
    be_nested_map(33,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(chunked, 20), be_const_var(13) },
        { be_const_key_weak(parse_http_payload, 31), be_const_closure(class_webserver_async_cnx_parse_http_payload_closure) },
        { be_const_key_weak(write, 5), be_const_closure(class_webserver_async_cnx_write_closure) },
        { be_const_key_weak(phase, 32), be_const_var(7) },
        { be_const_key_weak(_write, -1), be_const_closure(class_webserver_async_cnx__write_closure) },
        { be_const_key_weak(parse_http_req_line, 25), be_const_closure(class_webserver_async_cnx_parse_http_req_line_closure) },
        { be_const_key_weak(server, -1), be_const_var(0) },
        { be_const_key_weak(send, 27), be_const_closure(class_webserver_async_cnx_send_closure) },
        { be_const_key_weak(content_stop, -1), be_const_closure(class_webserver_async_cnx_content_stop_closure) },
        { be_const_key_weak(init, -1), be_const_closure(class_webserver_async_cnx_init_closure) },
        { be_const_key_weak(_send, -1), be_const_closure(class_webserver_async_cnx__send_closure) },
        { be_const_key_weak(event_http_header, -1), be_const_closure(class_webserver_async_cnx_event_http_header_closure) },
        { be_const_key_weak(close, -1), be_const_closure(class_webserver_async_cnx_close_closure) },
        { be_const_key_weak(req_uri, 21), be_const_var(9) },
        { be_const_key_weak(buf_in, -1), be_const_var(4) },
        { be_const_key_weak(req_version, 22), be_const_var(10) },
        { be_const_key_weak(resp_headers, -1), be_const_var(12) },
        { be_const_key_weak(close_after_send, 14), be_const_var(2) },
        { be_const_key_weak(cnx, -1), be_const_var(1) },
        { be_const_key_weak(parse, 8), be_const_closure(class_webserver_async_cnx_parse_closure) },
        { be_const_key_weak(CODE_TO_STRING, -1), be_const_simple_instance(be_nested_simple_instance(&be_class_map, {
        be_const_map( *     be_nested_map(4,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_int(200, 2), be_nested_str_weak(OK) },
        { be_const_key_int(301, -1), be_nested_str_weak(Moved_X20Permanently) },
        { be_const_key_int(404, 3), be_nested_str_weak(Not_X20Found) },
        { be_const_key_int(500, -1), be_nested_str_weak(Internal_X20Server_X20Error) },
    }))    ) } )) },
        { be_const_key_weak(buf_out_empty, 10), be_const_closure(class_webserver_async_cnx_buf_out_empty_closure) },
        { be_const_key_weak(loop, -1), be_const_closure(class_webserver_async_cnx_loop_closure) },
        { be_const_key_weak(buf_out, -1), be_const_var(6) },
        { be_const_key_weak(req_verb, 18), be_const_var(8) },
        { be_const_key_weak(buf_in_offset, -1), be_const_var(5) },
        { be_const_key_weak(set_chunked, -1), be_const_closure(class_webserver_async_cnx_set_chunked_closure) },
        { be_const_key_weak(connected, -1), be_const_closure(class_webserver_async_cnx_connected_closure) },
        { be_const_key_weak(parse_http_headers, -1), be_const_closure(class_webserver_async_cnx_parse_http_headers_closure) },
        { be_const_key_weak(fastloop_cb, 13), be_const_var(3) },
        { be_const_key_weak(write_raw, -1), be_const_closure(class_webserver_async_cnx_write_raw_closure) },
        { be_const_key_weak(send_header, -1), be_const_closure(class_webserver_async_cnx_send_header_closure) },
        { be_const_key_weak(header_host, -1), be_const_var(11) },
    })),
    be_str_weak(webserver_async_cnx)
);
// compact class 'webserver_async_dispatcher' ktab size: 7, total: 11 (saved 32 bytes)
static const bvalue be_ktab_class_webserver_async_dispatcher[7] = {
  /* K0   */  be_nested_str_weak(string),
  /* K1   */  be_nested_str_weak(find),
  /* K2   */  be_nested_str_weak(uri_prefix),
  /* K3   */  be_const_int(0),
  /* K4   */  be_nested_str_weak(verb),
  /* K5   */  be_nested_str_weak(cb_obj),
  /* K6   */  be_nested_str_weak(cb_mth),
};


extern const bclass be_class_webserver_async_dispatcher;

/********************************************************************
** Solidified function: dispatch
********************************************************************/
be_local_closure(class_webserver_async_dispatcher_dispatch,   /* name */
  be_nested_proto(
    13,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_dispatcher,     /* shared constants */
    be_str_weak(dispatch),
    &be_const_str_solidified,
    ( &(const binstruction[35]) {  /* code */
      0xA4120000,  //  0000  IMPORT	R4	K0
      0x8C140901,  //  0001  GETMET	R5	R4	K1
      0x5C1C0400,  //  0002  MOVE	R7	R2
      0x88200102,  //  0003  GETMBR	R8	R0	K2
      0x7C140600,  //  0004  CALL	R5	3
      0x1C140B03,  //  0005  EQ	R5	R5	K3
      0x78160019,  //  0006  JMPF	R5	#0021
      0x50140000,  //  0007  LDBOOL	R5	0	0
      0x88180104,  //  0008  GETMBR	R6	R0	K4
      0x4C1C0000,  //  0009  LDNIL	R7
      0x1C180C07,  //  000A  EQ	R6	R6	R7
      0x741A0002,  //  000B  JMPT	R6	#000F
      0x88180104,  //  000C  GETMBR	R6	R0	K4
      0x1C180C03,  //  000D  EQ	R6	R6	R3
      0x781A0011,  //  000E  JMPF	R6	#0021
      0x88180105,  //  000F  GETMBR	R6	R0	K5
      0x4C1C0000,  //  0010  LDNIL	R7
      0x201C0C07,  //  0011  NE	R7	R6	R7
      0x781E0006,  //  0012  JMPF	R7	#001A
      0x8C1C0106,  //  0013  GETMET	R7	R0	K6
      0x88240105,  //  0014  GETMBR	R9	R0	K5
      0x5C280200,  //  0015  MOVE	R10	R1
      0x5C2C0400,  //  0016  MOVE	R11	R2
      0x5C300600,  //  0017  MOVE	R12	R3
      0x7C1C0A00,  //  0018  CALL	R7	5
      0x70020004,  //  0019  JMP		#001F
      0x8C1C0106,  //  001A  GETMET	R7	R0	K6
      0x5C240200,  //  001B  MOVE	R9	R1
      0x5C280400,  //  001C  MOVE	R10	R2
      0x5C2C0600,  //  001D  MOVE	R11	R3
      0x7C1C0800,  //  001E  CALL	R7	4
      0x501C0200,  //  001F  LDBOOL	R7	1	0
      0x80040E00,  //  0020  RET	1	R7
      0x50140000,  //  0021  LDBOOL	R5	0	0
      0x80040A00,  //  0022  RET	1	R5
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_webserver_async_dispatcher_init,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async_dispatcher,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x90020401,  //  0000  SETMBR	R0	K2	R1
      0x90020A02,  //  0001  SETMBR	R0	K5	R2
      0x90020C03,  //  0002  SETMBR	R0	K6	R3
      0x90020804,  //  0003  SETMBR	R0	K4	R4
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: webserver_async_dispatcher
********************************************************************/
be_local_class(webserver_async_dispatcher,
    4,
    NULL,
    be_nested_map(6,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(verb, 4), be_const_var(1) },
        { be_const_key_weak(init, -1), be_const_closure(class_webserver_async_dispatcher_init_closure) },
        { be_const_key_weak(uri_prefix, -1), be_const_var(0) },
        { be_const_key_weak(dispatch, 1), be_const_closure(class_webserver_async_dispatcher_dispatch_closure) },
        { be_const_key_weak(cb_obj, 5), be_const_var(2) },
        { be_const_key_weak(cb_mth, -1), be_const_var(3) },
    })),
    be_str_weak(webserver_async_dispatcher)
);
extern const bclass be_class_webserver_async;
// compact class 'webserver_async' ktab size: 37, total: 60 (saved 184 bytes)
static const bvalue be_ktab_class_webserver_async[37] = {
  /* K0   */  be_nested_str_weak(clean_connections),
  /* K1   */  be_nested_str_weak(server),
  /* K2   */  be_nested_str_weak(hasclient),
  /* K3   */  be_nested_str_weak(webserver_async_cnx),
  /* K4   */  be_nested_str_weak(acceptasync),
  /* K5   */  be_nested_str_weak(set_chunked),
  /* K6   */  be_nested_str_weak(chunked),
  /* K7   */  be_nested_str_weak(connections),
  /* K8   */  be_nested_str_weak(push),
  /* K9   */  be_nested_str_weak(cors),
  /* K10  */  be_const_class(be_class_webserver_async),
  /* K11  */  be_nested_str_weak(clear),
  /* K12  */  be_const_int(0),
  /* K13  */  be_nested_str_weak(resize),
  /* K14  */  be_const_int(1),
  /* K15  */  be_nested_str_weak(reverse),
  /* K16  */  be_nested_str_weak(connected),
  /* K17  */  be_nested_str_weak(close),
  /* K18  */  be_nested_str_weak(remove),
  /* K19  */  be_nested_str_weak(webserver_async_dispatcher),
  /* K20  */  be_nested_str_weak(dispatchers),
  /* K21  */  be_nested_str_weak(tasmota),
  /* K22  */  be_nested_str_weak(remove_driver),
  /* K23  */  be_nested_str_weak(remove_fast_loop),
  /* K24  */  be_nested_str_weak(fastloop_cb),
  /* K25  */  be_nested_str_weak(stop_iteration),
  /* K26  */  be_nested_str_weak(dispatch),
  /* K27  */  be_nested_str_weak(send),
  /* K28  */  be_nested_str_weak(text_X2Fplain),
  /* K29  */  be_nested_str_weak(write),
  /* K30  */  be_nested_str_weak(Unsupported),
  /* K31  */  be_nested_str_weak(content_stop),
  /* K32  */  be_nested_str_weak(tcpserver),
  /* K33  */  be_nested_str_weak(p1),
  /* K34  */  be_nested_str_weak(add_driver),
  /* K35  */  be_nested_str_weak(add_fast_loop),
  /* K36  */  be_nested_str_weak(append),
};


extern const bclass be_class_webserver_async;

/********************************************************************
** Solidified function: loop
********************************************************************/
be_local_closure(class_webserver_async_loop,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(loop),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x8C040100,  //  0000  GETMET	R1	R0	K0
      0x7C040200,  //  0001  CALL	R1	1
      0x88040101,  //  0002  GETMBR	R1	R0	K1
      0x8C040302,  //  0003  GETMET	R1	R1	K2
      0x7C040200,  //  0004  CALL	R1	1
      0x7806000D,  //  0005  JMPF	R1	#0014
      0x8C040103,  //  0006  GETMET	R1	R0	K3
      0x5C0C0000,  //  0007  MOVE	R3	R0
      0x88100101,  //  0008  GETMBR	R4	R0	K1
      0x8C100904,  //  0009  GETMET	R4	R4	K4
      0x7C100200,  //  000A  CALL	R4	1
      0x7C040600,  //  000B  CALL	R1	3
      0x8C080305,  //  000C  GETMET	R2	R1	K5
      0x88100106,  //  000D  GETMBR	R4	R0	K6
      0x7C080400,  //  000E  CALL	R2	2
      0x88080107,  //  000F  GETMBR	R2	R0	K7
      0x8C080508,  //  0010  GETMET	R2	R2	K8
      0x5C100200,  //  0011  MOVE	R4	R1
      0x7C080400,  //  0012  CALL	R2	2
      0x7001FFED,  //  0013  JMP		#0002
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_cors
********************************************************************/
be_local_closure(class_webserver_async_set_cors,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(set_cors),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x60080017,  //  0000  GETGBL	R2	G23
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x90021202,  //  0003  SETMBR	R0	K9	R2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: bytes_format_hex
********************************************************************/
be_local_closure(class_webserver_async_bytes_format_hex,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    3,                          /* argc */
    12,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(bytes_format_hex),
    &be_const_str_solidified,
    ( &(const binstruction[50]) {  /* code */
      0x580C000A,  //  0000  LDCONST	R3	K10
      0x8C10010B,  //  0001  GETMET	R4	R0	K11
      0x7C100200,  //  0002  CALL	R4	1
      0x4C100000,  //  0003  LDNIL	R4
      0x1C100204,  //  0004  EQ	R4	R1	R4
      0x78120001,  //  0005  JMPF	R4	#0008
      0x40100002,  //  0006  CONNECT	R4	R0	R2
      0x80000800,  //  0007  RET	0
      0x1410030C,  //  0008  LT	R4	R1	K12
      0x78120000,  //  0009  JMPF	R4	#000B
      0x44040200,  //  000A  NEG	R1	R1
      0x1410030C,  //  000B  LT	R4	R1	K12
      0x78120000,  //  000C  JMPF	R4	#000E
      0x80000800,  //  000D  RET	0
      0x1C10030C,  //  000E  EQ	R4	R1	K12
      0x78120005,  //  000F  JMPF	R4	#0016
      0x8C10010D,  //  0010  GETMET	R4	R0	K13
      0x5818000E,  //  0011  LDCONST	R6	K14
      0x7C100400,  //  0012  CALL	R4	2
      0x5412002F,  //  0013  LDINT	R4	48
      0x98021804,  //  0014  SETIDX	R0	K12	R4
      0x80000800,  //  0015  RET	0
      0x8C10010D,  //  0016  GETMET	R4	R0	K13
      0x541A0007,  //  0017  LDINT	R6	8
      0x7C100400,  //  0018  CALL	R4	2
      0x5810000C,  //  0019  LDCONST	R4	K12
      0x2414030C,  //  001A  GT	R5	R1	K12
      0x7816000F,  //  001B  JMPF	R5	#002C
      0x5416000E,  //  001C  LDINT	R5	15
      0x2C140205,  //  001D  AND	R5	R1	R5
      0x541A0009,  //  001E  LDINT	R6	10
      0x14180A06,  //  001F  LT	R6	R5	R6
      0x781A0003,  //  0020  JMPF	R6	#0025
      0x541A002F,  //  0021  LDINT	R6	48
      0x00180C05,  //  0022  ADD	R6	R6	R5
      0x98000806,  //  0023  SETIDX	R0	R4	R6
      0x70020002,  //  0024  JMP		#0028
      0x541A0036,  //  0025  LDINT	R6	55
      0x00180C05,  //  0026  ADD	R6	R6	R5
      0x98000806,  //  0027  SETIDX	R0	R4	R6
      0x0010090E,  //  0028  ADD	R4	R4	K14
      0x541A0003,  //  0029  LDINT	R6	4
      0x3C040206,  //  002A  SHR	R1	R1	R6
      0x7001FFED,  //  002B  JMP		#001A
      0x8C14010D,  //  002C  GETMET	R5	R0	K13
      0x5C1C0800,  //  002D  MOVE	R7	R4
      0x7C140400,  //  002E  CALL	R5	2
      0x8C14010F,  //  002F  GETMET	R5	R0	K15
      0x7C140200,  //  0030  CALL	R5	1
      0x80000000,  //  0031  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: clean_connections
********************************************************************/
be_local_closure(class_webserver_async_clean_connections,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(clean_connections),
    &be_const_str_solidified,
    ( &(const binstruction[21]) {  /* code */
      0x5804000C,  //  0000  LDCONST	R1	K12
      0x6008000C,  //  0001  GETGBL	R2	G12
      0x880C0107,  //  0002  GETMBR	R3	R0	K7
      0x7C080200,  //  0003  CALL	R2	1
      0x14080202,  //  0004  LT	R2	R1	R2
      0x780A000D,  //  0005  JMPF	R2	#0014
      0x88080107,  //  0006  GETMBR	R2	R0	K7
      0x94080401,  //  0007  GETIDX	R2	R2	R1
      0x8C0C0510,  //  0008  GETMET	R3	R2	K16
      0x7C0C0200,  //  0009  CALL	R3	1
      0x740E0006,  //  000A  JMPT	R3	#0012
      0x8C0C0511,  //  000B  GETMET	R3	R2	K17
      0x7C0C0200,  //  000C  CALL	R3	1
      0x880C0107,  //  000D  GETMBR	R3	R0	K7
      0x8C0C0712,  //  000E  GETMET	R3	R3	K18
      0x5C140200,  //  000F  MOVE	R5	R1
      0x7C0C0400,  //  0010  CALL	R3	2
      0x70020000,  //  0011  JMP		#0013
      0x0004030E,  //  0012  ADD	R1	R1	K14
      0x7001FFEC,  //  0013  JMP		#0001
      0x80000000,  //  0014  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: on
********************************************************************/
be_local_closure(class_webserver_async_on,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    5,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(on),
    &be_const_str_solidified,
    ( &(const binstruction[11]) {  /* code */
      0x8C140113,  //  0000  GETMET	R5	R0	K19
      0x5C1C0200,  //  0001  MOVE	R7	R1
      0x5C200400,  //  0002  MOVE	R8	R2
      0x5C240600,  //  0003  MOVE	R9	R3
      0x5C280800,  //  0004  MOVE	R10	R4
      0x7C140A00,  //  0005  CALL	R5	5
      0x88180114,  //  0006  GETMBR	R6	R0	K20
      0x8C180D08,  //  0007  GETMET	R6	R6	K8
      0x5C200A00,  //  0008  MOVE	R8	R5
      0x7C180400,  //  0009  CALL	R6	2
      0x80000000,  //  000A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: close
********************************************************************/
be_local_closure(class_webserver_async_close,   /* name */
  be_nested_proto(
    5,                          /* nstack */
    1,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(close),
    &be_const_str_solidified,
    ( &(const binstruction[28]) {  /* code */
      0xB8062A00,  //  0000  GETNGBL	R1	K21
      0x8C040316,  //  0001  GETMET	R1	R1	K22
      0x5C0C0000,  //  0002  MOVE	R3	R0
      0x7C040400,  //  0003  CALL	R1	2
      0xB8062A00,  //  0004  GETNGBL	R1	K21
      0x8C040317,  //  0005  GETMET	R1	R1	K23
      0x880C0118,  //  0006  GETMBR	R3	R0	K24
      0x7C040400,  //  0007  CALL	R1	2
      0x4C040000,  //  0008  LDNIL	R1
      0x90023001,  //  0009  SETMBR	R0	K24	R1
      0x88040101,  //  000A  GETMBR	R1	R0	K1
      0x8C040311,  //  000B  GETMET	R1	R1	K17
      0x7C040200,  //  000C  CALL	R1	1
      0x60040010,  //  000D  GETGBL	R1	G16
      0x88080107,  //  000E  GETMBR	R2	R0	K7
      0x7C040200,  //  000F  CALL	R1	1
      0xA8020004,  //  0010  EXBLK	0	#0016
      0x5C080200,  //  0011  MOVE	R2	R1
      0x7C080000,  //  0012  CALL	R2	0
      0x8C0C0511,  //  0013  GETMET	R3	R2	K17
      0x7C0C0200,  //  0014  CALL	R3	1
      0x7001FFFA,  //  0015  JMP		#0011
      0x58040019,  //  0016  LDCONST	R1	K25
      0xAC040200,  //  0017  CATCH	R1	1	0
      0xB0080000,  //  0018  RAISE	2	R0	R0
      0x4C040000,  //  0019  LDNIL	R1
      0x90020E01,  //  001A  SETMBR	R0	K7	R1
      0x80000000,  //  001B  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: dispatch
********************************************************************/
be_local_closure(class_webserver_async_dispatch,   /* name */
  be_nested_proto(
    10,                          /* nstack */
    4,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(dispatch),
    &be_const_str_solidified,
    ( &(const binstruction[27]) {  /* code */
      0x5810000C,  //  0000  LDCONST	R4	K12
      0x6014000C,  //  0001  GETGBL	R5	G12
      0x88180114,  //  0002  GETMBR	R6	R0	K20
      0x7C140200,  //  0003  CALL	R5	1
      0x14140805,  //  0004  LT	R5	R4	R5
      0x7816000A,  //  0005  JMPF	R5	#0011
      0x88140114,  //  0006  GETMBR	R5	R0	K20
      0x94140A04,  //  0007  GETIDX	R5	R5	R4
      0x8C140B1A,  //  0008  GETMET	R5	R5	K26
      0x5C1C0200,  //  0009  MOVE	R7	R1
      0x5C200400,  //  000A  MOVE	R8	R2
      0x5C240600,  //  000B  MOVE	R9	R3
      0x7C140800,  //  000C  CALL	R5	4
      0x78160000,  //  000D  JMPF	R5	#000F
      0x80000A00,  //  000E  RET	0
      0x0010090E,  //  000F  ADD	R4	R4	K14
      0x7001FFEF,  //  0010  JMP		#0001
      0x8C14031B,  //  0011  GETMET	R5	R1	K27
      0x541E01F3,  //  0012  LDINT	R7	500
      0x5820001C,  //  0013  LDCONST	R8	K28
      0x7C140600,  //  0014  CALL	R5	3
      0x8C14031D,  //  0015  GETMET	R5	R1	K29
      0x581C001E,  //  0016  LDCONST	R7	K30
      0x7C140400,  //  0017  CALL	R5	2
      0x8C14031F,  //  0018  GETMET	R5	R1	K31
      0x7C140200,  //  0019  CALL	R5	1
      0x80000000,  //  001A  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: set_chunked
********************************************************************/
be_local_closure(class_webserver_async_set_chunked,   /* name */
  be_nested_proto(
    4,                          /* nstack */
    2,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(set_chunked),
    &be_const_str_solidified,
    ( &(const binstruction[ 5]) {  /* code */
      0x60080017,  //  0000  GETGBL	R2	G23
      0x5C0C0200,  //  0001  MOVE	R3	R1
      0x7C080200,  //  0002  CALL	R2	1
      0x90020C02,  //  0003  SETMBR	R0	K6	R2
      0x80000000,  //  0004  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(class_webserver_async_init,   /* name */
  be_nested_proto(
    6,                          /* nstack */
    3,                          /* argc */
    10,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    1,                          /* has sup protos */
    ( &(const struct bproto*[ 1]) {
      be_nested_proto(
        2,                          /* nstack */
        0,                          /* argc */
        0,                          /* varg */
        1,                          /* has upvals */
        ( &(const bupvaldesc[ 1]) {  /* upvals */
          be_local_const_upval(1, 0),
        }),
        0,                          /* has sup protos */
        NULL,                       /* no sub protos */
        1,                          /* has constants */
        ( &(const bvalue[ 1]) {     /* constants */
        /* K0   */  be_nested_str_weak(loop),
        }),
        be_str_weak(_anonymous_),
        &be_const_str_solidified,
        ( &(const binstruction[ 4]) {  /* code */
          0x68000000,  //  0000  GETUPV	R0	U0
          0x8C000100,  //  0001  GETMET	R0	R0	K0
          0x7C000200,  //  0002  CALL	R0	1
          0x80000000,  //  0003  RET	0
        })
      ),
    }),
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[30]) {  /* code */
      0x600C0012,  //  0000  GETGBL	R3	G18
      0x7C0C0000,  //  0001  CALL	R3	0
      0x90020E03,  //  0002  SETMBR	R0	K7	R3
      0x600C0012,  //  0003  GETGBL	R3	G18
      0x7C0C0000,  //  0004  CALL	R3	0
      0x90022803,  //  0005  SETMBR	R0	K20	R3
      0xB80E4000,  //  0006  GETNGBL	R3	K32
      0x5C100200,  //  0007  MOVE	R4	R1
      0x7C0C0200,  //  0008  CALL	R3	1
      0x90020203,  //  0009  SETMBR	R0	K1	R3
      0x500C0200,  //  000A  LDBOOL	R3	1	0
      0x90020C03,  //  000B  SETMBR	R0	K6	R3
      0x500C0000,  //  000C  LDBOOL	R3	0	0
      0x90021203,  //  000D  SETMBR	R0	K9	R3
      0x600C0015,  //  000E  GETGBL	R3	G21
      0x54120063,  //  000F  LDINT	R4	100
      0x7C0C0200,  //  0010  CALL	R3	1
      0x90024203,  //  0011  SETMBR	R0	K33	R3
      0xB80E2A00,  //  0012  GETNGBL	R3	K21
      0x8C0C0722,  //  0013  GETMET	R3	R3	K34
      0x5C140000,  //  0014  MOVE	R5	R0
      0x7C0C0400,  //  0015  CALL	R3	2
      0x840C0000,  //  0016  CLOSURE	R3	P0
      0x90023003,  //  0017  SETMBR	R0	K24	R3
      0xB80E2A00,  //  0018  GETNGBL	R3	K21
      0x8C0C0723,  //  0019  GETMET	R3	R3	K35
      0x88140118,  //  001A  GETMBR	R5	R0	K24
      0x7C0C0400,  //  001B  CALL	R3	2
      0xA0000000,  //  001C  CLOSE	R0
      0x80000000,  //  001D  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: bytes_append_int
********************************************************************/
be_local_closure(class_webserver_async_bytes_append_int,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    3,                          /* argc */
    12,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    &be_ktab_class_webserver_async,     /* shared constants */
    be_str_weak(bytes_append_int),
    &be_const_str_solidified,
    ( &(const binstruction[53]) {  /* code */
      0x580C000A,  //  0000  LDCONST	R3	K10
      0x6010000C,  //  0001  GETGBL	R4	G12
      0x5C140000,  //  0002  MOVE	R5	R0
      0x7C100200,  //  0003  CALL	R4	1
      0x1C14030C,  //  0004  EQ	R5	R1	K12
      0x78160005,  //  0005  JMPF	R5	#000C
      0x8C14010D,  //  0006  GETMET	R5	R0	K13
      0x001C090E,  //  0007  ADD	R7	R4	K14
      0x7C140400,  //  0008  CALL	R5	2
      0x5416002F,  //  0009  LDINT	R5	48
      0x98000805,  //  000A  SETIDX	R0	R4	R5
      0x70020027,  //  000B  JMP		#0034
      0x4C140000,  //  000C  LDNIL	R5
      0x20140205,  //  000D  NE	R5	R1	R5
      0x78160021,  //  000E  JMPF	R5	#0031
      0x50140000,  //  000F  LDBOOL	R5	0	0
      0x1418030C,  //  0010  LT	R6	R1	K12
      0x781A0001,  //  0011  JMPF	R6	#0014
      0x44040200,  //  0012  NEG	R1	R1
      0x50140200,  //  0013  LDBOOL	R5	1	0
      0x1418030C,  //  0014  LT	R6	R1	K12
      0x781A0000,  //  0015  JMPF	R6	#0017
      0x80040000,  //  0016  RET	1	R0
      0x78160005,  //  0017  JMPF	R5	#001E
      0x8C18010D,  //  0018  GETMET	R6	R0	K13
      0x0020090E,  //  0019  ADD	R8	R4	K14
      0x7C180400,  //  001A  CALL	R6	2
      0x541A002C,  //  001B  LDINT	R6	45
      0x98000806,  //  001C  SETIDX	R0	R4	R6
      0x0010090E,  //  001D  ADD	R4	R4	K14
      0x5C180800,  //  001E  MOVE	R6	R4
      0x241C030C,  //  001F  GT	R7	R1	K12
      0x781E000B,  //  0020  JMPF	R7	#002D
      0x541E0009,  //  0021  LDINT	R7	10
      0x101C0207,  //  0022  MOD	R7	R1	R7
      0x8C20010D,  //  0023  GETMET	R8	R0	K13
      0x0028090E,  //  0024  ADD	R10	R4	K14
      0x7C200400,  //  0025  CALL	R8	2
      0x5422002F,  //  0026  LDINT	R8	48
      0x00201007,  //  0027  ADD	R8	R8	R7
      0x98000808,  //  0028  SETIDX	R0	R4	R8
      0x0010090E,  //  0029  ADD	R4	R4	K14
      0x54220009,  //  002A  LDINT	R8	10
      0x0C040208,  //  002B  DIV	R1	R1	R8
      0x7001FFF1,  //  002C  JMP		#001F
      0x8C1C010F,  //  002D  GETMET	R7	R0	K15
      0x5C240C00,  //  002E  MOVE	R9	R6
      0x7C1C0400,  //  002F  CALL	R7	2
      0x70020002,  //  0030  JMP		#0034
      0x8C140124,  //  0031  GETMET	R5	R0	K36
      0x5C1C0400,  //  0032  MOVE	R7	R2
      0x7C140400,  //  0033  CALL	R5	2
      0x80040000,  //  0034  RET	1	R0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: webserver_async
********************************************************************/
be_local_class(webserver_async,
    8,
    NULL,
    be_nested_map(23,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(loop, 22), be_const_closure(class_webserver_async_loop_closure) },
        { be_const_key_weak(chunked, -1), be_const_var(5) },
        { be_const_key_weak(dispatchers, -1), be_const_var(4) },
        { be_const_key_weak(webserver_async_dispatcher, -1), be_const_class(be_class_webserver_async_dispatcher) },
        { be_const_key_weak(dispatch, -1), be_const_closure(class_webserver_async_dispatch_closure) },
        { be_const_key_weak(cors, -1), be_const_var(6) },
        { be_const_key_weak(clean_connections, 1), be_const_closure(class_webserver_async_clean_connections_closure) },
        { be_const_key_weak(re_http_srv, -1), be_const_bytes_instance(370000001D0000000300000062030260FB7E00507E02057762FC7E0301207E04055362FC7E0501200148015401540150012F7E060564012E05647E07010D010A7E017F) },
        { be_const_key_weak(set_chunked, -1), be_const_closure(class_webserver_async_set_chunked_closure) },
        { be_const_key_weak(on, -1), be_const_closure(class_webserver_async_on_closure) },
        { be_const_key_weak(close, -1), be_const_closure(class_webserver_async_close_closure) },
        { be_const_key_weak(fastloop_cb, 4), be_const_var(2) },
        { be_const_key_weak(server, 19), be_const_var(1) },
        { be_const_key_weak(set_cors, 15), be_const_closure(class_webserver_async_set_cors_closure) },
        { be_const_key_weak(init, -1), be_const_closure(class_webserver_async_init_closure) },
        { be_const_key_weak(p1, 8), be_const_var(7) },
        { be_const_key_weak(connections, -1), be_const_var(3) },
        { be_const_key_weak(local_port, 5), be_const_var(0) },
        { be_const_key_weak(bytes_append_int, -1), be_const_static_closure(class_webserver_async_bytes_append_int_closure) },
        { be_const_key_weak(re_http_srv_header, -1), be_const_bytes_instance(2B000000130000000200000062030260FB7E007E020304415A617A30392D2D62F47E03013A01207E0462030260FB7E05010D010A7E017F) },
        { be_const_key_weak(webserver_async_cnx, -1), be_const_class(be_class_webserver_async_cnx) },
        { be_const_key_weak(re_http_srv_body, 2), be_const_bytes_instance(0E000000080000000000000062030260FB7E00010D010A7E017F) },
        { be_const_key_weak(bytes_format_hex, -1), be_const_static_closure(class_webserver_async_bytes_format_hex_closure) },
    })),
    be_str_weak(webserver_async)
);
/********************************************************************/
/* End of solidification */
