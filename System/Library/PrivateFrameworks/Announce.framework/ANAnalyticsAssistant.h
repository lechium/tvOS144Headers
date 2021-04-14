/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Announce/Announce-Structs.h>
#import <libobjc.A.dylib/ANAnalyticsAssistantProtocol.h>

@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>
-(id)_playerForAnnouncement:(id)arg1 ;
-(int)_linearBucketAtInterval:(double)arg1 value:(double)arg2 max:(double)arg3 ;
-(ANAnalyticsAssistantAudioData)audioDataForAnnouncement:(id)arg1 ;
-(ANAnalyticsAssistantSenderData)senderDataForAnnouncement:(id)arg1 ;
-(long long)boundGroupCount:(long long)arg1 ;
-(long long)bucketFromSize:(long long)arg1 ;
-(long long)bucketFromDuration:(double)arg1 ;
-(long long)bucketFromReceiveTime:(double)arg1 ;
@end

