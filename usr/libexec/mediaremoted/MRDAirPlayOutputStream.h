//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class APReceiverMediaRemoteCommunicationChannel, NSError;

@interface MRDAirPlayOutputStream : MRAVBufferedOutputStream
{
    NSError *_streamError;	// 8 = 0x8
    APReceiverMediaRemoteCommunicationChannel *_communicationChannel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000588c4
@property(readonly, nonatomic) APReceiverMediaRemoteCommunicationChannel *communicationChannel; // @synthesize communicationChannel=_communicationChannel;
- (id)streamError;	// IMP=0x00000001000588a4
- (_Bool)hasSpaceAvailable;	// IMP=0x000000010005889c
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000100058698
- (id)description;	// IMP=0x000000010005860c
- (id)initWithURL:(id)arg1 append:(_Bool)arg2;	// IMP=0x0000000100058558
- (id)initToBuffer:(char *)arg1 capacity:(unsigned long long)arg2;	// IMP=0x00000001000584a4
- (id)initToMemory;	// IMP=0x00000001000583f0
- (id)initWithCommunicationChannel:(id)arg1;	// IMP=0x0000000100058370

@end

