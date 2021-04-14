/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MCContainer.h>

@class NSMutableDictionary, NSArray, NSSet;

@interface MCContainerParallelizer : MCContainer {

	NSMutableDictionary* mPlugs;
	NSArray* mCachedZOrderedPlugs;
	CGColorRef mBackgroundColor;

}

@property (readonly) NSSet * plugs; 
@property (nonatomic,readonly) unsigned long long countOfPlugs; 
@property (readonly) NSArray * zOrderedPlugs; 
@property (assign) CGColorRef backgroundColor; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(id)plugForID:(id)arg1 ;
-(void)removePlugForID:(id)arg1 ;
-(id)setPlugForContainer:(id)arg1 forID:(id)arg2 ;
-(void)demolish;
-(void)removePlug:(id)arg1 ;
-(NSArray *)zOrderedPlugs;
-(NSSet *)plugs;
-(id)imprint;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned long long)countOfPlugs;
-(void)changeIDOfPlug:(id)arg1 toID:(id)arg2 ;
-(void)removeAllPlugs;
-(id)setPlugProxyForPlug:(id)arg1 ;
@end

