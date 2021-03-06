/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSRunLoop : NSObject {

	id _rl;
	id _dperf;
	id _perft;
	id _info;
	id _ports;
	void** _reserved[6];

}
+(id)currentRunLoop;
+(id)_new:(id)arg1 ;
+(id)mainRunLoop;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)run;
-(CFRunLoopRef)getCFRunLoop;
-(void)addTimer:(id)arg1 forMode:(id)arg2 ;
-(void)_enumerateInfoPairsWithBlock:(/*^block*/id)arg1 ;
-(void)_portInvalidated:(id)arg1 ;
-(BOOL)_containsPort:(id)arg1 forMode:(id)arg2 ;
-(void)_addPort:(id)arg1 forMode:(id)arg2 ;
-(void)_removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)runMode:(id)arg1 beforeDate:(id)arg2 ;
-(void)performInModes:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)addPort:(id)arg1 forMode:(id)arg2 ;
-(void)removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)containsPort:(id)arg1 forMode:(id)arg2 ;
-(id)portsForMode:(id)arg1 ;
-(void)removeTimer:(id)arg1 forMode:(id)arg2 ;
-(id)timersForMode:(id)arg1 ;
-(BOOL)containsTimer:(id)arg1 forMode:(id)arg2 ;
-(id)allModes;
-(id)currentMode;
-(void)_invalidateTimers;
-(id)limitDateForMode:(id)arg1 ;
-(void)_wakeup;
-(void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)runMode:(id)arg1 untilDate:(id)arg2 ;
-(void)runUntilDate:(id)arg1 ;
-(BOOL)runBeforeDate:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5 ;
-(void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(void)cancelPerformSelectorsWithTarget:(id)arg1 ;
@end

