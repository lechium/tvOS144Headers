/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class NSArray;

@interface _HKDocumentQueryServerConfiguration : HKQueryServerConfiguration {

	BOOL _includeDocumentData;
	NSArray* _sortDescriptors;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSArray * sortDescriptors;               //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) BOOL includeDocumentData;              //@synthesize includeDocumentData=_includeDocumentData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(void)setIncludeDocumentData:(BOOL)arg1 ;
-(BOOL)includeDocumentData;
@end

