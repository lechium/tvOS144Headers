/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/GCNamedProfile.h>

@class NSString, GCMotion;

@interface _GCAssertingProfile : NSObject <GCNamedProfile>

@property (readonly) NSString * name; 
@property (retain) GCMotion * _motion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(unsigned)sampleRate;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(void)setController:(id)arg1 ;
-(GCMotion *)_motion;
-(id)initWithController:(id)arg1 ;
-(id)productCategory;
-(/*^block*/id)valueChangedHandler;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(void)set_motion:(GCMotion *)arg1 ;
-(void)appWillResignActive;
-(void)appDidBecomeActive;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
@end

