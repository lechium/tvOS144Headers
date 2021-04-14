/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVPlayback/TVPPlaybackInterruptableRegistration.h>

@class NSMutableDictionary, TVPPlaybackInterruptionGroup, NSString;

@interface TVPPlaybackInterruptionCenter : NSObject <TVPPlaybackInterruptableRegistration> {

	NSMutableDictionary* _interruptionGroupByInterruptionID;
	TVPPlaybackInterruptionGroup* _uninterruptedGroup;

}

@property (nonatomic,retain) NSMutableDictionary * interruptionGroupByInterruptionID;              //@synthesize interruptionGroupByInterruptionID=_interruptionGroupByInterruptionID - In the implementation block
@property (nonatomic,retain) TVPPlaybackInterruptionGroup * uninterruptedGroup;                    //@synthesize uninterruptedGroup=_uninterruptedGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultInterruptionCenter;
-(id)init;
-(void)addInterruptable:(id)arg1 ;
-(void)removeInterruptable:(id)arg1 ;
-(void)interruptionWillBeginWithID:(id)arg1 ;
-(void)interruptionDidBeginWithID:(id)arg1 ;
-(void)interruptionWillEndWithID:(id)arg1 ;
-(void)interruptionDidEndWithID:(id)arg1 ;
-(NSMutableDictionary *)interruptionGroupByInterruptionID;
-(TVPPlaybackInterruptionGroup *)uninterruptedGroup;
-(void)setUninterruptedGroup:(TVPPlaybackInterruptionGroup *)arg1 ;
-(id)_allInterruptionGroups;
-(void)setInterruptionGroupByInterruptionID:(NSMutableDictionary *)arg1 ;
@end

