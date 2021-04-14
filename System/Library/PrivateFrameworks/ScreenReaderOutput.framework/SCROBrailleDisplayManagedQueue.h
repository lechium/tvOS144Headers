/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject {

	SCRCIndexMap* _stateQueueMap;
	CFDictionaryRef _queueStateDict;
	CFDictionaryRef _displayQueueDict;
	SCRCIndexMap* _tokenDisplayMap;
	unsigned long long _maxActiveQueueSize;

}
-(id)init;
-(void)dealloc;
-(void)removeDisplay:(id)arg1 ;
-(id)_queueForState:(int)arg1 createQueue:(BOOL)arg2 ;
-(void)_fillActiveBrailleDisplayQueue;
-(id)disconnectedDisplays;
-(void)addDisplay:(id)arg1 withState:(int)arg2 ;
-(void)setState:(int)arg1 forDisplay:(id)arg2 ;
-(int)stateForDisplay:(id)arg1 ;
-(id)displayForToken:(int)arg1 ;
-(unsigned long long)displayCountIncludingDisconnectedDisplays:(BOOL)arg1 ;
-(id)primaryDisplay;
-(void)setPrimaryDisplay:(id)arg1 ;
-(unsigned long long)activeQueueMaximumSize;
-(void)setActiveQueueMaximumSize:(unsigned long long)arg1 ;
-(id)activeDisplays;
-(id)activePendingDisplays;
-(id)sleepingDisplays;
-(id)loadingDisplays;
@end

