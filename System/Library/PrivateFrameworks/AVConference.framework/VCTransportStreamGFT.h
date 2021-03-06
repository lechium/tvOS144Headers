/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStreamGFT : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;
	/*^block*/id _callback;
	void* _callbackContext;
	int _vtpCallbackId;
	fd_set _readFDsForCallback;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(void)dealloc;
-(int)receivePacket:(SCD_Struct_VC191*)arg1 ;
-(tagVCMediaQueueRef)mediaQueue;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC191*)arg1 ;
-(int)registerPacketCallbackContext:(void*)arg1 callback:(/*^block*/id)arg2 ;
-(void)VCTransportStreamUnblock;
-(int)unregisterPacketCallback;
-(void)processVTPPacket:(VTPPacket*)arg1 ;
@end

