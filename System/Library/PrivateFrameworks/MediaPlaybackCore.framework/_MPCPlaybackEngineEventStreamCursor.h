/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPCPlaybackEngineEventStreamCursor.h>

@class MPCPlaybackEngineEventStream, NSUUID, NSString;

@interface _MPCPlaybackEngineEventStreamCursor : NSObject <MPCPlaybackEngineEventStreamCursor> {

	MPCPlaybackEngineEventStream* _eventStream;
	NSUUID* _startEventIdentifier;
	NSUUID* _endEventIdentifier;

}

@property (nonatomic,readonly) MPCPlaybackEngineEventStream * eventStream;              //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * startEventIdentifier;                      //@synthesize startEventIdentifier=_startEventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * endEventIdentifier;                        //@synthesize endEventIdentifier=_endEventIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlaybackEngineEventStream *)eventStream;
-(id)findPreviousEventWithType:(id)arg1 matchingPayload:(id)arg2 ;
-(id)findPreviousEventWithTypes:(id)arg1 matchingPayload:(id)arg2 ;
-(id)cursorUntilEvent:(id)arg1 ;
-(long long)countOfPreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 ;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)cursorFromEvent:(id)arg1 untilEvent:(id)arg2 ;
-(void)enumeratePreviousEventsWithType:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithEventStream:(id)arg1 startEventIdentifier:(id)arg2 endEventIdentifier:(id)arg3 ;
-(long long)countOfPreviousEventsWithTypes:(id)arg1 matchingPayload:(id)arg2 ;
-(void)enumeratePreviousEventsWithType:(id)arg1 matchingPayload:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSUUID *)startEventIdentifier;
-(NSUUID *)endEventIdentifier;
@end

