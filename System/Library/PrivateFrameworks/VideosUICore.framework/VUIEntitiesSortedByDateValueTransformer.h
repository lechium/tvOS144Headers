/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSValueTransformer.h>

@class NSDate;

@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer {

	unsigned long long _maxEntities;
	NSDate* _earliestDate;
	/*^block*/id _dateForEntityBlock;

}

@property (nonatomic,copy) id dateForEntityBlock;                         //@synthesize dateForEntityBlock=_dateForEntityBlock - In the implementation block
@property (assign,nonatomic) unsigned long long maxEntities;              //@synthesize maxEntities=_maxEntities - In the implementation block
@property (nonatomic,copy) NSDate * earliestDate;                         //@synthesize earliestDate=_earliestDate - In the implementation block
+(BOOL)allowsReverseTransformation;
+(Class)transformedValueClass;
-(id)init;
-(id)transformedValue:(id)arg1 ;
-(NSDate *)earliestDate;
-(void)setEarliestDate:(NSDate *)arg1 ;
-(void)setMaxEntities:(unsigned long long)arg1 ;
-(id)dateForEntityBlock;
-(unsigned long long)maxEntities;
-(id)initWithDateForEntityBlock:(/*^block*/id)arg1 ;
-(void)setDateForEntityBlock:(id)arg1 ;
@end

