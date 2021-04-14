/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObject.h>
#import <libobjc.A.dylib/MCAnimationPathSupport.h>
#import <libobjc.A.dylib/MCActionSupport.h>

@class NSMutableSet, NSMutableDictionary, MCContainer, NSSet, NSDictionary;

@interface MCPlug : MCObject <MCAnimationPathSupport, MCActionSupport> {

	unsigned mFlags;
	NSMutableSet* mAnimationPaths;
	NSMutableDictionary* mActions;
	MCContainer* mContainer;
	double mPhaseInDuration;
	double mLoopDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (retain) MCContainer * container; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) BOOL preactivatesWithParent; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(MCContainer *)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeAllActions;
-(NSDictionary *)actions;
-(void)setContainer:(MCContainer *)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)removeActionForKey:(id)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(double)fullDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)demolish;
-(double)loopDuration;
-(void)setStartsPaused:(BOOL)arg1 ;
-(BOOL)startsPaused;
-(BOOL)preactivatesWithParent;
-(unsigned long long)countOfAnimationPaths;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(unsigned long long)countOfActions;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)initActionsWithImprints:(id)arg1 ;
-(void)demolishActions;
-(id)imprintsForActions;
-(void)setPreactivatesWithParent:(BOOL)arg1 ;
@end

