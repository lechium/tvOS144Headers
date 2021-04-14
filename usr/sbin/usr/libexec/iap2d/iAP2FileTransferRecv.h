//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "iAP2FileTransferBase.h"

@protocol iAP2FileTransferRecvDelegate;

@interface iAP2FileTransferRecv : iAP2FileTransferBase
{
}

+ (id)allocWithConnection:(id)arg1 buffID:(unsigned char)arg2 recvAsStream:(_Bool)arg3 type:(int)arg4 typeData:(CDStruct_b9f3b006 *)arg5 delegate:(id)arg6 onQueue:(id)arg7;	// IMP=0x00000001000588d4
+ (_Bool)validBuffID:(unsigned char)arg1;	// IMP=0x00000001000588c4
- (void)_handleReceivedData;	// IMP=0x0000000100058aa0
@property(readonly, nonatomic) id <iAP2FileTransferRecvDelegate> delegate;
- (struct iAP2FileTransfer_st *)fileXfer;	// IMP=0x0000000100058a90
- (void)dealloc;	// IMP=0x0000000100058a5c
- (id)initWithConnection:(id)arg1 buffID:(unsigned char)arg2 recvAsStream:(_Bool)arg3 type:(int)arg4 typeData:(CDStruct_b9f3b006 *)arg5 delegate:(id)arg6 onQueue:(id)arg7;	// IMP=0x00000001000589d8

@end

