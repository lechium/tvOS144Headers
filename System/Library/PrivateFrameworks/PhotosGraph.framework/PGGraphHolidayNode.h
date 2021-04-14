/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGGraphOptimizedNode.h>
#import <libobjc.A.dylib/PGGraphLocalizable.h>

@class NSString;

@interface PGGraphHolidayNode : PGGraphOptimizedNode <PGGraphLocalizable> {

	unsigned _category : 8;
	NSString* _name;

}

@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(unsigned short)domain;
-(NSString *)localizedName;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(void)setLocalProperties:(id)arg1 ;
-(void)enumerateCelebratingMomentNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCelebratingHighlightNodesUsingBlock:(/*^block*/id)arg1 ;
@end
