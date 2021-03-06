/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIStatusBarPrioritized.h>

@class _UIStatusBarIdentifier, NSString, NSSet, NSMutableArray;

@interface _UIStatusBarAnimation : NSObject <NSCopying, _UIStatusBarPrioritized> {

	BOOL _delaysAnimatingItems;
	BOOL _delaysDependentItems;
	BOOL _enabled;
	long long _priority;
	_UIStatusBarIdentifier* _displayItemIdentifier;
	NSString* _identifier;
	NSString* _exclusivityGroupIdentifier;
	long long _type;
	/*^block*/id _prepareBlock;
	NSSet* _delayedItemIdentifiers;
	NSSet* _delayedDisplayItemPlacements;
	NSMutableArray* _subAnimations;
	_UIStatusBarAnimation* _parentAnimation;
	/*^block*/id _animationBlock;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSMutableArray * subAnimations;                              //@synthesize subAnimations=_subAnimations - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBarAnimation * parentAnimation;              //@synthesize parentAnimation=_parentAnimation - In the implementation block
@property (nonatomic,copy) id animationBlock;                                             //@synthesize animationBlock=_animationBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;                         //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSSet * effectiveDelayedItemIdentifiers; 
@property (nonatomic,copy) _UIStatusBarIdentifier * displayItemIdentifier;                //@synthesize displayItemIdentifier=_displayItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * exclusivityGroupIdentifier;                         //@synthesize exclusivityGroupIdentifier=_exclusivityGroupIdentifier - In the implementation block
@property (nonatomic,copy) id prepareBlock;                                               //@synthesize prepareBlock=_prepareBlock - In the implementation block
@property (nonatomic,copy) NSSet * delayedItemIdentifiers;                                //@synthesize delayedItemIdentifiers=_delayedItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSSet * delayedDisplayItemPlacements;                          //@synthesize delayedDisplayItemPlacements=_delayedDisplayItemPlacements - In the implementation block
@property (assign,nonatomic) BOOL delaysAnimatingItems;                                   //@synthesize delaysAnimatingItems=_delaysAnimatingItems - In the implementation block
@property (assign,nonatomic) BOOL delaysDependentItems;                                   //@synthesize delaysDependentItems=_delaysDependentItems - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
+(void)initialize;
+(id)animationWithBlock:(/*^block*/id)arg1 ;
+(void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2 ;
+(void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2 ;
+(void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)identifier;
-(void)cancel;
-(long long)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEnabled;
-(id)prepareBlock;
-(void)setPrepareBlock:(id)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 ;
-(id)animationBlock;
-(NSMutableArray *)subAnimations;
-(void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2 ;
-(void)setDelaysDependentItems:(BOOL)arg1 ;
-(void)setExclusivityGroupIdentifier:(NSString *)arg1 ;
-(void)setDelayedItemIdentifiers:(NSSet *)arg1 ;
-(void)setDelayedDisplayItemPlacements:(NSSet *)arg1 ;
-(void)setDelaysAnimatingItems:(BOOL)arg1 ;
-(NSSet *)effectiveDelayedItemIdentifiers;
-(void)addTotalCompletionHandler:(/*^block*/id)arg1 ;
-(_UIStatusBarIdentifier *)displayItemIdentifier;
-(void)performForStatusBar:(id)arg1 ;
-(void)setAnimationBlock:(id)arg1 ;
-(void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 ;
-(NSString *)exclusivityGroupIdentifier;
-(void)setDisplayItemIdentifier:(_UIStatusBarIdentifier *)arg1 ;
-(void)setParentAnimation:(_UIStatusBarAnimation *)arg1 ;
-(NSSet *)delayedItemIdentifiers;
-(NSSet *)delayedDisplayItemPlacements;
-(id)_dependentItemIdentifiersEnabledOnly:(BOOL)arg1 ;
-(BOOL)delaysAnimatingItems;
-(BOOL)delaysDependentItems;
-(void)setSubAnimations:(NSMutableArray *)arg1 ;
-(_UIStatusBarAnimation *)parentAnimation;
@end

