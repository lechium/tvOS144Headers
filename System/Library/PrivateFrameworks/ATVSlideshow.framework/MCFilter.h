/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/MCObject.h>
#import <libobjc.A.dylib/MCAnimationPathSupport.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSSet, NSDictionary;

@interface MCFilter : MCObject <MCAnimationPathSupport> {

	NSMutableDictionary* mAttributes;
	NSMutableSet* mAnimationPaths;
	unsigned long long mIndex;
	NSString* mFilterID;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (copy) NSString * filterID; 
@property (copy) NSDictionary * attributes; 
@property (assign,nonatomic) unsigned long long index; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDictionary *)attributes;
-(unsigned long long)index;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(NSString *)filterID;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)demolish;
-(void)setFilterID:(NSString *)arg1 ;
-(unsigned long long)countOfAnimationPaths;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
@end

