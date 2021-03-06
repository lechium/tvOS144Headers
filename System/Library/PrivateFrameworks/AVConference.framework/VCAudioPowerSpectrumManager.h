/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCAudioPowerSpectrumMeterDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSMutableDictionary, AVConferenceXPCClient, NSObject, NSString;

@interface VCAudioPowerSpectrumManager : NSObject <VCAudioPowerSpectrumMeterDelegate> {

	NSMutableArray* _meters;
	NSMutableDictionary* _sources;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _xpcCommandQueue;

}

@property (nonatomic,readonly) NSMutableArray * meters;                    //@synthesize meters=_meters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * sources;              //@synthesize sources=_sources - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)meters;
-(NSMutableDictionary *)sources;
-(void)audioPowerSpectrumMeter:(id)arg1 didUpdateAudioPowerSpectrums:(id)arg2 ;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)registerAudioPowerMeterSource:(id)arg1 ;
-(void)unregisterAudioPowerSpectrumSourceForStreamToken:(id)arg1 ;
@end

