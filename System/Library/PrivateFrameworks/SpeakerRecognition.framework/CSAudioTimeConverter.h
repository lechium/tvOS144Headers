/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface CSAudioTimeConverter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _anchorSampleCount;
	unsigned long long _anchorHostTime;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long anchorSampleCount;              //@synthesize anchorSampleCount=_anchorSampleCount - In the implementation block
@property (assign,nonatomic) unsigned long long anchorHostTime;                 //@synthesize anchorHostTime=_anchorHostTime - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1 ;
-(void)processSampleCount:(unsigned long long)arg1 hostTime:(unsigned long long)arg2 ;
-(unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1 ;
-(unsigned long long)anchorSampleCount;
-(void)setAnchorSampleCount:(unsigned long long)arg1 ;
-(unsigned long long)anchorHostTime;
-(void)setAnchorHostTime:(unsigned long long)arg1 ;
@end

