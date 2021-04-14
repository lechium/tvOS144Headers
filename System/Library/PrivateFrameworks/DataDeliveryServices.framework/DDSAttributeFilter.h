/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface DDSAttributeFilter : NSObject <NSSecureCoding> {

	NSMutableDictionary* _filters;

}

@property (nonatomic,retain) NSMutableDictionary * filters;              //@synthesize filters=_filters - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)hashObject:(id)arg1 ;
+(id)attributeFilter;
+(unsigned long long)hashDictionary:(id)arg1 ;
+(unsigned long long)hashSet:(id)arg1 ;
+(id)attributeFilterWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSMutableDictionary *)filters;
-(void)setFilters:(NSMutableDictionary *)arg1 ;
-(void)addAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)addAllowedValues:(id)arg1 forKey:(id)arg2 ;
-(void)enumerateAllowedValuesAndKeys:(/*^block*/id)arg1 ;
-(id)allowedValuesForKey:(id)arg1 ;
-(id)_setForKey:(id)arg1 ;
-(BOOL)isEqualToQueryFilter:(id)arg1 ;
-(void)addEntriesFromFilter:(id)arg1 ;
-(id)entriesMatchingAttributes:(id)arg1 ;
-(BOOL)doesContainAttributes:(id)arg1 ;
-(void)removeAllowedValue:(id)arg1 forKey:(id)arg2 ;
-(void)removeAllowedValues:(id)arg1 forKey:(id)arg2 ;
@end
