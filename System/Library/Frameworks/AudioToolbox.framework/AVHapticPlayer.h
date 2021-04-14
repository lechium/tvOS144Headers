/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:48 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AVHapticClient, NSMutableArray, NSArray;

@interface AVHapticPlayer : NSObject {

	AVHapticClient* _client;
	BOOL _resourcesAllocated;
	unsigned long long _behavior;
	NSMutableArray* _channelArray;
	/*^block*/id _connectionErrorHandler;
	/*^block*/id _stopRunningHandler;

}

@property (readonly) AVHapticClient * client;                          //@synthesize client=_client - In the implementation block
@property (readonly) BOOL resourcesAllocated;                          //@synthesize resourcesAllocated=_resourcesAllocated - In the implementation block
@property (copy) id stopRunningHandler;                                //@synthesize stopRunningHandler=_stopRunningHandler - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) NSArray * channels; 
@property (readonly) double currentMediaTime; 
@property (readonly) double hapticLatency; 
@property (copy) id connectionErrorHandler; 
+(BOOL)isSupported;
-(void)dealloc;
-(AVHapticClient *)client;
-(id)addChannel:(id*)arg1 ;
-(NSArray *)channels;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)queryServerCapabilities:(id)arg1 reply:(/*^block*/id)arg2 ;
-(double)hapticLatency;
-(BOOL)loadHapticEvent:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)createCustomAudioEvent:(id)arg1 format:(id)arg2 frames:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(BOOL)copyCustomAudioEvent:(unsigned long long)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(BOOL)referenceCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)releaseCustomAudioEvent:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopPrewarm;
-(void)stopRunning;
-(void)expectNotifyAfter:(double)arg1 ;
-(BOOL)loadAndPrepareHapticSequenceFromData:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromEvents:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)loadAndPrepareHapticSequenceFromVibePattern:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)prepareHapticSequence:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)enableSequenceLooping:(unsigned long long)arg1 enable:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)setSequenceLoopLength:(unsigned long long)arg1 length:(float)arg2 error:(id*)arg3 ;
-(BOOL)setSequencePlaybackRate:(unsigned long long)arg1 rate:(float)arg2 error:(id*)arg3 ;
-(BOOL)stopHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)pauseHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)resumeHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 ;
-(BOOL)seekHapticSequence:(unsigned long long)arg1 toTime:(double)arg2 ;
-(BOOL)clearSequenceEvents:(unsigned long long)arg1 atTime:(double)arg2 ;
-(void)detachHapticSequence:(unsigned long long)arg1 ;
-(void)releaseChannels;
-(id)createOptionsFromAudioSessionID:(unsigned)arg1 shared:(BOOL)arg2 ;
-(BOOL)doInitWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)initAndReturnError:(id*)arg1 ;
-(id)initWithSessionID:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithSessionID:(unsigned)arg1 sessionIsShared:(BOOL)arg2 error:(id*)arg3 ;
-(void)setBehavior:(unsigned long long)arg1 ;
-(unsigned long long)getBehavior;
-(BOOL)setNumberOfChannels:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)removeChannel:(id)arg1 error:(id*)arg2 ;
-(double)currentMediaTime;
-(void)setConnectionErrorHandler:(id)arg1 ;
-(id)connectionErrorHandler;
-(void)invalidateChannels;
-(void)allocateRenderResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deallocateRenderResources;
-(void)prewarmWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)startRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopRunningWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)finishWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)playHapticSequence:(unsigned long long)arg1 atTime:(double)arg2 offset:(double)arg3 ;
-(BOOL)setSequenceChannelParam:(unsigned long long)arg1 atTime:(double)arg2 channel:(unsigned long long)arg3 param:(unsigned long long)arg4 value:(float)arg5 error:(id*)arg6 ;
-(id)stopRunningHandler;
-(void)setStopRunningHandler:(id)arg1 ;
-(BOOL)resourcesAllocated;
-(unsigned long long)behavior;
@end

