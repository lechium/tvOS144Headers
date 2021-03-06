/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:12 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSortDescriptor, NSComparisonPredicate;

@interface HKQuerySortConstraint : NSObject <NSCopying, NSSecureCoding> {

	NSSortDescriptor* _sortDescriptor;
	NSComparisonPredicate* _predicate;

}

@property (nonatomic,copy,readonly) NSSortDescriptor * sortDescriptor;              //@synthesize sortDescriptor=_sortDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSComparisonPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sortConstraintWithSortDescriptor:(id)arg1 predicate:(id)arg2 ;
+(id)sortConstraintByRelaxingSortConstraint:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSComparisonPredicate *)predicate;
-(NSSortDescriptor *)sortDescriptor;
-(id)initWithSortDescriptor:(id)arg1 predicate:(id)arg2 ;
-(BOOL)canRelax;
@end

