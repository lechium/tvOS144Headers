/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:49 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <QuartzCore/QuartzCore-Structs.h>
@class CALayer;

@interface CAStateController : NSObject {

	CAStateControllerData* _data;

}

@property (readonly) CALayer * layer; 
@property (__weak) NSObject*<CAStateControllerDelegate> delegate; 
-(void)dealloc;
-(NSObject*<CAStateControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<CAStateControllerDelegate>)arg1 ;
-(CALayer *)layer;
-(void)_removeTransition:(id)arg1 layer:(id)arg2 ;
-(id)initWithLayer:(id)arg1 ;
-(id)stateOfLayer:(id)arg1 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 transitionSpeed:(float)arg3 ;
-(void)setState:(id)arg1 ofLayer:(id)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 transitionSpeed:(float)arg2 ;
-(void)setInitialStatesOfLayer:(id)arg1 ;
-(id)removeAllStateChanges;
-(void)restoreStateChanges:(id)arg1 ;
-(void)cancelTimers;
-(void)_nextStateTimer:(id)arg1 ;
-(void)_addAnimation:(id)arg1 forKey:(id)arg2 target:(id)arg3 undo:(id)arg4 ;
-(void)_applyTransition:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
-(void)_applyTransitionElement:(id)arg1 layer:(id)arg2 undo:(id)arg3 speed:(float)arg4 ;
@end

