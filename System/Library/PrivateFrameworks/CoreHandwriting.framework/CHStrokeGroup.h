/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, CHEncodedStrokeIdentifier, NSString;

@interface CHStrokeGroup : NSObject <NSSecureCoding> {

	long long _uniqueIdentifier;
	long long _ancestorIdentifier;
	NSSet* _strokeIdentifiers;
	CHEncodedStrokeIdentifier* _firstStrokeIdentifier;
	CHEncodedStrokeIdentifier* _lastStrokeIdentifier;
	long long _classification;
	double _groupingConfidence;
	NSString* _strategyIdentifier;
	CGPoint _firstStrokeOrigin;
	CGRect _bounds;

}

@property (nonatomic,readonly) long long uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long ancestorIdentifier;                                   //@synthesize ancestorIdentifier=_ancestorIdentifier - In the implementation block
@property (nonatomic,readonly) CGRect bounds;                                                  //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGPoint firstStrokeOrigin;                                      //@synthesize firstStrokeOrigin=_firstStrokeOrigin - In the implementation block
@property (nonatomic,readonly) CGVector averageWritingOrientation; 
@property (nonatomic,readonly) NSSet * strokeIdentifiers;                                      //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) CHEncodedStrokeIdentifier * firstStrokeIdentifier;              //@synthesize firstStrokeIdentifier=_firstStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) CHEncodedStrokeIdentifier * lastStrokeIdentifier;               //@synthesize lastStrokeIdentifier=_lastStrokeIdentifier - In the implementation block
@property (nonatomic,readonly) long long classification;                                       //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) double groupingConfidence;                                      //@synthesize groupingConfidence=_groupingConfidence - In the implementation block
@property (nonatomic,readonly) NSString * strategyIdentifier;                                  //@synthesize strategyIdentifier=_strategyIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)strokeIdentifierToGroupIndexMappingForStrokeIdentifiers:(id)arg1 orderedStrokeGroups:(id)arg2 ;
+(id)strokeGroupsClusteredByProximity:(id)arg1 ;
+(long long)_newStrokeGroupUniqueIdentifier;
+(double)_averageInterStrokeGroupDistanceForSortedStrokeGroups:(id)arg1 outStdDev:(double*)arg2 ;
+(id)strokeGroupContainingStrokeIdentifier:(id)arg1 strokeGroups:(id)arg2 foundStrokeGroupIndex:(long long*)arg3 ;
+(BOOL)isStrokeGroupSet:(id)arg1 equivalentToStrokeGroupSet:(id)arg2 ;
+(id)strokeGroupContainingStrokeIdentifier:(id)arg1 strokeGroups:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)uniqueIdentifier;
-(CGRect)bounds;
-(long long)classification;
-(long long)ancestorIdentifier;
-(NSSet *)strokeIdentifiers;
-(CHEncodedStrokeIdentifier *)firstStrokeIdentifier;
-(CHEncodedStrokeIdentifier *)lastStrokeIdentifier;
-(CGPoint)firstStrokeOrigin;
-(double)groupingConfidence;
-(id)groupByAddingStrokeIdentifiers:(id)arg1 removingStrokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 firstStrokeOrigin:(CGPoint)arg8 ;
-(NSString *)strategyIdentifier;
-(const CGPathRef)newEstimatedBaselineForStrokesWithIdentifiers:(id)arg1 estimatedDescenderLocations:(id)arg2 ;
-(id)initWithStrokeIdentifiers:(id)arg1 firstStrokeIdentifier:(id)arg2 lastStrokeIdentifier:(id)arg3 bounds:(CGRect)arg4 classification:(long long)arg5 groupingConfidence:(double)arg6 strategyIdentifier:(id)arg7 firstStrokeOrigin:(CGPoint)arg8 ;
-(BOOL)isEquivalentToStrokeGroup:(id)arg1 ;
-(CGVector)averageWritingOrientation;
-(id)initWithAncestorIdentifier:(long long)arg1 strokeIdentifiers:(id)arg2 firstStrokeIdentifier:(id)arg3 lastStrokeIdentifier:(id)arg4 bounds:(CGRect)arg5 classification:(long long)arg6 groupingConfidence:(double)arg7 strategyIdentifier:(id)arg8 firstStrokeOrigin:(CGPoint)arg9 ;
-(id)initWithUniqueIdentifier:(long long)arg1 ancestorIdentifier:(long long)arg2 strokeIdentifiers:(id)arg3 firstStrokeIdentifier:(id)arg4 lastStrokeIdentifier:(id)arg5 bounds:(CGRect)arg6 classification:(long long)arg7 groupingConfidence:(double)arg8 strategyIdentifier:(id)arg9 firstStrokeOrigin:(CGPoint)arg10 ;
-(BOOL)isEqualToStrokeGroup:(id)arg1 ;
@end

