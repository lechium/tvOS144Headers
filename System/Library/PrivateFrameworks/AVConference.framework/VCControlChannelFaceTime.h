/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCControlChannel.h>

@interface VCControlChannelFaceTime : VCControlChannel {

	unsigned _callID;
	tagHANDLE* _SIPHandle;

}
-(void)dealloc;
-(BOOL)sendReliableMessageAndWait:(id)arg1 ;
-(id)initWithCallID:(unsigned)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 ;
-(void)sendReliableMessage:(id)arg1 ;
@end

