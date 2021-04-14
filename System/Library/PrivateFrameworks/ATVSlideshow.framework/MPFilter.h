/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>

@protocol MPFilterSupport;
@class NSMutableDictionary, MCFilter, NSObject, MPFilterInternal, NSString;

@interface MPFilter : NSObject <NSCopying, MPAnimationSupport> {

	NSMutableDictionary* _attributes;
	NSMutableDictionary* _animationPaths;
	MCFilter* _filter;
	NSObject*<MPFilterSupport> _parent;
	MPFilterInternal* _internal;

}

@property (nonatomic,copy) NSString * filterID; 
@property (nonatomic,copy) NSString * presetID; 
+(id)filterWithFilterID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(long long)index;
-(void)dump;
-(id)parent;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(void)setDefaults;
-(NSString *)filterID;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
-(id)convertMPAttributeToMCAttribute:(id)arg1 withKey:(id)arg2 ;
-(id)fullDebugLog;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)copyStruct:(id)arg1 ;
-(NSString *)presetID;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setFilterID:(NSString *)arg1 ;
-(id)initWithFilterID:(id)arg1 ;
-(id)filterAttributes;
-(id)filterAttributeForKey:(id)arg1 ;
-(void)setFilterAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)convertMCAttributeToMPAttribute:(id)arg1 withKey:(id)arg2 ;
@end

